/*
 * XREFs of MiAttemptCoalesce @ 0x140353C10
 * Callers:
 *     MiReplenishBitMap @ 0x140205D50 (MiReplenishBitMap.c)
 *     MiAdjustPteBins @ 0x140260278 (MiAdjustPteBins.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiDeleteSessionAddressSpace @ 0x14038973C (MiDeleteSessionAddressSpace.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x140240318 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1402CD590 (RtlInterlockedSetClearRunEx.c)
 */

char __fastcall MiAttemptCoalesce(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r15
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r9
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
          v15 = (_QWORD *)(v12 + 8 * ((v11 + v6) >> 6));
          if ( v14 == v15 )
          {
            v16 = (v13 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v3) << v11)) == 0;
LABEL_5:
            LOBYTE(v7) = v16;
            if ( v16 )
            {
              LODWORD(v7) = RtlInterlockedSetClearRunEx(a1, v9 + v5, v3);
              if ( (_DWORD)v7 == 1 )
                LOBYTE(v7) = MiReturnSystemPtes(a1, v9 + v5, v3, 0);
            }
            goto LABEL_6;
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
                  goto LABEL_18;
              }
              goto LABEL_6;
            }
LABEL_18:
            v16 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v11 + (unsigned __int8)v6)) & *v17) == 0;
            goto LABEL_5;
          }
        }
      }
LABEL_6:
      v5 += v3;
    }
    while ( v5 < v10 );
  }
  return v7;
}
