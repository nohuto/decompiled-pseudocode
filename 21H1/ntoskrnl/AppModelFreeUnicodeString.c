/*
 * XREFs of AppModelFreeUnicodeString @ 0x14031A8B4
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1406E2F48 (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x14095A5C4 (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall AppModelFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D707041u);
    *(_OWORD *)a1 = 0LL;
  }
}
