/*
 * XREFs of AppModelFreeUnicodeString @ 0x140328A7C
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1406D9488 (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x140961724 (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
