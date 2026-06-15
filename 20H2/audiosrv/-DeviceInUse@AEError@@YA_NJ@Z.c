/*
 * XREFs of ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18011AAFC
 * Callers:
 *     _lambda_f36e01949351335f5e9acafaa1161a48_::operator() @ 0x180119A5C (_lambda_f36e01949351335f5e9acafaa1161a48_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011F3F4 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AEError::DeviceInUse(AEError *this)
{
  return (_DWORD)this == -2005139389 || (int)this > -2005139365 && (int)this <= -2005139360;
}
