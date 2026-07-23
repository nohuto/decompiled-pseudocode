/*
 * XREFs of MiCreateTopLevelUltraMappings @ 0x140A6AE58
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     InitializeSListHead @ 0x1402C1F70 (InitializeSListHead.c)
 *     MiInitializeUltraSpace @ 0x140A6AF54 (MiInitializeUltraSpace.c)
 */

__int64 MiCreateTopLevelUltraMappings()
{
  __int64 v0; // rdi
  unsigned int v1; // ebx
  char *Pool; // rsi
  __int64 v3; // rbp
  _SLIST_HEADER *v4; // rdi

  v0 = qword_140C4FA48;
  v1 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                        (((unsigned __int64)qword_140C4FA48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        (((unsigned __int64)qword_140C4FA48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 0x7FFFFFFF8LL,
                        6u,
                        9,
                        0) )
    return 0LL;
  if ( !(unsigned int)MiInitializeUltraSpace(&qword_140C4EB30, v0) )
    return 0LL;
  Pool = (char *)MiAllocatePool(72, (unsigned __int64)(unsigned __int16)KeNumberNodes << 9, 0x20206D4Du);
  if ( !Pool )
    return 0LL;
  if ( KeNumberNodes )
  {
    do
    {
      v3 = 8LL;
      v4 = (_SLIST_HEADER *)&Pool[512 * (unsigned __int64)v1];
      do
      {
        InitializeSListHead(v4);
        v4 += 4;
        --v3;
      }
      while ( v3 );
      ++v1;
    }
    while ( v1 < (unsigned __int16)KeNumberNodes );
  }
  qword_140C4EB78 = (__int64)Pool;
  return 1LL;
}
