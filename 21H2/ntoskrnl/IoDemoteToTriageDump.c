/*
 * XREFs of IoDemoteToTriageDump @ 0x140551F2C
 * Callers:
 *     KiCaptureDumpPreRecovery @ 0x140579060 (KiCaptureDumpPreRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

bool IoDemoteToTriageDump()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !CrashdmpDumpBlock || !qword_140C54E00 )
    return 0;
  qword_140C54E00(6LL, &v1);
  return v1 >= 0;
}
