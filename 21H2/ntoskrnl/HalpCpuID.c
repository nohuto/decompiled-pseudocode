/*
 * XREFs of HalpCpuID @ 0x140251BF0
 * Callers:
 *     HalpGetProcessorBrandString @ 0x1407C8070 (HalpGetProcessorBrandString.c)
 *     HalpMcaSetFeatureFlags @ 0x1409A2364 (HalpMcaSetFeatureFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpCpuID(unsigned int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  *a3 = _RBX;
  *a4 = _RCX;
  *a5 = _RDX;
  return result;
}
