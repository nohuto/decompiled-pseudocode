/*
 * XREFs of ZwProtectVirtualMemory @ 0x1403F3FC0
 * Callers:
 *     CmSiProtectViewOfSection @ 0x1402D5750 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x14051F284 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CE5D4 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1406E5004 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
