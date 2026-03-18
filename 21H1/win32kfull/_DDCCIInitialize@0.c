/*
 * XREFs of _DDCCIInitialize@0 @ 0xEBDD6
 * Callers:
 *     _DDCCIInitializeWrap@0 @ 0xEBDD0 (_DDCCIInitializeWrap@0.c)
 * Callees:
 *     ??0CMonitorAPI@@QAE@PAJ@Z @ 0xEBE20 (--0CMonitorAPI@@QAE@PAJ@Z.c)
 */

int __stdcall DDCCIInitialize()
{
  CMonitorAPI *v0; // esi
  CMonitorAPI *PoolWithTag; // eax
  int result; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  v0 = 0;
  v3 = 0;
  PoolWithTag = (CMonitorAPI *)ExAllocatePoolWithTag(PagedPool, 0x18u, 0x63326947u);
  if ( PoolWithTag )
    v0 = CMonitorAPI::CMonitorAPI(PoolWithTag, &v3);
  P = v0;
  if ( !v0 )
    return -1073741801;
  result = v3;
  if ( v3 >= 0 )
    return 0;
  return result;
}
