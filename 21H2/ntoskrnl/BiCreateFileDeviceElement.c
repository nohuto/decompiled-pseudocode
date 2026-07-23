/*
 * XREFs of BiCreateFileDeviceElement @ 0x14096FDC0
 * Callers:
 *     BiCreatePartitionDevice @ 0x140785280 (BiCreatePartitionDevice.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiCreateFileDeviceElement(const wchar_t *Src, _QWORD *a2, unsigned int *a3)
{
  int v4; // edi
  wchar_t *v5; // rax
  const wchar_t *v6; // r14
  __int64 v7; // rbx
  char *PoolWithTag; // rbp
  size_t v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // rax
  unsigned int v14; // r13d
  char *v15; // rax
  char *v16; // rbx
  __int64 v17; // rdx

  v4 = 0;
  if ( wcsnicmp(Src, L"\\Device\\HarddiskVolume", 0x16uLL) )
    return (unsigned int)-1073741811;
  v5 = wcschr(Src + 22, 0x5Cu);
  if ( (v6 = v5) == 0LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = v5 - Src;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v7 + 1), 0x4B444342u);
    if ( PoolWithTag )
    {
      v9 = 2LL * (unsigned int)v7;
      memmove(PoolWithTag, Src, v9);
      v10 = -1LL;
      *(_WORD *)&PoolWithTag[v9] = 0;
      v11 = -1LL;
      do
        ++v11;
      while ( v6[v11] );
      v12 = 2 * v11 + 46;
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)&PoolWithTag[2 * v13] );
      v14 = v12 + 2 * (v13 + 11);
      v15 = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x4B444342u);
      v16 = v15;
      if ( v15 )
      {
        memset(v15, 0, v14);
        v17 = -1LL;
        *((_DWORD *)v16 + 5) = v12;
        *(_DWORD *)v16 = 3;
        do
          ++v17;
        while ( v6[v17] );
        wcscpy_s((wchar_t *)v16 + 12, v17 + 1, v6);
        *(_DWORD *)&v16[v12] = 2;
        do
          ++v10;
        while ( *(_WORD *)&PoolWithTag[2 * v10] );
        wcscpy_s((wchar_t *)&v16[v12 + 20], v10 + 1, (const wchar_t *)PoolWithTag);
        *a2 = v16;
        *a3 = v14;
      }
      else
      {
        v4 = -1073741670;
      }
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
      if ( v4 < 0 && v16 )
        ExFreePoolWithTag(v16, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
