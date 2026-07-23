/*
 * XREFs of _LdrpRecordModuleDependency@16 @ 0x4B2CF113
 * Callers:
 *     _LdrpFastpthReloadedDll@16 @ 0x4B2CE2E0 (_LdrpFastpthReloadedDll@16.c)
 *     _LdrpBuildForwarderLink@8 @ 0x4B2E7CE3 (_LdrpBuildForwarderLink@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpDependencyExist@8 @ 0x4B2CF1BD (_LdrpDependencyExist@8.c)
 */

_DWORD *__fastcall LdrpRecordModuleDependency(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // esi
  int v5; // edi
  unsigned int v6; // eax
  _DWORD *v8; // ecx
  _DWORD *Heap; // eax
  _DWORD *v10; // edx
  _DWORD *v11; // edx
  _DWORD *v12; // ebx
  int v13; // eax
  int v14; // eax
  SIZE_T v15; // [esp-4h] [ebp-10h]

  v4 = *(_DWORD *)(a1 + 80);
  v5 = *(_DWORD *)(a2 + 80);
  if ( !(unsigned __int8)LdrpDependencyExist(v4, v5) )
  {
    v8 = a3;
    if ( !a3 )
    {
      LODWORD(v15) = 16;
      Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, v15);
      v8 = Heap;
      if ( !Heap )
      {
        *a4 = -1073741801;
        return 0;
      }
      Heap[3] |= 1u;
    }
    v10 = *(_DWORD **)(v4 + 24);
    if ( v10 )
    {
      *v8 = *v10;
      *v10 = v8;
    }
    else
    {
      *v8 = v8;
    }
    *(_DWORD *)(v4 + 24) = v8;
    v11 = v8 + 2;
    v8[1] = v5;
    v12 = *(_DWORD **)(v5 + 28);
    if ( v12 )
    {
      *v11 = *v12;
      *v12 = v11;
    }
    else
    {
      *v11 = v11;
    }
    *(_DWORD *)(v5 + 28) = v11;
    v13 = v8[3];
    v8[3] = v4;
    v14 = v13 & 1;
    if ( v14 )
      v8[3] = v14 | v4 & 0xFFFFFFFE;
    return 0;
  }
  v6 = *(_DWORD *)(v5 + 12);
  if ( v6 != -1 && v6 > 1 )
    *(_DWORD *)(v5 + 12) = v6 - 1;
  return a3;
}
