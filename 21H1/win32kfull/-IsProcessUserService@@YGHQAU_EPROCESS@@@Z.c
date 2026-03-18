/*
 * XREFs of ?IsProcessUserService@@YGHQAU_EPROCESS@@@Z @ 0xCFB44
 * Callers:
 *     _xxxQueryInformationThread@16 @ 0xCF7F4 (_xxxQueryInformationThread@16.c)
 * Callees:
 *     <none>
 */

int __thiscall IsProcessUserService(struct _KPROCESS *this)
{
  PACCESS_TOKEN v2; // edi
  int v3; // esi
  struct _UNICODE_STRING DestinationString; // [esp+8h] [ebp-8h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeStringEx(&DestinationString, L"WIN://SCMUserService");
  v2 = PsReferencePrimaryToken(this);
  v3 = (unsigned __int8)SeSecurityAttributePresent(v2, &DestinationString);
  ObfDereferenceObject(v2);
  return v3;
}
