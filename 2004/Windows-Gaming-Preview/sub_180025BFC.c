/*
 * XREFs of sub_180025BFC @ 0x180025BFC
 * Callers:
 *     sub_180020330 @ 0x180020330 (sub_180020330.c)
 *     sub_180020C70 @ 0x180020C70 (sub_180020C70.c)
 *     sub_180021C20 @ 0x180021C20 (sub_180021C20.c)
 *     sub_180022010 @ 0x180022010 (sub_180022010.c)
 *     sub_180023224 @ 0x180023224 (sub_180023224.c)
 *     sub_180032FF0 @ 0x180032FF0 (sub_180032FF0.c)
 *     sub_180033320 @ 0x180033320 (sub_180033320.c)
 *     sub_1800345CC @ 0x1800345CC (sub_1800345CC.c)
 *     sub_180035400 @ 0x180035400 (sub_180035400.c)
 *     sub_1800357F0 @ 0x1800357F0 (sub_1800357F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025BFC(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  int MatchingRestrictedErrorInfo; // ecx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  if ( (_DWORD)a1 == -2147417848
    || (_DWORD)a1 == -2147023174
    || (_DWORD)a1 == -1996357631
    || (_DWORD)a1 == -2147418105
    || (_DWORD)a1 == -2147418094 )
  {
    RoTransformError(a1, 0LL, 0LL);
    v3 = 0;
  }
  v4 = IsErrorPropagationEnabled();
  if ( (v3 & 0x80000000) != 0 )
  {
    if ( v4 )
    {
      v9 = 0LL;
      MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v3, &v9);
      if ( MatchingRestrictedErrorInfo >= 0 )
        MatchingRestrictedErrorInfo = RoReportFailedDelegate(a2, v9);
      v6 = 0;
      if ( MatchingRestrictedErrorInfo < 0 )
        v6 = v3;
      v3 = v6;
      v7 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    else
    {
      RoTransformError(v3, 0LL, 0LL);
      return 0;
    }
  }
  return v3;
}
