/*
 * XREFs of AppModelFreeUnicodeString @ 0x14022020C
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x14069954C (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x140A0AC70 (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

__int64 __fastcall AppModelFreeUnicodeString(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = ExFreeHeapPool(v2);
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}
