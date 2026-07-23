/*
 * XREFs of MiCreatePagefile @ 0x1407B25E0
 * Callers:
 *     MmStoreRegister @ 0x1407B1700 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     RtlSetAllBits @ 0x14025D340 (RtlSetAllBits.c)
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 *     InitializeSListHead @ 0x140338AF0 (InitializeSListHead.c)
 *     MiAllocateModWriterEntry @ 0x140344134 (MiAllocateModWriterEntry.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403BF324 (MiInitializePagefileBitmapsCache.c)
 *     MiReservePageHash @ 0x1403BF4A8 (MiReservePageHash.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1407B2924 (MiCreatePageFileSpaceBitmaps.c)
 *     MiDeletePagefile @ 0x1408D2CCC (MiDeletePagefile.c)
 */

_BYTE *__fastcall MiCreatePagefile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        UNICODE_STRING *a6,
        int a7,
        char a8)
{
  _BYTE *Pool; // rax
  _BYTE *v13; // r14
  UNICODE_STRING *v14; // rcx
  __int64 v15; // r13
  unsigned int v16; // r15d
  PVOID v17; // rax
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rdi
  _QWORD *ModWriterEntry; // rax
  _QWORD *v22; // rbx
  ULONG_PTR v23; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v25; // rdi
  _RTL_BITMAP *v26; // rdi
  PVOID v27; // rax
  _BYTE v30[288]; // [rsp+30h] [rbp-158h] BYREF

  memset(v30, 0, sizeof(v30));
  Pool = MiAllocatePool(64, 0x120uLL, 0x20206D4Du);
  v13 = v30;
  if ( Pool )
    v13 = Pool;
  *((_QWORD *)v13 + 1) = a5;
  *((_QWORD *)v13 + 7) = a2;
  *((_QWORD *)v13 + 3) = a4 - 2;
  *((_QWORD *)v13 + 6) = a4 - 2;
  *((_QWORD *)v13 + 28) = a3;
  *(_QWORD *)v13 = a4;
  *((_QWORD *)v13 + 2) = a4;
  *((_DWORD *)v13 + 31) = dword_140CFB18C;
  *((_DWORD *)v13 + 34) = 4 * dword_140CFB18C;
  *((_QWORD *)v13 + 31) = a1;
  InitializeSListHead((PSLIST_HEADER)v13 + 5);
  v14 = (UNICODE_STRING *)(v13 + 96);
  *((_QWORD *)v13 + 30) = 0LL;
  if ( a6 )
    *v14 = *a6;
  else
    RtlInitUnicodeString(v14, 0LL);
  if ( a7 < 0 )
  {
    *((_WORD *)v13 + 102) |= 0xB0u;
  }
  else if ( (a8 & 2) != 0 )
  {
    *((_WORD *)v13 + 102) |= 0x60u;
  }
  else
  {
    if ( (a7 & 0x40000000) != 0 )
      *((_WORD *)v13 + 102) |= 0x20u;
    if ( (a7 & 0x2000000) != 0 )
      *((_WORD *)v13 + 102) |= 0x80u;
  }
  if ( (a7 & 0x1000000) != 0 )
    *((_WORD *)v13 + 102) |= 0x400u;
  if ( (a8 & 1) != 0 )
    *((_WORD *)v13 + 102) |= 0x200u;
  if ( (a7 & 0x3C000000) != 0 )
    *((_DWORD *)v13 + 50) = (a7 & 0x3C000000u) >> 26;
  if ( v13 == v30 )
    goto LABEL_38;
  v15 = (unsigned int)dword_140CFB18C;
  if ( a7 < 0 || (a8 & 2) == 0 )
  {
    v16 = (a7 >> 31) + 2;
    v17 = MiAllocatePool(64, 8LL * v16, 0x20206D4Du);
    *((_QWORD *)v13 + 8) = v17;
    if ( !v17 )
      goto LABEL_38;
    v18 = 0;
    if ( a7 >> 31 != -2 )
    {
      v19 = a1;
      v20 = 0LL;
      do
      {
        ModWriterEntry = MiAllocateModWriterEntry(v19, v15, 0);
        v22 = ModWriterEntry;
        if ( !ModWriterEntry )
          goto LABEL_38;
        memset(ModWriterEntry, 0, 0x108uLL);
        v19 = a1;
        ++v18;
        v22[24] = a1;
        v22[18] = v13;
        *(_QWORD *)(v20 + *((_QWORD *)v13 + 8)) = v22;
        v20 += 8LL;
        ++*((_DWORD *)v13 + 18);
      }
      while ( v18 < v16 );
    }
    if ( (a8 & 2) == 0 )
    {
      v23 = MiReservePageHash(*((_DWORD *)v13 + 2));
      if ( !v23 )
        goto LABEL_38;
      *((_QWORD *)v13 + 27) = v23;
    }
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((unsigned int *)v13 + 2));
  v25 = PageFileSpaceBitmaps;
  if ( PageFileSpaceBitmaps )
  {
    *((_QWORD *)v13 + 14) = PageFileSpaceBitmaps;
    RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
    RtlClearBits((PRTL_BITMAP)(v25 + 8), 2u, *(_DWORD *)v13 - 2);
    v26 = (_RTL_BITMAP *)(v25 + 24);
    RtlSetAllBits(v26);
    if ( (a8 & 2) == 0 )
      RtlClearBits(v26, 2u, *(_DWORD *)v13 - 2);
    *((_DWORD *)v13 + 30) = 2;
    if ( (a8 & 2) != 0 )
      return v13;
    v27 = MiAllocatePool(64, 0x7000uLL, 0x6342694Du);
    *((_QWORD *)v13 + 24) = v27;
    if ( v27 )
    {
      MiInitializePagefileBitmapsCache((__int64)v13);
      return v13;
    }
  }
LABEL_38:
  MiDeletePagefile(v13);
  return 0LL;
}
