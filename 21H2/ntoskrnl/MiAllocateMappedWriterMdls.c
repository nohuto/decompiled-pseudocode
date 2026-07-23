/*
 * XREFs of MiAllocateMappedWriterMdls @ 0x1403CC4C0
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1406AA564 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     MiAllocateModWriterEntry @ 0x14027BAC8 (MiAllocateModWriterEntry.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiAllocateMappedWriterMdls(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  _DWORD *ModWriterEntry; // rax
  _DWORD *v10; // rdi
  _QWORD *v11; // rcx

  v4 = 20LL;
  v5 = a1[866] >> 15;
  if ( v5 >= 0x14 )
  {
    v4 = a1[866] >> 15;
    if ( v5 > 0x80 )
      v4 = 128LL;
  }
  v7 = 0;
  a1[77] = v4;
  v8 = 0;
  while ( 1 )
  {
    ModWriterEntry = MiAllocateModWriterEntry((__int64)a1, 16LL, 1, a4);
    v10 = ModWriterEntry;
    if ( !ModWriterEntry )
      break;
    memset(ModWriterEntry, 0, 0x108uLL);
    v10[10] |= 1u;
    *((_QWORD *)v10 + 24) = a1;
    v11 = (_QWORD *)a1[80];
    if ( (_QWORD *)*v11 != a1 + 79 )
      __fastfail(3u);
    *(_QWORD *)v10 = a1 + 79;
    ++v8;
    *((_QWORD *)v10 + 1) = v11;
    *v11 = v10;
    a1[80] = v10;
    if ( v8 >= 4 )
      return v7;
  }
  if ( !v8 )
    return (unsigned int)-1073741670;
  return v7;
}
