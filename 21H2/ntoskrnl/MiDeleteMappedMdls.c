/*
 * XREFs of MiDeleteMappedMdls @ 0x1405357BC
 * Callers:
 *     MiMappedPageWriter @ 0x1403B78A0 (MiMappedPageWriter.c)
 *     MiEnablePartitionMappedWrites @ 0x1406AA564 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     MiFreeModWriterEntry @ 0x140276D58 (MiFreeModWriterEntry.c)
 */

void __fastcall MiDeleteMappedMdls(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD **)(a1 + 632);
  while ( 1 )
  {
    v2 = *v1;
    if ( *v1 == v1 )
      break;
    if ( (_QWORD **)v2[1] != v1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *v1 = v3;
    v3[1] = v1;
    MiFreeModWriterEntry(v2, 1u);
  }
}
