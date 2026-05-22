/*
 * XREFs of ?OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z @ 0x18008E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x18008E8E4 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 */

__int64 __fastcall SpeechRuntimeListener::OnMessageCallbackStatic(SpeechRuntimeListener *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( *a2 )
  {
    return (unsigned int)-2018375668;
  }
  else
  {
    v4 = SpeechRuntimeListener::OnSelect(a1);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        126LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
        (const char *)(unsigned int)v4);
      JUMPOUT(0x18008E8DCLL);
    }
  }
  return v2;
}
