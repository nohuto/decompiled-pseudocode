/*
 * XREFs of StorCreateAnsiString @ 0x1C0013EEC
 * Callers:
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C0013E90 (RaidBusEnumeratorProcessSerialNumber.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     memmove @ 0x1C001D740 (memmove.c)
 */

__int64 __fastcall StorCreateAnsiString(__int64 a1, _BYTE *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned int v8; // ebx
  PVOID Pool; // rax

  LODWORD(v5) = a3;
  if ( a3 == -1 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  if ( (unsigned int)v5 > 0xFFFE )
    return 3221225621LL;
  v8 = (unsigned __int16)v5;
  Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned __int16)v5 + 1LL, 0x53446152u, a5);
  *(_QWORD *)(a1 + 8) = Pool;
  if ( !Pool )
    return 3221225495LL;
  memmove(Pool, a2, v8);
  *(_WORD *)a1 = v8;
  *(_WORD *)(a1 + 2) = v8 + 1;
  return 0LL;
}
