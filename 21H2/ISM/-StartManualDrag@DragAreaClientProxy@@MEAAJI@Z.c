/*
 * XREFs of ?StartManualDrag@DragAreaClientProxy@@MEAAJI@Z @ 0x1800F5AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800163C8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoDragAreaClientProxy@@@Z @ 0x1800FB858 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoDragAreaClientProxy@@@Z.c)
 */

__int64 __fastcall DragAreaClientProxy::StartManualDrag(DragAreaClientProxy *this, unsigned int a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v6; // rax

  if ( *((_BYTE *)this + 72) )
    return 2276591628LL;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
  *((_BYTE *)this + 72) = 1;
  DragNDropProcessor::StartManualDrag(*(DragNDropProcessor **)(v6 + 56), a2, this);
  return 0LL;
}
