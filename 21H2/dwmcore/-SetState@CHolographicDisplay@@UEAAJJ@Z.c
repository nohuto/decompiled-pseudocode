/*
 * XREFs of ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x180298720
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180042824 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHolographicDisplay::SetState(CHolographicDisplay *this)
{
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // r10
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v7; // [rsp+20h] [rbp-38h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( CNotificationResource::ShouldNotify((CHolographicDisplay *)((char *)this - 72)) )
  {
    v2 = *(_QWORD *)(v1 - 24);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 - 56) + 1240LL) + 40LL);
    if ( v2 )
      v4 = *(_DWORD *)(v2 + 76);
    else
      v4 = 0;
    v8[0] = v4;
    v8[1] = *(unsigned int *)(v1 - 8);
    v5 = CoreUICallSend(v3, v8, 2LL, 10LL, 0, &unk_18032C3CC);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        236LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicdisplay.cpp",
        (const char *)v5,
        v7);
  }
  return 0LL;
}
