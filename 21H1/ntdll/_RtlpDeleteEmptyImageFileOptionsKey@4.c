/*
 * XREFs of _RtlpDeleteEmptyImageFileOptionsKey@4 @ 0x4B342483
 * Callers:
 *     _RtlSetImageMitigationPolicy@20 @ 0x4B3408F0 (_RtlSetImageMitigationPolicy@20.c)
 * Callees:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwDeleteKey@4 @ 0x4B2F36B0 (_ZwDeleteKey@4.c)
 *     _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529 (_RtlpIsEmptyImageFileOptionsKey@4.c)
 */

int __thiscall RtlpDeleteEmptyImageFileOptionsKey(unsigned __int16 *this)
{
  int v2; // esi
  int result; // eax
  char IsEmptyImageFileOptionsKey; // bl
  HANDLE KeyHandle; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  while ( 1 )
  {
    result = RtlpOpenImageFileOptionsKeyEx(this, 0x10009u, 0, &KeyHandle);
    if ( result < 0 )
      break;
    IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(KeyHandle);
    if ( IsEmptyImageFileOptionsKey )
      ZwDeleteKey(KeyHandle);
    NtClose(KeyHandle);
    if ( IsEmptyImageFileOptionsKey )
    {
      if ( (unsigned int)++v2 < 2 )
        continue;
    }
    return 0;
  }
  if ( result != -1073741772 )
    return result;
  return 0;
}
