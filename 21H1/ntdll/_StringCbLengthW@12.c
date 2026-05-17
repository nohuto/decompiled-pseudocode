/*
 * XREFs of _StringCbLengthW@12 @ 0x4B2DAA52
 * Callers:
 *     _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7 (_WerEscalationReadImageVersionInfoForModuleBase@8.c)
 * Callees:
 *     StringLengthWorkerW @ 0x4B2DAA90 (StringLengthWorkerW.c)
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  int v3; // ecx
  size_t v4; // eax
  int v5; // edx
  wchar_t v7[2]; // [esp+0h] [ebp-4h] BYREF
  size_t *savedregs; // [esp+4h] [ebp+0h]

  v4 = 0;
  *(_DWORD *)v7 = 0;
  if ( v3 )
  {
    v5 = StringLengthWorkerW(v7, *(size_t *)v7, savedregs);
    v4 = *(_DWORD *)v7;
  }
  else
  {
    v5 = -2147024809;
  }
  if ( psz )
  {
    if ( v5 < 0 )
      *(_DWORD *)psz = 0;
    else
      *(_DWORD *)psz = 2 * v4;
  }
  return v5;
}
