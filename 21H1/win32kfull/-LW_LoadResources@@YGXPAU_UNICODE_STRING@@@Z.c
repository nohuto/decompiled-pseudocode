/*
 * XREFs of ?LW_LoadResources@@YGXPAU_UNICODE_STRING@@@Z @ 0xDB618
 * Callers:
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __thiscall LW_LoadResources(void *this)
{
  BOOL v2; // ecx
  _WORD v3[4]; // [esp+Ch] [ebp-Ch] BYREF

  FastGetProfileStringFromIDW(this, 12, 5, &szN, v3, 4, 0);
  v2 = v3[0] == 49 || v3[0] == 89 || v3[0] == 121;
  *(_DWORD *)(_gpsi + 1588) = v2;
  FastGetProfileStringFromIDW(this, 11, 9, &szY, v3, 4, 0);
  if ( v3[0] == 89 || v3[0] == 121 )
    _gdwPUDFlags |= (unsigned int)&loc_80000;
  else
    _gdwPUDFlags &= ~0x80000u;
  FastGetProfileStringFromIDW(this, 11, 220, &szN, v3, 4, 0);
  if ( v3[0] == 121 || v3[0] == 89 )
    _gdwPUDFlags |= 0x1000000u;
  else
    _gdwPUDFlags &= ~0x1000000u;
}
