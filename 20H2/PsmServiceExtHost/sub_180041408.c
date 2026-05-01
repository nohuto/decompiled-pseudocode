/*
 * XREFs of sub_180041408 @ 0x180041408
 * Callers:
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_18004135C @ 0x18004135C (sub_18004135C.c)
 *     sub_18006D174 @ 0x18006D174 (sub_18006D174.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180041408(_QWORD *a1, _DWORD *a2)
{
  PVOID Heap; // rbx
  int i; // eax
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  SIZE_T Size; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  Heap = 0LL;
  for ( i = 0; ; i = Size )
  {
    v11 = 0LL;
    v6 = NtQuerySystemInformationEx(175LL, &v11, 8LL, Heap, i, &Size);
    v7 = v6;
    if ( v6 >= 0 )
      break;
    if ( v6 != -1073741789 )
      goto LABEL_9;
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
    if ( !Heap )
      return (unsigned int)-1073741801;
  }
  v8 = Size;
  *a1 = Heap;
  Heap = 0LL;
  *a2 = v8;
LABEL_9:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v7;
}
