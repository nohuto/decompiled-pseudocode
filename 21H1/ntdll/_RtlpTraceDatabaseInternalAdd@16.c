/*
 * XREFs of _RtlpTraceDatabaseInternalAdd@16 @ 0x4B36A4C6
 * Callers:
 *     _RtlTraceDatabaseAdd@16 @ 0x4B36A150 (_RtlTraceDatabaseAdd@16.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _RtlpTraceDatabaseAllocate@12 @ 0x4B36A468 (_RtlpTraceDatabaseAllocate@12.c)
 *     _RtlpTraceDatabaseInternalFind@16 @ 0x4B36A614 (_RtlpTraceDatabaseInternalFind@16.c)
 */

char __fastcall RtlpTraceDatabaseInternalAdd(int a1, unsigned int a2, void *Src, unsigned int *a4)
{
  unsigned int v6; // eax
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  _DWORD *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  size_t v15; // [esp-4h] [ebp-14h]
  unsigned int v16; // [esp+Ch] [ebp-4h] BYREF

  if ( a2 <= 0x100 )
  {
    if ( (unsigned __int8)RtlpTraceDatabaseInternalFind(Src, &v16) )
    {
      v6 = v16;
      ++*(_DWORD *)(v16 + 4);
      if ( a4 )
        *a4 = v6;
      ++*(_DWORD *)(a1 + 68);
      return 1;
    }
    v8 = *(_DWORD *)(a1 + 12);
    v9 = 4 * a2 + 32;
    v16 = v9;
    if ( v9 > *(_DWORD *)(v8 + 20) - *(_DWORD *)(v8 + 24) )
    {
      v10 = *(_DWORD *)(a1 + 16);
      if ( v10 && *(_DWORD *)(a1 + 20) > v10 || (v11 = RtlpTraceDatabaseAllocate(0x10000u, v8), (v8 = (int)v11) == 0) )
      {
LABEL_11:
        if ( a4 )
          *a4 = 0;
        return 0;
      }
      v9 = v16;
      v11[5] = v11 + 0x4000;
      *v11 = -1412580421;
      v11[1] = a1;
      v11[3] = 0x10000;
      v11[4] = v11;
      v11[6] = v11 + 7;
      v11[2] = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 20) += 0x10000;
      *(_DWORD *)(a1 + 12) = v11;
    }
    v12 = *(_DWORD *)(v8 + 24);
    if ( v9 <= *(_DWORD *)(v8 + 20) - v12 )
    {
      *(_DWORD *)(v8 + 24) = v12 + v9;
      *(_DWORD *)v12 = -1412584790;
      *(_DWORD *)(v12 + 8) = a2;
      *(_DWORD *)(v12 + 4) = 1;
      *(_DWORD *)(v12 + 28) = v12 + 32;
      *(_DWORD *)(v12 + 12) = 0;
      *(_DWORD *)(v12 + 16) = 0;
      LODWORD(v15) = 4 * a2;
      memmove(*(void **)(v12 + 28), Src, v15);
      v13 = (*(int (__thiscall **)(_DWORD, unsigned int, void *))(a1 + 60))(*(_DWORD *)(a1 + 60), a2, Src);
      v14 = *(_DWORD *)(a1 + 52);
      ++*(_DWORD *)(a1 + 4 * (v13 % v14 / (v14 >> 4)) + 72);
      *(_DWORD *)(v12 + 24) = *(_DWORD *)(*(_DWORD *)(a1 + 56) + 4 * (v13 % v14));
      *(_DWORD *)(*(_DWORD *)(a1 + 56) + 4 * (v13 % v14)) = v12;
      if ( a4 )
        *a4 = v12;
      ++*(_DWORD *)(a1 + 64);
      return 1;
    }
    DbgPrint("Trace database: failing attempt to save biiiiig trace (size %u) \n", a2);
    goto LABEL_11;
  }
  return 0;
}
