/*
 * XREFs of _DwmAsyncNotifyDigitizerActiveContactsWrap@8 @ 0x1590B2
 * Callers:
 *     <none>
 * Callees:
 *     _DwmAsyncNotifyDigitizerActiveContacts@12 @ 0x1D23E5 (_DwmAsyncNotifyDigitizerActiveContacts@12.c)
 */

int __stdcall DwmAsyncNotifyDigitizerActiveContactsWrap(int a1, int a2)
{
  void *v2; // eax

  v2 = (void *)ReferenceDwmApiPort();
  return DwmAsyncNotifyDigitizerActiveContacts(v2, a2);
}
