/*
 * XREFs of HalpAcpiGetRsdt @ 0x140216204
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x1402166F0 (HalpAcpiGetTableFromBios.c)
 * Callees:
 *     HalpAcpiGetCachedTable @ 0x1402164D4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiCheckAndMapTable @ 0x140216898 (HalpAcpiCheckAndMapTable.c)
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     HalpAcpiCopyBiosTable @ 0x1403BB898 (HalpAcpiCopyBiosTable.c)
 *     HalpUnmapVirtualAddress @ 0x1403BBA00 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x1403BBAA8 (HalpMap.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 */

_QWORD *__fastcall HalpAcpiGetRsdt(__int64 a1)
{
  _QWORD *CachedTable; // rdi
  __int64 v3; // rcx
  void *v4; // rax
  void *v5; // rbx
  bool v6; // bp
  int *v8; // rax
  int *v9; // rbx
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rcx
  _QWORD *v13; // rax
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(NumberOfBytes) = 0;
  CachedTable = (_QWORD *)HalpAcpiGetCachedTable(1413763922LL, 0LL, 0LL);
  if ( CachedTable || (CachedTable = (_QWORD *)HalpAcpiGetCachedTable(1413763928LL, 0LL, 0LL)) != 0LL )
  {
    v3 = *(CachedTable - 1);
    if ( v3 )
    {
      v4 = (void *)(a1
                  ? HalpMap(*(CachedTable - 1), ((*(CachedTable - 1) & 0xFFFuLL) + 4131) >> 12, 1, 0, 4)
                  : MmMapIoSpaceEx(v3, 36LL, 516LL));
      v5 = v4;
      if ( v4 )
      {
        v6 = memcmp(CachedTable, v4, 0x24uLL) == 0;
        if ( a1 )
          HalpUnmapVirtualAddress(v5, (((unsigned __int16)v5 & 0xFFFu) + 4131) >> 12, 0LL);
        else
          MmUnmapIoSpace(v5, 0x24uLL);
        if ( !v6 )
        {
          v8 = (int *)HalpAcpiCheckAndMapTable(a1, *(CachedTable - 1), 36, 0, 0LL, 0LL, 1, (__int64)&NumberOfBytes);
          v9 = v8;
          if ( v8 )
          {
            v10 = *v8;
            if ( v10 == 1413763922 || v10 == 1413763928 )
            {
              v11 = HalpAcpiCopyBiosTable(a1, v9, *(CachedTable - 1));
              if ( a1 )
                HalpUnmapVirtualAddress(
                  v9,
                  (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
                  0LL);
              else
                MmUnmapIoSpace(v9, (unsigned int)NumberOfBytes);
              if ( v11 )
              {
                v12 = HalpAcpiTableCacheList;
                v13 = (_QWORD *)(v11 - 24);
                if ( *(__int64 **)(HalpAcpiTableCacheList + 8) != &HalpAcpiTableCacheList )
                  __fastfail(3u);
                *v13 = HalpAcpiTableCacheList;
                CachedTable = (_QWORD *)v11;
                v13[1] = &HalpAcpiTableCacheList;
                *(_QWORD *)(v12 + 8) = v13;
                HalpAcpiTableCacheList = v11 - 24;
              }
            }
            else if ( a1 )
            {
              HalpUnmapVirtualAddress(
                v9,
                (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
                0LL);
            }
            else
            {
              MmUnmapIoSpace(v9, (unsigned int)NumberOfBytes);
            }
          }
        }
      }
    }
  }
  return CachedTable;
}
