/*
 * XREFs of HalpWheaInitProcessorGenericSection @ 0x1404D7C70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpWheaInitProcessorGenericSection(__int64 a1, __int64 *a2)
{
  __int64 v9; // rdx
  __int64 result; // rax

  memset((void *)a1, 0, 0x48uLL);
  *(_DWORD *)(a1 + 48) = 3;
  *(_WORD *)(a1 + 8) = 768;
  *(_DWORD *)(a1 + 4) = 192;
  *(GUID *)(a1 + 16) = PROCESSOR_GENERIC_ERROR_SECTION_GUID;
  memset(a2, 0, 0xC0uLL);
  *((_BYTE *)a2 + 9) = 2;
  _RAX = 1LL;
  __asm { cpuid }
  v9 = *a2 | 0x43;
  *a2 = v9;
  a2[2] = (unsigned int)_RAX;
  result = 0LL;
  a2[19] = KeGetCurrentPrcb()->InitialApicId;
  *a2 = v9 | 0x100;
  return result;
}
