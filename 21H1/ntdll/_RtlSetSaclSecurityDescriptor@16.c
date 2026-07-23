/*
 * XREFs of _RtlSetSaclSecurityDescriptor@16 @ 0x4B2E7F40
 * Callers:
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN SaclPresent,
        PACL Sacl,
        BOOLEAN SaclDefaulted)
{
  __int16 v4; // cx
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 >= 0 )
  {
    if ( SaclPresent )
    {
      *((_DWORD *)SecurityDescriptor + 3) = 0;
      v5 = v4 | 0x10;
      if ( Sacl )
        *((_DWORD *)SecurityDescriptor + 3) = Sacl;
      v6 = v5 & 0xFFDF;
      *((_WORD *)SecurityDescriptor + 1) = v6;
      if ( !SaclDefaulted )
        return 0;
      v8 = v6 | 0x20;
    }
    else
    {
      v8 = v4 & 0xFFEF;
    }
    *((_WORD *)SecurityDescriptor + 1) = v8;
    return 0;
  }
  return -1073741703;
}
