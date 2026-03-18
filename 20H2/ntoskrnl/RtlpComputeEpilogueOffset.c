/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x1403EB1F4
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010E0 (PopThermalZoneDpc.c)
 *     CmpLazyFlushDpcRoutine @ 0x140329930 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x14032C670 (ExpTimerDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x14035ADA0 (ExpTimeRefreshDpcRoutine.c)
 *     IopTimerDispatch @ 0x1404FF5B0 (IopTimerDispatch.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BDC70 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KeExitRetpoline @ 0x1403599C8 (KeExitRetpoline.c)
 *     sub_140A12D10 @ 0x140A12D10 (sub_140A12D10.c)
 *     KeGuardDispatchICall @ 0x140A14330 (KeGuardDispatchICall.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, signed __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int i; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r9
  signed __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  for ( i = 0; i < 0x19; ++i )
    *a2++ ^= a3;
  *(_DWORD *)v3 ^= a3;
  v6 = *((int *)v3 + 49);
  if ( a3 && (_DWORD)v6 )
  {
    v7 = &a2[v6 - 1];
    while ( 1 )
    {
      *v7-- ^= a3;
      v9 = __ROR8__(a3, v6);
      _bittestandcomplement64(&v9, v9 & 0x3F);
      v6 = (unsigned int)(v6 - 1);
      if ( !(_DWORD)v6 )
        break;
      a3 = v9;
    }
  }
  if ( (*((_DWORD *)v3 + 613) & 0x100000) != 0 )
    KeExitRetpoline(v6, a2);
  else
    _mm_lfence();
  sub_140A12D10(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[34])(v3 + 243, 1LL);
}
