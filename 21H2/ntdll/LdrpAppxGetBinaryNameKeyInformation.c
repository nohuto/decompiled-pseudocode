/*
 * XREFs of LdrpAppxGetBinaryNameKeyInformation @ 0x1800CB9E0
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB650 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x18009D8E0 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpAppxGetBinaryNameKeyInformation(HANDLE KeyHandle, _QWORD *a2, _QWORD *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  NTSTATUS v8; // ebx
  _DWORD *Heap; // rax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-38h] BYREF
  SIZE_T Size; // [rsp+88h] [rbp+20h] BYREF

  *(_DWORD *)&ValueName.Length = 1441812;
  ValueName.Buffer = L"BinaryName";
  v6 = 0LL;
  v7 = 0LL;
  v8 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)&Size);
  if ( v8 >= 0 )
    v8 = -1073739509;
  if ( v8 != -1073741789 )
  {
LABEL_13:
    if ( v8 >= 0 )
    {
      *a2 = v6;
      *a3 = v7;
      return (unsigned int)v8;
    }
    goto LABEL_15;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
  v7 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  v8 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Size, (PULONG)&Size);
  if ( v8 >= 0 )
  {
    if ( v7[1] != 1 || v7[2] < 4u )
      v8 = -1073739509;
    if ( v8 >= 0 )
    {
      v6 = v7 + 3;
      if ( *((_WORD *)v7 + ((unsigned __int64)(unsigned int)v7[2] >> 1) + 5) )
        v8 = -1073739509;
      goto LABEL_13;
    }
  }
LABEL_15:
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return (unsigned int)v8;
}
