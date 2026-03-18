/*
 * XREFs of EtwpInitializeLoggerSecurityDescriptor @ 0x140714E54
 * Callers:
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x1405F6110 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall EtwpInitializeLoggerSecurityDescriptor(__int64 a1, char *a2)
{
  int v3; // ecx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v5, 0x10u);
  if ( v3 >= 0 )
  {
    if ( v5 )
      *(_QWORD *)(a1 + 800) = v5 + 15;
    else
      *(_QWORD *)(a1 + 800) = 0LL;
  }
  return (unsigned int)v3;
}
