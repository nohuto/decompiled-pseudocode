/*
 * XREFs of _RtlAllocateAndInitializeSid@44 @ 0x4B2E3710
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __stdcall RtlAllocateAndInitializeSid(
        int a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int *a11)
{
  int Heap; // eax

  if ( a2 > 8u )
    return -1073741704;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 4 * a2 + 8);
  if ( !Heap )
    return -1073741801;
  *(_BYTE *)(Heap + 1) = a2;
  *(_BYTE *)Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)a1;
  *(_WORD *)(Heap + 6) = *(_WORD *)(a1 + 4);
  switch ( a2 )
  {
    case 1u:
      goto LABEL_4;
    case 2u:
      goto LABEL_11;
    case 3u:
      goto LABEL_10;
    case 4u:
      goto LABEL_9;
    case 5u:
      goto LABEL_8;
    case 6u:
      goto LABEL_7;
    case 7u:
      goto LABEL_15;
    case 8u:
      *(_DWORD *)(Heap + 36) = a10;
LABEL_15:
      *(_DWORD *)(Heap + 32) = a9;
LABEL_7:
      *(_DWORD *)(Heap + 28) = a8;
LABEL_8:
      *(_DWORD *)(Heap + 24) = a7;
LABEL_9:
      *(_DWORD *)(Heap + 20) = a6;
LABEL_10:
      *(_DWORD *)(Heap + 16) = a5;
LABEL_11:
      *(_DWORD *)(Heap + 12) = a4;
LABEL_4:
      *(_DWORD *)(Heap + 8) = a3;
      break;
    default:
      break;
  }
  *a11 = Heap;
  return 0;
}
