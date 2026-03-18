/*
 * XREFs of MiAttemptCoalesce @ 0x1403219B0
 * Callers:
 *     MiAdjustPteBins @ 0x14027C880 (MiAdjustPteBins.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 * Callees:
 *     RtlInterlockedSetClearRunEx @ 0x14021DA30 (RtlInterlockedSetClearRunEx.c)
 *     MiReturnSystemPtes @ 0x140321AF4 (MiReturnSystemPtes.c)
 */

char __fastcall MiAttemptCoalesce(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r15
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r10
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  bool v16; // zf
  _QWORD *v17; // r8

  v3 = 32LL;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v3 = 512LL;
  v5 = 0LL;
  v6 = v3 - 1;
  LOBYTE(v7) = v3 + a2;
  v8 = ~(v3 - 1);
  v9 = a2 & v8;
  v10 = (v8 & (v3 + a2 + a3 - 1)) - (a2 & v8);
  if ( v10 )
  {
    do
    {
      v7 = *(_QWORD *)a1;
      v11 = v9 + v5;
      if ( v9 + v5 < *(_QWORD *)a1 )
      {
        v7 -= v11;
        if ( v7 >= v3 )
        {
          v12 = *(_QWORD *)(a1 + 8);
          v13 = *(_QWORD *)(v12 + 8 * (v11 >> 6));
          v14 = (_QWORD *)(v12 + 8 * (v11 >> 6));
          v15 = (_QWORD *)(v12 + 8 * ((v6 + v11) >> 6));
          if ( v14 == v15 )
          {
            v16 = (v13 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v3) << v11)) == 0;
LABEL_11:
            LOBYTE(v7) = v16;
            if ( v16 )
            {
              LODWORD(v7) = RtlInterlockedSetClearRunEx(a1, v9 + v5, v3);
              if ( (_DWORD)v7 == 1 )
                LOBYTE(v7) = MiReturnSystemPtes(a1, v9 + v5, v3, 0LL);
            }
            goto LABEL_8;
          }
          v7 = -1LL << v11;
          if ( (v13 & (-1LL << v11)) == 0 )
          {
            v17 = v14 + 1;
            if ( v17 != v15 )
            {
              while ( !*v17 )
              {
                if ( ++v17 == v15 )
                  goto LABEL_17;
              }
              goto LABEL_8;
            }
LABEL_17:
            v16 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 + (unsigned __int8)v11)) & *v17) == 0;
            goto LABEL_11;
          }
        }
      }
LABEL_8:
      v5 += v3;
    }
    while ( v5 < v10 );
  }
  return v7;
}
