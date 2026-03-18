/*
 * XREFs of ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C0009ED8
 * Callers:
 *     InitFNTCache @ 0x1C000A170 (InitFNTCache.c)
 *     bInitCacheTable @ 0x1C02897FC (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0289978 (bReAllocCacheFile.c)
 * Callees:
 *     ?hGetHandleFromFilePath@@YAPEAXPEBGH@Z @ 0x1C00165B0 (-hGetHandleFromFilePath@@YAPEAXPEBGH@Z.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00166CC (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0016CE4 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

void *__fastcall bMapFileRetainHandle(const unsigned __int16 *a1, struct _FILEVIEW *a2, int a3, int *a4)
{
  void *v6; // rsi
  unsigned int v7; // ebx
  void *result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  PVOID MappedBase[10]; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp+38h] BYREF

  ViewSize = (ULONG_PTR)a4;
  memset(MappedBase, 0, sizeof(MappedBase));
  v6 = (void *)*((_QWORD *)a2 + 6);
  v7 = 0;
  if ( v6 || (result = hGetHandleFromFilePath(L"\\SystemRoot\\system32\\FNTCACHE.DAT", a3 != 0), (v6 = result) != 0LL) )
  {
    if ( (unsigned int)bCreateSectionFromHandle(
                         v6,
                         L"\\SystemRoot\\system32\\FNTCACHE.DAT",
                         (struct _FILEVIEW *)MappedBase,
                         a3,
                         0LL,
                         0) )
    {
      ViewSize = 0LL;
      if ( MmMapViewInSessionSpace(MappedBase[4], &MappedBase[1], &ViewSize) < 0 )
      {
        vUnreferenceFileviewSection((struct _FILEVIEW *)MappedBase);
      }
      else
      {
        v7 = 1;
        v9 = *(_OWORD *)&MappedBase[2];
        *(_OWORD *)a2 = *(_OWORD *)MappedBase;
        v10 = *(_OWORD *)&MappedBase[4];
        *((_OWORD *)a2 + 1) = v9;
        v11 = *(_OWORD *)&MappedBase[6];
        *((_OWORD *)a2 + 2) = v10;
        v12 = *(_OWORD *)&MappedBase[8];
        *((_OWORD *)a2 + 3) = v11;
        *((_OWORD *)a2 + 4) = v12;
      }
    }
    else if ( !*((_QWORD *)a2 + 6) )
    {
      ZwClose(v6);
    }
    return (void *)v7;
  }
  return result;
}
