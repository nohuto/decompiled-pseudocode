/*
 * XREFs of _LdrpIsModuleUnderSystem32@4 @ 0x4B2E8D7C
 * Callers:
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 * Callees:
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 */

char __thiscall LdrpIsModuleUnderSystem32(int this)
{
  unsigned __int16 v1; // ax
  char v2; // bl
  _DWORD v4[2]; // [esp+8h] [ebp-8h] BYREF

  v4[0] = *(_DWORD *)(this + 36);
  v1 = v4[0];
  v4[1] = *(_DWORD *)(this + 40);
  LOWORD(v4[0]) = LdrpSystem32;
  if ( v1 - (unsigned int)*(unsigned __int16 *)(this + 44) <= (unsigned int)(unsigned __int16)LdrpSystem32 + 2 )
    return 0;
  if ( *(_WORD *)(*(_DWORD *)(this + 40) + 2 * ((unsigned __int16)LdrpSystem32 >> 1)) != 92 )
    return 0;
  v2 = 1;
  if ( RtlCompareUnicodeString((unsigned __int16 *)v4, (unsigned __int16 *)&LdrpSystem32, 1) )
    return 0;
  return v2;
}
