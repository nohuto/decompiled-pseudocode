/*
 * XREFs of HalpDmaInitMemory @ 0x140A5BF54
 * Callers:
 *     HalpDmaInitDiscard @ 0x140A5B140 (HalpDmaInitDiscard.c)
 * Callees:
 *     HalpAllocPhysicalMemory @ 0x140A5C140 (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpDmaInitMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // ebp
  __int64 v10; // rax
  unsigned int i; // ebx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  HalpDmaAdapterListLock = 0LL;
  qword_140C4BD48 = (__int64)&HalpDmaAdapterList;
  HalpDmaAdapterList = (__int64)&HalpDmaAdapterList;
  LOWORD(HalpNewAdapter.Header.Lock) = 1;
  LOBYTE(a4) = 1;
  HalpNewAdapter.Header.Size = 6;
  HalpNewAdapter.Header.SignalState = 1;
  HalpNewAdapter.Header.WaitListHead.Blink = &HalpNewAdapter.Header.WaitListHead;
  HalpNewAdapter.Header.WaitListHead.Flink = &HalpNewAdapter.Header.WaitListHead;
  v14 = 0x1000000LL;
  qword_140C4B9C0 = HalpAllocPhysicalMemory(a1, &v14, 16LL, a4);
  LOBYTE(v5) = 1;
  dword_140C4B9B8 = qword_140C4B9C0 != 0 ? 0x10000 : 0;
  qword_140C4BB80 = HalpAllocPhysicalMemory(a1, &v14, 16LL, v5);
  v7 = 32;
  dword_140C4BB78 = qword_140C4BB80 != 0 ? 0x10000 : 0;
  v8 = (unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL ? 0x10000 : 196608;
  v9 = v8 >> 12;
  do
  {
    LOBYTE(v6) = 1;
    v14 = (1LL << v7) - 1;
    v10 = HalpAllocPhysicalMemory(a1, &v14, v9, v6);
    if ( v10 )
      break;
    ++v7;
  }
  while ( v7 <= 0x20 );
  qword_140C4BAA0 = v10;
  dword_140C4BA98 = v10 != 0 ? v8 : 0;
  if ( v7 >= 0x40 )
    qword_140C4BA68 = -1LL;
  else
    qword_140C4BA68 = (1LL << v7) - 1;
  for ( i = 32; i <= 0x20; ++i )
  {
    LOBYTE(v6) = 1;
    v14 = (1LL << i) - 1;
    v12 = HalpAllocPhysicalMemory(a1, &v14, v9, v6);
    if ( v12 )
      break;
  }
  qword_140C4BC60 = v12;
  result = -v12;
  dword_140C4BC58 = result != 0 ? v8 : 0;
  if ( i >= 0x40 )
  {
    qword_140C4BC28 = -1LL;
  }
  else
  {
    result = (1LL << i) - 1;
    qword_140C4BC28 = result;
  }
  return result;
}
