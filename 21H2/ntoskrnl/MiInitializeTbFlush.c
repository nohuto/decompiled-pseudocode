/*
 * XREFs of MiInitializeTbFlush @ 0x140A56380
 * Callers:
 *     MiInitializeTbFlushing @ 0x140A56330 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

_QWORD *__fastcall MiInitializeTbFlush(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  _QWORD *result; // rax
  unsigned __int64 *v5; // rbx
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rbx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  _KPROCESS *v18; // rdx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v28; // [rsp+20h] [rbp-138h]
  unsigned __int64 v29; // [rsp+28h] [rbp-130h]
  unsigned __int64 v30; // [rsp+30h] [rbp-128h]
  __int64 v31; // [rsp+38h] [rbp-120h]
  unsigned __int64 v32; // [rsp+40h] [rbp-118h]
  unsigned __int64 v33; // [rsp+48h] [rbp-110h]
  _QWORD *v34; // [rsp+50h] [rbp-108h]
  _QWORD v35[24]; // [rsp+60h] [rbp-F8h] BYREF

  v29 = 0LL;
  v1 = a1;
  v30 = 0LL;
  v33 = a1;
  memset(v35, 0, 0xB8uLL);
  result = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF80, v1, v2, v3);
  v34 = result;
  v5 = result;
  if ( result )
  {
    v35[3] = 0LL;
    LODWORD(v35[1]) = 20;
    ValidPte = MiMakeValidPte((unsigned __int64)result, qword_140C4EDA8, 1);
    v7 = (__int64)((_QWORD)v5 << 25) >> 16;
    v8 = v7;
    if ( !v1 )
    {
LABEL_7:
      v12 = 0;
      v13 = 0LL;
      v31 = 0LL;
      if ( !v1 )
        goto LABEL_29;
      while ( 1 )
      {
        v28 = 4LL;
        v14 = v1 - v13;
        v15 = 0LL;
        v16 = 0LL;
        v17 = (v1 - v13) >> 1;
        do
        {
          v32 = __rdtsc();
          _InterlockedOr(v27, 0);
          if ( v13 )
          {
            MiInsertTbFlushEntry((__int64)v35, v7, v13, 0);
            MiFlushTbList((__int64)v35, v18);
          }
          else
          {
            KeFlushTb(0, 2u);
          }
          _InterlockedOr(v27, 0);
          v15 += __rdtsc() - v32;
          v19 = __rdtsc();
          _InterlockedOr(v27, 0);
          if ( v17 )
          {
            v20 = v7 + (v13 << 12);
            v21 = (v14 << 12) + v20 - 4096;
            v22 = v17;
            do
            {
              v20 += 4096LL;
              v21 -= 4096LL;
              --v22;
            }
            while ( v22 );
          }
          _InterlockedOr(v27, 0);
          v23 = __rdtsc();
          v16 += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v19;
          --v28;
        }
        while ( v28 );
        v1 = v33;
        v24 = v15 >> 2;
        v25 = v16 >> 2;
        if ( v13 )
        {
          if ( v25 + v24 >= v29 + v30 )
          {
            v26 = v13 - 1;
            if ( v12 )
              v26 = v31;
            ++v12;
            v31 = v26;
            if ( v12 == 3 )
            {
              qword_140C4DFD0 = v26;
LABEL_25:
              if ( v12 == 3 )
                return (_QWORD *)MiReleasePtes((__int64)&qword_140C4EF80, v34, v1);
LABEL_29:
              qword_140C4DFD0 = v13;
              return (_QWORD *)MiReleasePtes((__int64)&qword_140C4EF80, v34, v1);
            }
          }
          else
          {
            v12 = 0;
          }
        }
        else
        {
          v29 = v24;
          v30 = v25;
        }
        if ( ++v13 >= v33 )
          goto LABEL_25;
      }
    }
    v9 = v5;
    v10 = v1;
    while ( 1 )
    {
      v11 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v9) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
            v11 = ValidPte | 0x8000000000000000uLL;
          *v9 = v11;
          MiWritePteShadow((__int64)v9, v11);
          goto LABEL_6;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          v11 = ValidPte | 0x8000000000000000uLL;
        }
      }
      *v9 = v11;
LABEL_6:
      ++v9;
      v8 += 4096LL;
      if ( !--v10 )
        goto LABEL_7;
    }
  }
  return result;
}
