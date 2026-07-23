/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140A6B58C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A6B0D0 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x1407BF210 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140C542A8 = 0LL;
  qword_140C542D8 = 0LL;
  v0 = -1LL;
  xmmword_140C542B8 = 0LL;
  xmmword_140C542C8 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140CF2810, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C542C8) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140C542C8) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140C542A8 = word_140CF2810;
  }
  return result;
}
