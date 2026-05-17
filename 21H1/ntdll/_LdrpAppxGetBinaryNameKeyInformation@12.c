/*
 * XREFs of _LdrpAppxGetBinaryNameKeyInformation@12 @ 0x4B32C5D2
 * Callers:
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 */

int __fastcall LdrpAppxGetBinaryNameKeyInformation(int a1, int *a2, int *a3)
{
  int v3; // ebx
  int Heap; // edi
  int ValueKey; // esi
  _WORD v7[2]; // [esp+Ch] [ebp-14h] BYREF
  const wchar_t *v8; // [esp+10h] [ebp-10h]
  int *v9; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h]
  int v11; // [esp+1Ch] [ebp-4h] BYREF

  v9 = a2;
  v7[0] = 20;
  v7[1] = 22;
  v3 = 0;
  v10 = a1;
  v8 = L"BinaryName";
  Heap = 0;
  ValueKey = ZwQueryValueKey(a1, (int)v7, 2, 0, 0, (int)&v11);
  if ( ValueKey >= 0 )
    ValueKey = -1073739509;
  if ( ValueKey != -1073741789 )
  {
LABEL_13:
    if ( ValueKey >= 0 )
    {
      *v9 = v3;
      *a3 = Heap;
      return ValueKey;
    }
    goto LABEL_15;
  }
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v11);
  if ( !Heap )
    return -1073741801;
  ValueKey = ZwQueryValueKey(v10, (int)v7, 2, Heap, v11, (int)&v11);
  if ( ValueKey >= 0 )
  {
    if ( *(_DWORD *)(Heap + 4) != 1 || *(_DWORD *)(Heap + 8) < 4u )
      ValueKey = -1073739509;
    if ( ValueKey >= 0 )
    {
      v3 = Heap + 12;
      if ( *(_WORD *)(Heap + 12 + 2 * (*(_DWORD *)(Heap + 8) >> 1) - 2) )
        ValueKey = -1073739509;
      goto LABEL_13;
    }
  }
LABEL_15:
  if ( Heap )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return ValueKey;
}
