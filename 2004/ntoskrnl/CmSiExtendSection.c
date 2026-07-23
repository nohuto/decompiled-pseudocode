/*
 * XREFs of CmSiExtendSection @ 0x140270058
 * Callers:
 *     HvpViewMapExtendStorage @ 0x1406375BC (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1403F5200 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewSectionSize; // [rsp+38h] [rbp+10h] BYREF

  NewSectionSize = a2;
  return ZwExtendSection(a1, &NewSectionSize);
}
