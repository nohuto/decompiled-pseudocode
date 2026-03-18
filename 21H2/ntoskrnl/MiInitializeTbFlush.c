/*
 * XREFs of MiInitializeTbFlush @ 0x140B09340
 * Callers:
 *     MiInitializeTbFlushing @ 0x140B092F0 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall MiInitializeTbFlush(unsigned __int64 a1)
{
  unsigned __int64 v1; // r12
  _QWORD *v2; // rax
  unsigned __int64 *v3; // rbx
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 *v7; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v26; // [rsp+20h] [rbp-138h]
  unsigned __int64 v27; // [rsp+28h] [rbp-130h]
  unsigned __int64 v28; // [rsp+30h] [rbp-128h]
  __int64 v29; // [rsp+38h] [rbp-120h]
  unsigned __int64 v30; // [rsp+40h] [rbp-118h]
  unsigned __int64 v31; // [rsp+48h] [rbp-110h]
  _QWORD *v32; // [rsp+50h] [rbp-108h]
  _QWORD v33[24]; // [rsp+60h] [rbp-F8h] BYREF

  v27 = 0LL;
  v1 = a1;
  v28 = 0LL;
  v31 = a1;
  memset(v33, 0, 0xB8uLL);
  v2 = (_QWORD *)MiReservePtes((__int64)&qword_140C534C0, v1);
  v32 = v2;
  v3 = v2;
  if ( v2 )
  {
    v33[3] = 0LL;
    LODWORD(v33[1]) = 20;
    ValidPte = MiMakeValidPte((unsigned __int64)v2, qword_140C53278, 1);
    v5 = (__int64)((_QWORD)v3 << 25) >> 16;
    v6 = v5;
    if ( v1 )
    {
      v7 = v3;
      v8 = v1;
      while ( 1 )
      {
        v9 = ValidPte;
        if ( MiPteInShadowRange((unsigned __int64)v7) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
              v9 = ValidPte | 0x8000000000000000uLL;
            *v7 = v9;
            MiWritePteShadow((__int64)v7, v9);
            goto LABEL_6;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            v9 = ValidPte | 0x8000000000000000uLL;
          }
        }
        *v7 = v9;
LABEL_6:
        ++v7;
        v6 += 4096LL;
        if ( !--v8 )
        {
          v10 = 0;
          v29 = 0LL;
          v11 = 0LL;
          while ( 1 )
          {
            v26 = 4LL;
            v12 = v1 - v11;
            v13 = 0LL;
            v14 = 0LL;
            v15 = (v1 - v11) >> 1;
            do
            {
              v30 = __rdtsc();
              _InterlockedOr(v25, 0);
              if ( v11 )
              {
                MiInsertTbFlushEntry((__int64)v33, v5, v11, 0);
                MiFlushTbList((__int64)v33);
              }
              else
              {
                KeFlushTb(0, 2u);
              }
              _InterlockedOr(v25, 0);
              v13 += __rdtsc() - v30;
              v16 = __rdtsc();
              _InterlockedOr(v25, 0);
              if ( v15 )
              {
                v17 = v5 + (v11 << 12);
                v18 = (v12 << 12) + v17 - 4096;
                v19 = v15;
                do
                {
                  v17 += 4096LL;
                  v18 -= 4096LL;
                  --v19;
                }
                while ( v19 );
              }
              _InterlockedOr(v25, 0);
              v20 = __rdtsc();
              v14 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v16;
              --v26;
            }
            while ( v26 );
            v1 = v31;
            v21 = v13 >> 2;
            v22 = v14 >> 2;
            if ( v11 )
            {
              if ( v22 + v21 >= v27 + v28 )
              {
                v23 = v11 - 1;
                if ( v10 )
                  v23 = v29;
                ++v10;
                v29 = v23;
                if ( v10 == 3 )
                {
                  qword_140C507D0 = v23;
                  goto LABEL_20;
                }
              }
              else
              {
                v10 = 0;
              }
            }
            else
            {
              v27 = v21;
              v28 = v22;
            }
            if ( ++v11 >= v31 )
              goto LABEL_28;
          }
        }
      }
    }
    v11 = 0LL;
LABEL_28:
    qword_140C507D0 = v11;
LABEL_20:
    LOBYTE(v2) = MiReleasePtes((__int64)&qword_140C534C0, v32, v1);
  }
  return (char)v2;
}
