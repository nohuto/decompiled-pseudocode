/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140A6A58C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A6A0D0 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x1407BEA80 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140C54268 = 0LL;
  qword_140C54298 = 0LL;
  v0 = -1LL;
  xmmword_140C54278 = 0LL;
  xmmword_140C54288 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140CF27D0, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C54288) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140C54288) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140C54268 = word_140CF27D0;
  }
  return result;
}
