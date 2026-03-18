/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140A6D14C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A6CC90 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x1407BA8F0 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140C540E8 = 0LL;
  qword_140C54118 = 0LL;
  v0 = -1LL;
  xmmword_140C540F8 = 0LL;
  xmmword_140C54108 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140CF24D0, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C54108) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140C54108) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140C540E8 = word_140CF24D0;
  }
  return result;
}
