/*
 * XREFs of _RtlpNtEnumerateSubKey@16 @ 0x4B36D180
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __stdcall RtlpNtEnumerateSubKey(HANDLE KeyHandle, int a2, ULONG Index, int a4)
{
  unsigned __int16 *Heap; // esi
  ULONG v5; // edi
  int v6; // eax
  NTSTATUS v8; // edi
  SIZE_T v9; // [esp-4h] [ebp-14h]
  ULONG ResultLength; // [esp+Ch] [ebp-4h] BYREF

  Heap = 0;
  v5 = 0;
  v6 = *(unsigned __int16 *)(a2 + 2);
  if ( (_WORD)v6 )
  {
    v5 = v6 + 16;
    LODWORD(v9) = v6 + 16;
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    if ( !Heap )
      return -1073741801;
  }
  v8 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, Heap, v5, &ResultLength);
  if ( v8 >= 0 && Heap )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 2) < *((_DWORD *)Heap + 3) )
    {
      v8 = -2147483643;
    }
    else
    {
      LODWORD(v9) = Heap[6];
      *(_WORD *)a2 = v9;
      memcpy(*(void **)(a2 + 4), Heap + 8, v9);
    }
  }
  if ( v8 == -2147483643 )
    *(_WORD *)a2 = ResultLength - 16;
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v8;
}
