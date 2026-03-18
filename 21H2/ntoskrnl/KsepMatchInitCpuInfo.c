/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140B01420
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140B01388 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x1408271EC (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140C5ABA8 = 0LL;
  qword_140C5ABD8 = 0LL;
  v0 = -1LL;
  xmmword_140C5ABB8 = 0LL;
  xmmword_140C5ABC8 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140CFFF10, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C5ABC8) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140C5ABC8) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140C5ABA8 = word_140CFFF10;
  }
  return result;
}
