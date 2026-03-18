/*
 * XREFs of ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C0023CF8
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019494C (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C0269AD4 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02BEF3C (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( v1 == *a1 )
    return 0LL;
  else
    return (v1 - 8) & -(__int64)(v1 != 0);
}
