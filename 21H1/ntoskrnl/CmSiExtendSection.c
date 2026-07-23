/*
 * XREFs of CmSiExtendSection @ 0x140321EAC
 * Callers:
 *     HvpViewMapExtendStorage @ 0x14068518C (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1403F3F70 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewSectionSize; // [rsp+38h] [rbp+10h] BYREF

  NewSectionSize = a2;
  return ZwExtendSection(a1, &NewSectionSize);
}
