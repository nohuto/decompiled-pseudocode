/*
 * XREFs of _LdrpGetModuleInfoFromVirtualMemory@28 @ 0x4B33F74C
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpMUIEtwOutput@16 @ 0x4B33F89A (_LdrpMUIEtwOutput@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _wcsrchr @ 0x4B2FA900 (_wcsrchr.c)
 */

int __fastcall LdrpGetModuleInfoFromVirtualMemory(
        int a1,
        wchar_t *a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _DWORD *a5,
        int *a6,
        _BYTE *a7)
{
  int Heap; // ebx
  int VirtualMemory; // edi
  __int16 *v10; // ecx
  _WORD *v11; // edx
  __int16 v12; // ax
  size_t v13; // ecx
  wchar_t *v14; // esi
  wchar_t *v15; // eax
  const void *v17; // esi
  __int16 *v18; // ecx
  wchar_t *v19; // edx
  __int16 v20; // ax
  int v21; // ecx
  void *v22; // eax
  void *ProcessHeap; // [esp-Ch] [ebp-24h]
  size_t v24; // [esp+Ch] [ebp-Ch] BYREF
  wchar_t *Str; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Str = a2;
  Heap = RtlAllocateHeap((int)ProcessHeap, 8, a3);
  v26 = 0;
  if ( Heap )
  {
    VirtualMemory = NtQueryVirtualMemory(-1, a1, 2, Heap, a3, (int)&v24);
    if ( VirtualMemory < 0 )
      goto LABEL_8;
    v10 = *(__int16 **)(Heap + 4);
    v11 = v10 + 1;
    do
      v12 = *v10++;
    while ( v12 != (_WORD)v26 );
    v13 = 2 * (v10 - v11) + 2;
    v24 = v13;
    if ( v13 >= a3 )
    {
      VirtualMemory = -2147483643;
    }
    else
    {
      v14 = Str;
      memcpy(Str, *(const void **)(Heap + 4), v13);
      v15 = wcsrchr(v14, 0x5Cu);
      if ( !v15 )
      {
        VirtualMemory = -1073741767;
        goto LABEL_8;
      }
      v17 = v15 + 1;
      v18 = (__int16 *)(v15 + 1);
      v19 = v15 + 2;
      do
        v20 = *v18++;
      while ( v20 != (_WORD)v26 );
      v21 = 2 * (((char *)v18 - (char *)v19) >> 1);
      v26 = v21;
      if ( a5 )
      {
        v22 = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v21 + 2);
        *a5 = v22;
        if ( !v22 )
        {
          VirtualMemory = -1073741801;
          goto LABEL_8;
        }
        memcpy(v22, v17, v26 + 2);
        v21 = v26;
      }
      if ( a6 )
        *a6 = v21;
      if ( a4 )
        *a4 = ((_BYTE *)v17 - (_BYTE *)Str) & 0xFFFFFFFE;
      if ( a7 )
        *a7 = 1;
    }
  }
  else
  {
    VirtualMemory = -1073741801;
  }
LABEL_8:
  if ( Heap )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return VirtualMemory;
}
