/*
 * XREFs of EtwpInitializeLoggerSecurityDescriptor @ 0x1406EF8B8
 * Callers:
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     EtwpFixBootLoggers @ 0x140854CB8 (EtwpFixBootLoggers.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall EtwpInitializeLoggerSecurityDescriptor(__int64 a1, void *a2)
{
  int v3; // ecx

  v3 = ObLogSecurityDescriptor(a2);
  if ( v3 >= 0 )
    *(_QWORD *)(a1 + 784) = 0LL;
  return (unsigned int)v3;
}
