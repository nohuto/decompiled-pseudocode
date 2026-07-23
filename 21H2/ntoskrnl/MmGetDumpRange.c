/*
 * XREFs of MmGetDumpRange @ 0x1405389B0
 * Callers:
 *     IoWriteCrashDump @ 0x140502C50 (IoWriteCrashDump.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MiAddNonSecuredPagesToDump @ 0x140537AA4 (MiAddNonSecuredPagesToDump.c)
 *     MiAddPhysicalPagesToCrashDump @ 0x140537ED8 (MiAddPhysicalPagesToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538DCC (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveEnclavePagesFromDump @ 0x14054B49C (MiRemoveEnclavePagesFromDump.c)
 */

__int64 __fastcall MmGetDumpRange(ULONG_PTR BugCheckParameter2, int a2, char a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  unsigned int i; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // esi
  unsigned int v15; // r9d
  unsigned int v16; // edx
  int v17; // r10d
  char *v18; // rdi
  unsigned int v19; // r11d
  unsigned int v20; // edx
  char *v21; // rdx
  __int64 j; // r8
  unsigned __int64 v23; // rax
  unsigned int SizeOfBitMap; // edx
  __int64 result; // rax
  __int64 v26; // rdi
  __int64 k; // rdi
  unsigned __int64 v28; // rsi
  ULONG_PTR v29; // rdi
  signed __int64 v30; // r8

  if ( a2 )
  {
    v10 = MmPhysicalMemoryBlock;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      v12 = v10[2 * i + 3];
      v13 = v10[2 * i + 2];
      if ( (MiFlags & 0x8000) != 0 )
        MiAddNonSecuredPagesToDump(
          (__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))BugCheckParameter2,
          v13,
          v12);
      else
        (*(void (__fastcall **)(ULONG_PTR, __int64, __int64, __int64))BugCheckParameter2)(
          BugCheckParameter2,
          v13,
          v12,
          2LL);
      v10 = MmPhysicalMemoryBlock;
    }
  }
  else
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v5 = KiProcessorBlock;
      v6 = (unsigned int)KeNumberProcessors_0;
      do
      {
        (*(void (__fastcall **)(ULONG_PTR, _QWORD, __int64, __int64))BugCheckParameter2)(
          BugCheckParameter2,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5++ + 8) + 184LL) + 40LL) >> 12,
          1LL,
          2LL);
        --v6;
      }
      while ( v6 );
    }
    MmAddRangeToCrashDump(
      (__int64 (__fastcall **)(_QWORD, __int64, __int64))BugCheckParameter2,
      0xFFFF800000000000uLL,
      0x800000000000LL);
    if ( (a3 & 1) != 0 && (KiBugCheckActive & 3) != 0 )
      MmAddRangeToCrashDump(
        (__int64 (__fastcall **)(_QWORD, __int64, __int64))BugCheckParameter2,
        0LL,
        0x7FFFFFFF0000LL);
    v7 = __readcr3();
    (*(void (__fastcall **)(ULONG_PTR, signed __int64, __int64, __int64))BugCheckParameter2)(
      BugCheckParameter2,
      v7 / 4096,
      1LL,
      2LL);
    if ( (a3 & 2) != 0 )
    {
      MiAddPhysicalPagesToCrashDump((void (__fastcall **)(_QWORD, __int64, __int64, __int64))BugCheckParameter2);
      MmRemoveSystemCacheFromDump(BugCheckParameter2);
    }
    v8 = (_QWORD *)qword_140C4C918;
    while ( v8 )
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
      (*(void (__fastcall **)(ULONG_PTR, __int64, __int64, __int64))(BugCheckParameter2 + 8))(
        BugCheckParameter2,
        (__int64)(v9 + 0xB000000000LL) / 48,
        1LL,
        2LL);
    }
  }
  v14 = 0;
  while ( 1 )
  {
    v15 = v14 < qword_140C4E668->SizeOfBitMap ? v14 : 0;
    v16 = qword_140C4E668->SizeOfBitMap - 1;
    v17 = ((__int64)qword_140C4E668->Buffer & 4) != 0LL ? 0x20 : 0;
    v18 = (char *)qword_140C4E668->Buffer - (((__int64)qword_140C4E668->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v19 = v17 + v16;
      if ( v16 - v15 == -1 )
        goto LABEL_22;
      v21 = &v18[8 * ((unsigned __int64)(v17 + v15) >> 6)];
      for ( j = ~*(_QWORD *)v21 | ((1LL << ((v17 + v15) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v21 )
      {
        v21 += 8;
        if ( v21 > &v18[8 * ((unsigned __int64)v19 >> 6)] )
          goto LABEL_22;
      }
      _BitScanForward64(&v23, ~j);
      v20 = v23 + ((unsigned int)((v21 - v18) >> 3) << 6);
      if ( v20 > v19 )
      {
LABEL_22:
        v20 = -1;
      }
      else if ( v20 != -1 )
      {
        break;
      }
      if ( !v15 )
        break;
      SizeOfBitMap = v14 + 1;
      v15 = 0;
      if ( v14 + 1 > qword_140C4E668->SizeOfBitMap )
        SizeOfBitMap = qword_140C4E668->SizeOfBitMap;
      v16 = SizeOfBitMap - 1;
    }
    result = v20 - v17;
    if ( v20 == -1 )
      result = 0xFFFFFFFFLL;
    if ( (unsigned int)result < v14 || (_DWORD)result == -1 )
      break;
    v14 = result + 1;
    v26 = *(_QWORD *)(qword_140C4E688 + 8LL * (unsigned int)result);
    if ( (*(_DWORD *)(v26 + 4) & 2) != 0 )
    {
      for ( k = *(_QWORD *)(v26 + 4112); k != 0xFFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x58000000000LL) & 0xFFFFFFFFFLL )
        (*(void (__fastcall **)(ULONG_PTR, __int64, __int64, __int64))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          k,
          1LL,
          2LL);
    }
  }
  if ( byte_140C4E838 == 1 )
  {
    v28 = 0xFFFFFA8000000000uLL;
    result = 0xFFFFFA8000000000uLL;
    v29 = 48 * BugCheckParameter3 - 0x58000000000LL;
    if ( v29 >= 0xFFFFFA8000000000uLL )
    {
      do
      {
        v30 = v28 + 0x58000000000LL;
        if ( (*(_BYTE *)(v28 + 35) & 0x40) != 0 || (result = MiIsPageOnBadList(v28), (_DWORD)result) )
          result = (*(__int64 (__fastcall **)(ULONG_PTR, signed __int64, __int64, __int64))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v30 / 48,
                     1LL,
                     2LL);
        v28 += 48LL;
      }
      while ( v28 <= v29 );
    }
  }
  if ( qword_140C4EEC0 )
    return MiRemoveEnclavePagesFromDump(BugCheckParameter2);
  return result;
}
