/*
 * XREFs of QueryFontReg @ 0xDF742
 * Callers:
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 * Callees:
 *     ?GetGreRegKey@@YGJPAPAXKPBG@Z @ 0xDF7D8 (-GetGreRegKey@@YGJPAPAXKPBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __fastcall QueryFontReg(PCWSTR SourceString, _DWORD *a2, _DWORD *a3)
{
  NTSTATUS GreRegKey; // esi
  unsigned int v7; // [esp+0h] [ebp-54h]
  const unsigned __int16 *v8; // [esp+4h] [ebp-50h]
  ULONG ResultLength; // [esp+10h] [ebp-44h] BYREF
  HANDLE KeyHandle; // [esp+14h] [ebp-40h]
  _DWORD KeyInformation[13]; // [esp+18h] [ebp-3Ch] BYREF

  memset(KeyInformation, 0, 0x30u);
  KeyHandle = 0;
  ResultLength = 0;
  *a3 = 0;
  GreRegKey = GetGreRegKey(SourceString, v7, v8);
  if ( GreRegKey >= 0 )
  {
    GreRegKey = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( GreRegKey >= 0 )
    {
      *a3 = KeyInformation[8];
      *a2 = KeyInformation[0];
      a2[1] = KeyInformation[1];
    }
    ZwClose(KeyHandle);
  }
  return GreRegKey >= 0;
}
