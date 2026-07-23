/*
 * XREFs of CmSiExtendSection @ 0x140250A9C
 * Callers:
 *     HvpViewMapExtendStorage @ 0x1406FCEC4 (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1403FC1E0 (ZwExtendSection.c)
 */

NTSTATUS __fastcall CmSiExtendSection(void *a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER NewSectionSize; // [rsp+38h] [rbp+10h] BYREF

  NewSectionSize = a2;
  return ZwExtendSection(a1, &NewSectionSize);
}
