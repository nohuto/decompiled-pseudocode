/*
 * XREFs of MiInsertLargePageChain @ 0x1402C15F0
 * Callers:
 *     MiInsertDemotedPages @ 0x140268654 (MiInsertDemotedPages.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x140268620 (MiIsFreeZeroPfnCold.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiWakeLargePageWaiters @ 0x1405B05A0 (MiWakeLargePageWaiters.c)
 */

void __fastcall MiInsertLargePageChain(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // r10
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  __int64 v17; // r15
  char v18; // r12
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  char v21; // cl
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  bool v26; // zf
  __int64 v27; // rbx
  __int64 v28; // rdx
  char v29; // al
  int v30; // [rsp+48h] [rbp-29h]
  int v31; // [rsp+4Ch] [rbp-25h] BYREF
  __int64 v32; // [rsp+50h] [rbp-21h] BYREF
  __int128 v33; // [rsp+58h] [rbp-19h] BYREF
  __int128 v34; // [rsp+68h] [rbp-9h]

  v32 = a4;
  v33 = 0LL;
  v34 = 0LL;
  LOBYTE(v9) = MiIsFreeZeroPfnCold(a2);
  v30 = v9;
  v11 = MiLargePageSizes[v10];
  if ( (_DWORD)v10 == 2 )
  {
    MiConvertEntireLargePageToSmall(a2, 2, 1, a3, 0LL, 0LL, 0LL);
  }
  else
  {
    v12 = (unsigned int)(v10 + 1);
    v13 = MiLargePageSizes[v12];
    v14 = v11 / v13;
    v31 = 0;
    v15 = v11 + 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4) - v13;
    v16 = 48 * (v11 - v13) + a2;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    *(_QWORD *)&v33 = v15;
    *((_QWORD *)&v33 + 1) = a3 | 0x300000000LL;
    LOBYTE(v34) = 2;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 22848));
    v17 = v32;
    v18 = ~(_BYTE)v12 & 3;
LABEL_4:
    v19 = 0x7FFFFFFFFFFFFFFFLL;
    v20 = 4294967293LL;
    while ( 1 )
    {
      v21 = *(_BYTE *)(v16 + 34);
      if ( (v21 & 7) == 6 )
      {
        v22 = *(_QWORD *)(v16 + 16);
        *(_BYTE *)(v16 + 34) = v21 & 0xF8 | 5;
        v23 = 0LL;
        if ( v30 )
          v23 = 0xFFFFFFFD00000000uLL;
        if ( v22 && qword_140C50780 )
        {
          if ( (v22 & 0x10) != 0 )
            LODWORD(v22) = v22 & 0xFFFFFFEF;
          else
            LODWORD(v22) = ~(_DWORD)qword_140C50780 & v22;
        }
        v24 = v23 | (unsigned int)v22;
        if ( qword_140C50780 )
        {
          if ( (qword_140C50780 & v24) != 0 )
            v24 |= 0x10uLL;
          else
            v24 |= qword_140C50780;
        }
        *(_QWORD *)(v16 + 16) = v24;
        *(_BYTE *)(v16 + 34) = *(_BYTE *)(v16 + 34) & 0xF8 | 6;
      }
      else
      {
        v28 = 0LL;
        if ( v30 )
          v28 = v20;
        *(_QWORD *)(v16 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v16 + 16), v28);
      }
      *(_BYTE *)(v16 + 36) = v18 | *(_BYTE *)(v16 + 36) & 0xFC;
      if ( v16 == v17 )
      {
        v29 = *(_BYTE *)(v16 + 34);
        *(_QWORD *)v16 = 0LL;
        *(_BYTE *)(v16 + 34) = v29 & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), v19);
      }
      else
      {
        v26 = *(_QWORD *)(a1 + 22904) == 0LL;
        *(_QWORD *)&v33 = v15;
        if ( v26 )
        {
          HIDWORD(v33) |= 2u;
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 22848));
          HIDWORD(v33) &= ~2u;
        }
        MiInsertLargePageInNodeList((__int64)&v33);
        v19 = 0x7FFFFFFFFFFFFFFFLL;
        v20 = 4294967293LL;
      }
      LODWORD(v14) = v14 - 1;
      if ( !(_DWORD)v14 )
        break;
      v15 -= v13;
      v16 += -48LL * v13;
      v25 = HIDWORD(v33);
      v26 = (BYTE12(v33) & 2) == 0;
      if ( (BYTE12(v33) & 2) != 0 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 22848));
          v20 = 4294967293LL;
          v25 = HIDWORD(v33) & 0xFFFFFFFD;
          v19 = 0x7FFFFFFFFFFFFFFFLL;
          HIDWORD(v33) &= ~2u;
        }
        else
        {
          v25 = HIDWORD(v33);
        }
        v26 = (v25 & 2) == 0;
      }
      if ( v26 )
      {
        LODWORD(v32) = 0;
        HIDWORD(v33) = v25 | 2;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v32);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 22848));
        goto LABEL_4;
      }
    }
  }
  if ( a6 )
  {
    if ( (BYTE12(v33) & 2) == 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 22848));
    v27 = *(_QWORD *)(a1 + 22792);
    --*(_DWORD *)(a1 + 22788);
    *(_QWORD *)(a1 + 22792) = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 22848));
    if ( v27 )
      MiWakeLargePageWaiters(v27);
  }
  else if ( (BYTE12(v33) & 2) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 22848));
  }
}
