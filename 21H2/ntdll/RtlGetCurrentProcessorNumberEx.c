/*
 * XREFs of RtlGetCurrentProcessorNumberEx @ 0x1800A22E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  PPROCESSOR_NUMBER v1; // r8
  char v2; // zf
  unsigned __int32 v3; // eax

  if ( MEMORY[0x7FFE0295] )
  {
    v1 = ProcessorNumber;
    __asm { rdpid   rcx }
LABEL_5:
    v1->Group = (unsigned int)ProcessorNumber >> 8;
    *(_WORD *)&v1->Number = (unsigned __int8)ProcessorNumber;
    return;
  }
  if ( MEMORY[0x7FFE0294] )
  {
    v1 = ProcessorNumber;
    __asm { rdtscp }
    goto LABEL_5;
  }
  v3 = __segmentlimit(0x53u);
  if ( v2 )
  {
    ProcessorNumber->Group = v3 & 0x3FF;
    *(_WORD *)&ProcessorNumber->Number = v3 >> 14;
  }
  else
  {
    *ProcessorNumber = 0;
    NtGetCurrentProcessorNumberEx(ProcessorNumber);
  }
}
