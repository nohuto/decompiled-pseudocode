/*
 * XREFs of MiAdjustPteBins @ 0x1402722D8
 * Callers:
 *     MiWorkingSetManager @ 0x140272C60 (MiWorkingSetManager.c)
 * Callees:
 *     MiPteBinsNeedTrimming @ 0x1402723D4 (MiPteBinsNeedTrimming.c)
 *     MiEmptyPteBins @ 0x14030F280 (MiEmptyPteBins.c)
 *     MiAttemptCoalesce @ 0x140348EC0 (MiAttemptCoalesce.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

char MiAdjustPteBins()
{
  __int64 v0; // rsi
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 3LL;
  v9[0] = &qword_140C4EF40;
  v1 = v9;
  v2 = 3LL;
  v9[1] = &unk_140C4EB58;
  v9[2] = &unk_140C4EAF8;
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
  LOBYTE(v4) = byte_140C4EBBE + 1;
  byte_140C4EBBE = v4;
  if ( (v4 & 0xF) == 0 )
  {
    v5 = v9;
    do
    {
      v6 = (_QWORD *)*v5;
      v7 = *(_QWORD *)(*v5 + 88LL);
      if ( v7 > 0x40000 )
      {
        v4 = v6[7] >> 2;
        if ( v7 > v4 )
          LOBYTE(v4) = MiAttemptCoalesce(v6, v6[9], *v6 - v6[9]);
      }
      ++v5;
      --v0;
    }
    while ( v0 );
  }
  return v4;
}
