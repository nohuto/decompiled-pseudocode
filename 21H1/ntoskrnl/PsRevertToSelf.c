/*
 * XREFs of PsRevertToSelf @ 0x14067D040
 * Callers:
 *     EtwpCreateLogFile @ 0x14067BDA8 (EtwpCreateLogFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x140609080 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
