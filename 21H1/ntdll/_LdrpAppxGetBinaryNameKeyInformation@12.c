/*
 * XREFs of _LdrpAppxGetBinaryNameKeyInformation@12 @ 0x4B32C5D2
 * Callers:
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 */

NTSTATUS __fastcall LdrpAppxGetBinaryNameKeyInformation(HANDLE KeyHandle, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  _DWORD *Heap; // edi
  NTSTATUS v5; // esi
  SIZE_T v7; // [esp-4h] [ebp-24h]
  _UNICODE_STRING ValueName; // [esp+Ch] [ebp-14h] BYREF
  _DWORD *v9; // [esp+14h] [ebp-Ch]
  HANDLE KeyHandlea; // [esp+18h] [ebp-8h]
  ULONG ResultLength; // [esp+1Ch] [ebp-4h] BYREF

  v9 = a2;
  ValueName.Length = 20;
  ValueName.MaximumLength = 22;
  v3 = 0;
  KeyHandlea = KeyHandle;
  ValueName.Buffer = L"BinaryName";
  Heap = 0;
  v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0, 0, &ResultLength);
  if ( v5 >= 0 )
    v5 = -1073739509;
  if ( v5 != -1073741789 )
  {
LABEL_13:
    if ( v5 >= 0 )
    {
      *v9 = v3;
      *a3 = Heap;
      return v5;
    }
    goto LABEL_15;
  }
  LODWORD(v7) = ResultLength;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
  if ( !Heap )
    return -1073741801;
  v5 = ZwQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, Heap, ResultLength, &ResultLength);
  if ( v5 >= 0 )
  {
    if ( Heap[1] != 1 || Heap[2] < 4u )
      v5 = -1073739509;
    if ( v5 >= 0 )
    {
      v3 = Heap + 3;
      if ( *((_WORD *)Heap + (Heap[2] >> 1) + 5) )
        v5 = -1073739509;
      goto LABEL_13;
    }
  }
LABEL_15:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v5;
}
