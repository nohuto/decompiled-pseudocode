/*
 * XREFs of MiMoveLargeZeroToFree @ 0x140384F9C
 * Callers:
 *     MiPurgeLargeZeroNodePages @ 0x140384C18 (MiPurgeLargeZeroNodePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMoveLargeZeroToFree(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  __int64 v7; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  volatile signed __int32 **v11; // rdi
  volatile signed __int32 *v12; // r8
  __int64 v13; // r11
  volatile signed __int32 **v14; // rbp
  unsigned __int64 v15; // r9
  volatile signed __int32 **v16; // rcx
  volatile signed __int32 **v17; // rax
  volatile signed __int32 **v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax

  v7 = a3;
  v9 = MiLargePageSizes[a3];
  v10 = a7 + 134LL * a3 + 4 * (a6 + 8LL * a4);
  v11 = (volatile signed __int32 **)(*(_QWORD *)(a2 + 8 * v10 + 560) + 24LL * a5);
  v12 = *v11;
  v13 = *(_QWORD *)(a2 + 8 * v10 + 688) + 24LL * a5;
  if ( *v11 == (volatile signed __int32 *)v11 )
    return 1LL;
  while ( 1 )
  {
    v14 = *(volatile signed __int32 ***)v12;
    if ( _interlockedbittestandset64(v12 + 6, 0x3FuLL) )
      break;
    v15 = (__int64)(v12 + 0x16000000000LL) / 48;
    *((_BYTE *)v12 + 34) = *((_BYTE *)v12 + 34) & 0xF8 | 1;
    _InterlockedAnd64((volatile signed __int64 *)v12 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    v16 = *(volatile signed __int32 ***)v12;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v12 + 8LL) != v12
      || (v17 = (volatile signed __int32 **)*((_QWORD *)v12 + 1), *v17 != v12)
      || (*v17 = (volatile signed __int32 *)v16,
          v16[1] = (volatile signed __int32 *)v17,
          v18 = *(volatile signed __int32 ***)(v13 + 8),
          *v18 != (volatile signed __int32 *)v13) )
    {
      __fastfail(3u);
    }
    *((_QWORD *)v12 + 1) = v18;
    *(_QWORD *)v12 = v13;
    *v18 = v12;
    *(_QWORD *)(v13 + 8) = v12;
    v19 = 1072 * v7;
    ++*(_QWORD *)(v19 + a2 + 8);
    v20 = 1072 * v7 + (v15 < 0x100000 ? 40LL : 24LL);
    ++*(_QWORD *)(v20 + a2);
    --*(_QWORD *)(v19 + a2);
    v21 = 1072 * v7 + (v15 < 0x100000 ? 32LL : 16LL);
    --*(_QWORD *)(v21 + a2);
    ++*(_QWORD *)(v13 + 16);
    v11[2] = (volatile signed __int32 *)((char *)v11[2] - 1);
    ++*(_QWORD *)(a2 + 8 * v10 + 176);
    --*(_QWORD *)(a2 + 8 * v10 + 48);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2240), -(__int64)v9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2304), v9);
    v12 = (volatile signed __int32 *)v14;
    if ( v14 == v11 )
      return 1LL;
  }
  return 0LL;
}
