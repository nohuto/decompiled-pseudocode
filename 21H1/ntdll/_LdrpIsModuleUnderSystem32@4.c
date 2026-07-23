/*
 * XREFs of _LdrpIsModuleUnderSystem32@4 @ 0x4B2E8D7C
 * Callers:
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 * Callees:
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 */

char __thiscall LdrpIsModuleUnderSystem32(int this)
{
  unsigned __int16 Length; // ax
  char v2; // bl
  _UNICODE_STRING String1; // [esp+8h] [ebp-8h] BYREF

  String1 = *(_UNICODE_STRING *)(this + 36);
  Length = String1.Length;
  String1.Length = LdrpSystem32.Length;
  if ( Length - (unsigned int)*(unsigned __int16 *)(this + 44) <= (unsigned int)LdrpSystem32.Length + 2 )
    return 0;
  if ( *(_WORD *)(*(_DWORD *)(this + 40) + 2 * (LdrpSystem32.Length >> 1)) != 92 )
    return 0;
  v2 = 1;
  if ( RtlCompareUnicodeString(&String1, &LdrpSystem32, 1u) )
    return 0;
  return v2;
}
