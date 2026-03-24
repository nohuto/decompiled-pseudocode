/*
 * XREFs of CmSiExtendSection @ 0x140363D90
 * Callers:
 *     HvpViewMapExtendStorage @ 0x140724E8C (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x1403FC000 (ZwExtendSection.c)
 */

__int64 __fastcall CmSiExtendSection(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ZwExtendSection(a1, &v3);
}
