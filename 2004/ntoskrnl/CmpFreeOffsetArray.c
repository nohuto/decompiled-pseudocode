/*
 * XREFs of CmpFreeOffsetArray @ 0x14086DFB0
 * Callers:
 *     CmpFlushBackupHive @ 0x14086DC18 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x140878820 (CmDumpKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeOffsetArray(unsigned int a1, PVOID *a2)
{
  PVOID *v3; // rbx
  __int64 v4; // rsi

  if ( a1 )
  {
    v3 = a2 + 1;
    v4 = a1;
    do
    {
      ExFreePoolWithTag(*v3, 0);
      v3 += 3;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(a2, 0);
}
