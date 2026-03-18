/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140A65E7C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A659C0 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x1407AC9B0 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140C54068 = 0LL;
  qword_140C54098 = 0LL;
  v0 = -1LL;
  xmmword_140C54078 = 0LL;
  xmmword_140C54088 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140CF2410, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C54088) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140C54088) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140C54068 = word_140CF2410;
  }
  return result;
}
