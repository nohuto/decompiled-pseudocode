/*
 * XREFs of RtlFreeOemString @ 0x1407613E0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  ULONG v1; // edx
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, v1);
}
