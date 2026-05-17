/*
 * XREFs of _LdrpResValidateFileHandle@4 @ 0x4B343B84
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 * Callees:
 *     _ZwQueryInformationFile@20 @ 0x4B2F2A70 (_ZwQueryInformationFile@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __thiscall LdrpResValidateFileHandle(void *this)
{
  _BYTE v2[8]; // [esp+0h] [ebp-34h] BYREF
  _BYTE v3[40]; // [esp+8h] [ebp-2Ch] BYREF

  if ( !this || this == (void *)-1 )
    return -1073741816;
  else
    return ZwQueryInformationFile((int)this, (int)v2, (int)v3, 40, 4);
}
