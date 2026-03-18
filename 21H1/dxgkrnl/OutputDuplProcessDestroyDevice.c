/*
 * XREFs of OutputDuplProcessDestroyDevice @ 0x1C00DD34C
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DC360 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02524A0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00DD38C (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C011C210 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C014A1BC (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall OutputDuplProcessDestroyDevice(__int64 a1, void *a2)
{
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax

  if ( a1 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *(ADAPTER_DISPLAY **)(a1 + 2672),
      lambda_55055bd30a6c367c9479cf67f85e47ac_::_lambda_invoker_cdecl_,
      a2);
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessDestroyDevice(RemoteOutputDuplMgr, (struct DXGDEVICE *)a2);
}
