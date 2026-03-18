/*
 * XREFs of ZwProtectVirtualMemory @ 0x1403F8B70
 * Callers:
 *     CmSiProtectViewOfSection @ 0x140341D98 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x140522C54 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D4A78 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1406BBEC4 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
