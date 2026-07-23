/*
 * XREFs of CmSiExtendSection @ 0x140203AC0
 * Callers:
 *     HvpViewMapExtendStorage @ 0x1405DA1BC (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1403F9DD0 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewSectionSize; // [rsp+38h] [rbp+10h] BYREF

  NewSectionSize = a2;
  return ZwExtendSection(a1, &NewSectionSize);
}
