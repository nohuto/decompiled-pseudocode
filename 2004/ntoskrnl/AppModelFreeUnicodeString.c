/*
 * XREFs of AppModelFreeUnicodeString @ 0x140358364
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x140706908 (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x14095B964 (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
