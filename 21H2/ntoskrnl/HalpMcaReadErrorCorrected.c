/*
 * XREFs of HalpMcaReadErrorCorrected @ 0x1404BD5B0
 * Callers:
 *     HalpMcaReadError @ 0x1404BAA50 (HalpMcaReadError.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403A108C (HalpGetCpuVendor.c)
 *     HalpMcaReadErrorCorrectedAMD @ 0x1404BD628 (HalpMcaReadErrorCorrectedAMD.c)
 */

__int64 __fastcall HalpMcaReadErrorCorrected(__int64 a1, _BYTE *a2)
{
  char CpuVendor; // cl
  __int64 result; // rax

  CpuVendor = HalpGetCpuVendor();
  if ( CpuVendor == 1 )
    return HalpMcaReadErrorCorrectedAMD(a1, a2);
  result = *(_QWORD *)a1;
  if ( CpuVendor != 2 )
  {
    if ( (result & 0x2000000000000000LL) != 0 )
      return result;
    goto LABEL_9;
  }
  if ( (result & 0x2000000000000000LL) == 0 )
  {
LABEL_9:
    *a2 = 1;
    return result;
  }
  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( (result & 0x300000000000000LL) == 0 )
      *(_WORD *)a2 = 257;
  }
  return result;
}
