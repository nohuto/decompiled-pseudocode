/*
 * XREFs of MiInitializeTbFlush @ 0x140A53D78
 * Callers:
 *     MiInitializeTbFlushing @ 0x140A53D28 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

char __fastcall MiInitializeTbFlush(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbp
  _QWORD *v2; // rax
  __int64 v3; // r9
  unsigned __int64 *v4; // rbx
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  _KPROCESS *v17; // rdx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r8
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
  v2 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EDC0, v1);
  v35 = v2;
  v4 = v2;
  if ( v2 )
  {
    v36[3] = 0LL;
    LODWORD(v36[1]) = 20;
    ValidPte = MiMakeValidPte((unsigned __int64)v2, qword_140C4EBE8, 1LL, v3);
    v6 = (__int64)((_QWORD)v4 << 25) >> 16;
    v7 = v6;
    if ( !v1 )
    {
LABEL_7:
      v11 = 0;
      v12 = 0LL;
      v32 = 0LL;
      if ( !v1 )
        goto LABEL_29;
      while ( 1 )
      {
        v29 = 4LL;
        v13 = v1 - v12;
        v14 = 0LL;
        v15 = 0LL;
        v16 = (v1 - v12) >> 1;
        do
        {
          v33 = __rdtsc();
          _InterlockedOr(v28, 0);
          if ( v12 )
          {
            MiInsertTbFlushEntry((__int64)v36, v6, v12, 0);
            MiFlushTbList((unsigned int *)v36, v17);
          }
          else
          {
            KeFlushTb(0, 2u);
          }
          _InterlockedOr(v28, 0);
          v14 += __rdtsc() - v33;
          v18 = __rdtsc();
          _InterlockedOr(v28, 0);
          if ( v16 )
          {
            v19 = v6 + (v12 << 12);
            v20 = (v13 << 12) + v19 - 4096;
            v21 = v16;
            do
            {
              v19 += 4096LL;
              v20 -= 4096LL;
              --v21;
            }
            while ( v21 );
          }
          _InterlockedOr(v28, 0);
          v22 = __rdtsc();
          v15 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v18;
          --v29;
        }
        while ( v29 );
        v1 = v34;
        v23 = v14 >> 2;
        v24 = v15 >> 2;
        if ( v12 )
        {
          if ( v24 + v23 >= v30 + v31 )
          {
            v25 = v12 - 1;
            if ( v11 )
              v25 = v32;
            ++v11;
            v32 = v25;
            if ( v11 == 3 )
            {
              qword_140C4DE10 = v25;
LABEL_25:
              if ( v11 == 3 )
              {
LABEL_26:
                LOBYTE(v2) = MiReleasePtes((__int64)&qword_140C4EDC0, v35, v1);
                return (char)v2;
              }
LABEL_29:
              qword_140C4DE10 = v12;
              goto LABEL_26;
            }
          }
          else
          {
            v11 = 0;
          }
        }
        else
        {
          v30 = v23;
          v31 = v24;
        }
        if ( ++v12 >= v34 )
          goto LABEL_25;
      }
    }
    v8 = v4;
    v9 = v1;
    while ( 1 )
    {
      v10 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4DE88) && (ValidPte & 1) != 0 )
            v10 = ValidPte | 0x8000000000000000uLL;
          *v8 = v10;
          MiWritePteShadow((__int64)v8, v10, v26);
          goto LABEL_6;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          v10 = ValidPte | 0x8000000000000000uLL;
        }
      }
      *v8 = v10;
LABEL_6:
      ++v8;
      v7 += 4096LL;
      if ( !--v9 )
        goto LABEL_7;
    }
  }
  return (char)v2;
}
