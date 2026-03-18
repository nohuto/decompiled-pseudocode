/*
 * XREFs of PsRevertToSelf @ 0x1406CABA0
 * Callers:
 *     EtwpCreateLogFile @ 0x1406C8D98 (EtwpCreateLogFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x140681160 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
