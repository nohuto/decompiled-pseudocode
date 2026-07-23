/*
 * XREFs of AppModelFreeUnicodeString @ 0x1402486FC
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1406170E8 (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x14095F184 (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
