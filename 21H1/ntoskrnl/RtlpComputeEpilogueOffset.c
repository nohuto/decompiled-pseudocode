/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x1403E7724
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010E0 (PopThermalZoneDpc.c)
 *     CmpLazyFlushDpcRoutine @ 0x14031B5B0 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x14031E020 (ExpTimerDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x140323D70 (ExpTimeRefreshDpcRoutine.c)
 *     IopTimerDispatch @ 0x1404FB690 (IopTimerDispatch.c)
 *     FsRtlTruncateSmallMcb @ 0x1405B99F0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KeExitRetpoline @ 0x140324204 (KeExitRetpoline.c)
 *     sub_140A0CD10 @ 0x140A0CD10 (sub_140A0CD10.c)
 *     KeGuardDispatchICall @ 0x140A0E330 (KeGuardDispatchICall.c)
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
      LODWORD(v6) = v6 - 1;
      if ( !(_DWORD)v6 )
        break;
      a3 = v9;
    }
  }
  if ( (*((_DWORD *)v3 + 613) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  sub_140A0CD10(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[34])(v3 + 243, 1LL);
}
