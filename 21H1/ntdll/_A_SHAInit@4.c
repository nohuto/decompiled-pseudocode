/*
 * XREFs of _A_SHAInit@4 @ 0x4B308A40
 * Callers:
 *     _RtlCreateServiceSid@12 @ 0x4B2AC190 (_RtlCreateServiceSid@12.c)
 *     _A_SHAFinal@8 @ 0x4B2E7AE0 (_A_SHAFinal@8.c)
 *     _RtlCreateVirtualAccountSid@16 @ 0x4B3461A0 (_RtlCreateVirtualAccountSid@16.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall __spoils<ecx> A_SHAInit(_DWORD *a1)
{
  _DWORD *result; // eax
  BOOL v12; // ecx
  BOOL v13; // [esp+8h] [ebp-4h]

  if ( !SHATrnsfrm )
  {
    _EAX = 0;
    __asm { cpuid }
    v13 = _EDX == 0x49656E69 && _ECX == 0x6C65746E && _EBX == 0x756E6547;
    _EAX = 1;
    __asm { cpuid }
    v12 = 1;
    if ( v13 )
      v12 = (_EAX & 0xFF0u) >= 0x660;
    SHATrnsfrm = (int (__thiscall *)(_DWORD, _DWORD, _DWORD))trnsfrms[v12];
  }
  result = a1;
  a1[21] = 0;
  a1[22] = 0;
  a1[16] = 1732584193;
  a1[17] = -271733879;
  a1[18] = -1732584194;
  a1[19] = 271733878;
  a1[20] = -1009589776;
  return result;
}
