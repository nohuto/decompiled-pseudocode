/*
 * XREFs of ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00DD38C
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DBE6C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00DD34C (OutputDuplProcessDestroyDevice.c)
 *     OutputDuplProcessTerminate @ 0x1C012C3C0 (OutputDuplProcessTerminate.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02107CC (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00DD408 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
        ADAPTER_DISPLAY *this,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 13);
  if ( !v5 || (result = a2(v5, a3), (int)result >= 0) )
  {
    v9[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 316LL);
    v9[1] = (__int64)a2;
    v9[2] = a3;
    Global = DXGGLOBAL::GetGlobal(v9[0], (__int64)a2);
    return DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
             Global,
             lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_,
             v9);
  }
  return result;
}
