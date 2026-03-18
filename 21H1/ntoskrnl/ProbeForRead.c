/*
 * XREFs of ProbeForRead @ 0x1406BB590
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
