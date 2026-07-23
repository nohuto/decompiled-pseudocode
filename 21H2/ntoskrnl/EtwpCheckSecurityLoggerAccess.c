/*
 * XREFs of EtwpCheckSecurityLoggerAccess @ 0x140622484
 * Callers:
 *     EtwpQueryTrace @ 0x1406B60F8 (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x1406BA4F4 (EtwpCheckNotificationAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCheckSecurityLoggerAccess(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rcx

  v2 = 0;
  LOBYTE(v1) = *(_BYTE *)(a1 + 2170) - 49;
  if ( (unsigned __int8)v1 > 0x31u )
    return (unsigned int)-1073741790;
  v3 = 0x3000100000001LL;
  if ( !_bittest64(&v3, v1) )
    return (unsigned int)-1073741790;
  return v2;
}
