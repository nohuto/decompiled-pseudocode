/*
 * XREFs of MiInitializeTbFlush @ 0x140A55380
 * Callers:
 *     MiInitializeTbFlushing @ 0x140A55330 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     KeFlushTb @ 0x140230120 (KeFlushTb.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
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
  __int64 v27; // r8
  signed __int32 v28[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v29; // [rsp+20h] [rbp-138h]
  unsigned __int64 v30; // [rsp+28h] [rbp-130h]
  unsigned __int64 v31; // [rsp+30h] [rbp-128h]
  __int64 v32; // [rsp+38h] [rbp-120h]
  unsigned __int64 v33; // [rsp+40h] [rbp-118h]
  unsigned __int64 v34; // [rsp+48h] [rbp-110h]
  _QWORD *v35; // [rsp+50h] [rbp-108h]
  _QWORD v36[24]; // [rsp+60h] [rbp-F8h] BYREF

  v30 = 0LL;
  v1 = a1;
  v31 = 0LL;
  v34 = a1;
  memset(v36, 0, 0xB8uLL);
  result = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF40, v1, v2, v3);
  v35 = result;
  v5 = result;
  if ( result )
  {
    v36[3] = 0LL;
    LODWORD(v36[1]) = 20;
    ValidPte = MiMakeValidPte((unsigned __int64)result, qword_140C4ED68, 1);
    v7 = (__int64)((_QWORD)v5 << 25) >> 16;
    v8 = v7;
    if ( !v1 )
    {
LABEL_7:
      v12 = 0;
      v13 = 0LL;
      v32 = 0LL;
      if ( !v1 )
        goto LABEL_29;
      while ( 1 )
      {
        v29 = 4LL;
        v14 = v1 - v13;
        v15 = 0LL;
        v16 = 0LL;
        v17 = (v1 - v13) >> 1;
        do
        {
          v33 = __rdtsc();
          _InterlockedOr(v28, 0);
          if ( v13 )
          {
            MiInsertTbFlushEntry((__int64)v36, v7, v13, 0);
            MiFlushTbList((__int64)v36, v18);
          }
          else
          {
            KeFlushTb(0, 2u);
          }
          _InterlockedOr(v28, 0);
          v15 += __rdtsc() - v33;
          v19 = __rdtsc();
          _InterlockedOr(v28, 0);
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
          _InterlockedOr(v28, 0);
          v23 = __rdtsc();
          v16 += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v19;
          --v29;
        }
        while ( v29 );
        v1 = v34;
        v24 = v15 >> 2;
        v25 = v16 >> 2;
        if ( v13 )
        {
          if ( v25 + v24 >= v30 + v31 )
          {
            v26 = v13 - 1;
            if ( v12 )
              v26 = v32;
            ++v12;
            v32 = v26;
            if ( v12 == 3 )
            {
              qword_140C4DF90 = v26;
LABEL_25:
              if ( v12 == 3 )
                return (_QWORD *)MiReleasePtes((__int64)&qword_140C4EF40, v35, v1);
LABEL_29:
              qword_140C4DF90 = v13;
              return (_QWORD *)MiReleasePtes((__int64)&qword_140C4EF40, v35, v1);
            }
          }
          else
          {
            v12 = 0;
          }
        }
        else
        {
          v30 = v24;
          v31 = v25;
        }
        if ( ++v13 >= v34 )
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
          if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
            v11 = ValidPte | 0x8000000000000000uLL;
          *v9 = v11;
          MiWritePteShadow((__int64)v9, v11, v27);
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
