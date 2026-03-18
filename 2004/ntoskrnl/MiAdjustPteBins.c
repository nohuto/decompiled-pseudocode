/*
 * XREFs of MiAdjustPteBins @ 0x14027C880
 * Callers:
 *     MiWorkingSetManager @ 0x1402F3750 (MiWorkingSetManager.c)
 * Callees:
 *     MiEmptyPteBins @ 0x14027C980 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x14027D194 (MiPteBinsNeedTrimming.c)
 *     MiAttemptCoalesce @ 0x1403219B0 (MiAttemptCoalesce.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

char MiAdjustPteBins()
{
  __int64 v0; // rsi
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  _QWORD **v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 3LL;
  v7[0] = &qword_140C4ED40;
  v1 = v7;
  v2 = 3LL;
  v7[1] = &unk_140C4E958;
  v7[2] = &unk_140C4E8F8;
  do
  {
    v3 = *v1;
    if ( (*(_DWORD *)(*v1 + 24LL) & 1) != 0 )
    {
      MiEmptyPteBins(*v1, 0LL);
      if ( (unsigned int)MiPteBinsNeedTrimming(v3) == 1 )
        MiEmptyPteBins(v3, 1LL);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  LOBYTE(v4) = byte_140C4E9BE + 1;
  byte_140C4E9BE = v4;
  if ( (v4 & 0xF) == 0 )
  {
    v5 = (_QWORD **)v7;
    do
    {
      v4 = 0xCCCCCCCCCCCCCCCDuLL * (*v5)[7];
      if ( (*v5)[11] > (*v5)[7] / 0xAuLL )
        LOBYTE(v4) = MiAttemptCoalesce(*v5, 0LL, **v5);
      ++v5;
      --v0;
    }
    while ( v0 );
  }
  return v4;
}
