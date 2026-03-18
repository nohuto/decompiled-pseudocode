/*
 * XREFs of _wcsupr @ 0x1403CDFB0
 * Callers:
 *     PfFileInfoNotify @ 0x1402B5440 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x1407A9E50 (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14096DAB0 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14096EAAC (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsupr(wchar_t *String)
{
  wchar_t v1; // dx
  wchar_t *v2; // r8

  v1 = *String;
  v2 = String;
  while ( v1 )
  {
    if ( (unsigned __int16)(v1 - 97) <= 0x19u )
      *v2 = v1 - 32;
    v1 = *++v2;
  }
  return String;
}
