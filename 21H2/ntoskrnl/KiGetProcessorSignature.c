/*
 * XREFs of KiGetProcessorSignature @ 0x14099CEA8
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x14099DB6C (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x14099CF68 (KiGetCpuVendor.c)
 */

__int64 __fastcall KiGetProcessorSignature(_BYTE *a1, int *a2, int *a3, _DWORD *a4)
{
  char CpuVendor; // r10
  __int64 result; // rax
  int v14; // edx
  int v15; // ecx

  CpuVendor = KiGetCpuVendor(a1, a2);
  _RAX = 1LL;
  __asm { cpuid }
  v14 = BYTE1(result) & 0xF;
  if ( v14 == 15 )
  {
    v14 = (unsigned __int8)((unsigned int)result >> 20) + 15;
    v15 = (unsigned __int64)(result & 0xF0 | ((unsigned int)result >> 8) & 0xF00) >> 4;
  }
  else
  {
    v15 = (unsigned __int8)result >> 4;
  }
  if ( (CpuVendor == 2 || CpuVendor == 3) && v14 == 6 )
    v15 |= ((unsigned int)result >> 12) & 0xF0;
  if ( a1 )
    *a1 = CpuVendor;
  if ( a2 )
    *a2 = v14;
  if ( a3 )
    *a3 = v15;
  if ( a4 )
    *a4 = result & 0xF;
  return (unsigned int)result;
}
