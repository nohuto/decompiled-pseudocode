/*
 * XREFs of MiAdjustPteBins @ 0x140260278
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 * Callees:
 *     MiPteBinsNeedTrimming @ 0x140260374 (MiPteBinsNeedTrimming.c)
 *     MiEmptyPteBins @ 0x140319FD0 (MiEmptyPteBins.c)
 *     MiAttemptCoalesce @ 0x140353C10 (MiAttemptCoalesce.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall MiAdjustPteBins(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD v13[3]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 3LL;
  v13[0] = &qword_140C4EF80;
  v5 = v13;
  v6 = 3LL;
  v13[1] = &unk_140C4EB98;
  v13[2] = &unk_140C4EB38;
  do
  {
    v7 = *v5;
    if ( (*(_DWORD *)(*v5 + 24LL) & 1) != 0 )
    {
      MiEmptyPteBins(*v5, 0LL);
      if ( (unsigned int)MiPteBinsNeedTrimming(v7) == 1 )
        MiEmptyPteBins(v7, 1LL);
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  LOBYTE(v8) = byte_140C4EBFE + 1;
  byte_140C4EBFE = v8;
  if ( (v8 & 0xF) == 0 )
  {
    v9 = v13;
    do
    {
      v10 = (_QWORD *)*v9;
      v11 = *(_QWORD *)(*v9 + 88LL);
      if ( v11 > 0x40000 )
      {
        v8 = v10[7] >> 2;
        if ( v11 > v8 )
          LOBYTE(v8) = MiAttemptCoalesce(v10, v10[9], *v10 - v10[9], a4);
      }
      ++v9;
      --v4;
    }
    while ( v4 );
  }
  return v8;
}
