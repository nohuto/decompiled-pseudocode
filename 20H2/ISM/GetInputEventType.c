/*
 * XREFs of GetInputEventType @ 0x1800BA88C
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800BA590 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetInputEventType(int a1, __int64 a2, __int64 a3, const char *a4)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1 - 1;
  if ( !v4 )
    return 1LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 8LL;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
      return 16LL;
    v8 = v7 - 1;
    if ( !v8 )
      return 2LL;
    if ( v8 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        131LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        a4);
      __debugbreak();
    }
  }
  return 4LL;
}
