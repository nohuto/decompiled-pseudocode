/*
 * XREFs of MiAdjustPteBins @ 0x14023E040
 * Callers:
 *     MiWorkingSetManager @ 0x1402662A0 (MiWorkingSetManager.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x14021EF70 (MiAttemptCoalesce.c)
 *     MiEmptyPteBins @ 0x14023E170 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x14023E9F0 (MiPteBinsNeedTrimming.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiIsPteCachingOptimizationEnabled @ 0x1403F4274 (MiIsPteCachingOptimizationEnabled.c)
 */

char __fastcall MiAdjustPteBins(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int IsPteCachingOptimizationEnabled; // eax
  __int64 **i; // rdi
  __int64 *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v15[3]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 3LL;
  v15[0] = &qword_140C4EDC0;
  v4 = v15;
  v5 = 3LL;
  v15[1] = &unk_140C4E9D8;
  v15[2] = &unk_140C4E978;
  do
  {
    v6 = *v4;
    if ( (*(_DWORD *)(*v4 + 24LL) & 1) != 0 )
    {
      MiEmptyPteBins(*v4, 0LL);
      if ( (unsigned int)MiPteBinsNeedTrimming(v6) == 1 )
        MiEmptyPteBins(v6, 1LL);
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  LOBYTE(IsPteCachingOptimizationEnabled) = byte_140C4EA3E + 1;
  byte_140C4EA3E = IsPteCachingOptimizationEnabled;
  if ( (IsPteCachingOptimizationEnabled & 0xF) == 0 )
  {
    for ( i = (__int64 **)v15; ; ++i )
    {
      v9 = *i;
      v10 = (*i)[7];
      v11 = (*i)[11];
      IsPteCachingOptimizationEnabled = MiIsPteCachingOptimizationEnabled(a1, a2, a3);
      if ( IsPteCachingOptimizationEnabled )
        break;
      LOBYTE(IsPteCachingOptimizationEnabled) = -51 * v10;
      a2 = v10 / 0xA;
      if ( v11 > v10 / 0xA )
      {
        v13 = *v9;
        v12 = 0LL;
LABEL_14:
        LOBYTE(IsPteCachingOptimizationEnabled) = MiAttemptCoalesce((__int64)v9, v12, v13);
      }
LABEL_15:
      if ( !--v3 )
        return IsPteCachingOptimizationEnabled;
    }
    if ( v11 <= 0x40000 || v11 <= v10 >> 2 )
      goto LABEL_15;
    v12 = v9[9];
    v13 = *v9 - v12;
    goto LABEL_14;
  }
  return IsPteCachingOptimizationEnabled;
}
