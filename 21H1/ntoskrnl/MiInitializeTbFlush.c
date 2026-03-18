/*
 * XREFs of MiInitializeTbFlush @ 0x140A4D9F8
 * Callers:
 *     MiInitializeTbFlushing @ 0x140A4D9A8 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

_QWORD *__fastcall MiInitializeTbFlush(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbp
  _QWORD *result; // rax
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
  signed __int32 v26[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v27; // [rsp+20h] [rbp-138h]
  unsigned __int64 v28; // [rsp+28h] [rbp-130h]
  unsigned __int64 v29; // [rsp+30h] [rbp-128h]
  __int64 v30; // [rsp+38h] [rbp-120h]
  unsigned __int64 v31; // [rsp+40h] [rbp-118h]
  unsigned __int64 v32; // [rsp+48h] [rbp-110h]
  _QWORD *v33; // [rsp+50h] [rbp-108h]
  _QWORD v34[24]; // [rsp+60h] [rbp-F8h] BYREF

  v28 = 0LL;
  v1 = a1;
  v29 = 0LL;
  v32 = a1;
  memset(v34, 0, 0xB8uLL);
  result = (_QWORD *)MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)v1);
  v33 = result;
  v4 = result;
  if ( result )
  {
    v34[3] = 0LL;
    LODWORD(v34[1]) = 20;
    ValidPte = MiMakeValidPte((unsigned __int64)result, qword_140C4ECA8, 1LL, v3);
    v6 = (__int64)((_QWORD)v4 << 25) >> 16;
    v7 = v6;
    if ( !v1 )
    {
LABEL_7:
      v11 = 0;
      v12 = 0LL;
      v30 = 0LL;
      if ( !v1 )
        goto LABEL_29;
      while ( 1 )
      {
        v27 = 4LL;
        v13 = v1 - v12;
        v14 = 0LL;
        v15 = 0LL;
        v16 = (v1 - v12) >> 1;
        do
        {
          v31 = __rdtsc();
          _InterlockedOr(v26, 0);
          if ( v12 )
          {
            MiInsertTbFlushEntry((__int64)v34, v6, v12, 0);
            MiFlushTbList((__int64)v34, v17);
          }
          else
          {
            KeFlushTb(0, 2u);
          }
          _InterlockedOr(v26, 0);
          v14 += __rdtsc() - v31;
          v18 = __rdtsc();
          _InterlockedOr(v26, 0);
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
          _InterlockedOr(v26, 0);
          v22 = __rdtsc();
          v15 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v18;
          --v27;
        }
        while ( v27 );
        v1 = v32;
        v23 = v14 >> 2;
        v24 = v15 >> 2;
        if ( v12 )
        {
          if ( v24 + v23 >= v28 + v29 )
          {
            v25 = v12 - 1;
            if ( v11 )
              v25 = v30;
            ++v11;
            v30 = v25;
            if ( v11 == 3 )
            {
              qword_140C4DED0 = v25;
LABEL_25:
              if ( v11 == 3 )
                return (_QWORD *)MiReleasePtes((__int64)&qword_140C4EE80, v33, v1);
LABEL_29:
              qword_140C4DED0 = v12;
              return (_QWORD *)MiReleasePtes((__int64)&qword_140C4EE80, v33, v1);
            }
          }
          else
          {
            v11 = 0;
          }
        }
        else
        {
          v28 = v23;
          v29 = v24;
        }
        if ( ++v12 >= v32 )
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
          if ( !HIBYTE(word_140C4DF48) && (ValidPte & 1) != 0 )
            v10 = ValidPte | 0x8000000000000000uLL;
          *v8 = v10;
          MiWritePteShadow((__int64)v8, v10);
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
  return result;
}
