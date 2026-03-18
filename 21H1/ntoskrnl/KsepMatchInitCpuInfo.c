/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140A6649C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140A65FE0 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x1407A9850 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140C54168 = 0LL;
  qword_140C54198 = 0LL;
  v0 = -1LL;
  xmmword_140C54178 = 0LL;
  xmmword_140C54188 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140CF2550, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C54188) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140C54188) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140C54168 = word_140CF2550;
  }
  return result;
}
