/*
 * XREFs of DwmAsyncNotifyDigitizerActiveContactsWrap @ 0x1C01EED20
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncNotifyDigitizerActiveContacts @ 0x1C0275CD8 (DwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall DwmAsyncNotifyDigitizerActiveContactsWrap(__int64 a1)
{
  void *v1; // rax

  v1 = (void *)ReferenceDwmApiPort(a1);
  return DwmAsyncNotifyDigitizerActiveContacts(v1);
}
