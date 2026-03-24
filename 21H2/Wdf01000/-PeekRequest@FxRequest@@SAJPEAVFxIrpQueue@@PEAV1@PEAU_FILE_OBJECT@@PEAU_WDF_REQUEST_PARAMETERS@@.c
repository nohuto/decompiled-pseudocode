/*
 * XREFs of ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C004EED0
 * Callers:
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014E1C (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C0019A40 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 */

__int64 __fastcall FxRequest::PeekRequest(
        FxIrpQueue *IrpQueue,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **ppOutRequest)
{
  FxIrpQueue *Flink; // r10
  unsigned __int64 v7; // r11
  bool v8; // dl
  unsigned int v9; // ebx
  FxNonPagedObject *m_LockObject; // rdi
  int v11; // r8d
  FxRequest *v13; // rdi
  unsigned __int8 v14; // r8

  Flink = (FxIrpQueue *)IrpQueue->m_Queue.Flink;
  v7 = (unsigned __int64)&TagRequest->120 & -(__int64)(TagRequest != 0LL);
  v8 = v7 == 0;
  v9 = 0;
  while ( 1 )
  {
    if ( Flink == IrpQueue )
    {
      if ( !v7 )
        return (unsigned int)-2147483622;
      v9 = -1073741275;
      if ( v8 )
        return (unsigned int)-2147483622;
      return v9;
    }
    if ( BYTE4(Flink[-3].m_LockObject) )
      goto LABEL_8;
    m_LockObject = Flink[-1].m_LockObject;
    if ( !v8 )
    {
      v8 = m_LockObject == (FxNonPagedObject *)v7;
      goto LABEL_8;
    }
    if ( !FileObject )
      break;
    if ( *(_FILE_OBJECT **)&Flink->m_LockObject->m_SpinLock.m_DbgFlagIsInitialized == FileObject )
    {
      v11 = 432;
      goto LABEL_15;
    }
LABEL_8:
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
  }
  v11 = 447;
LABEL_15:
  v13 = (FxRequest *)&m_LockObject[-1];
  FxObject::AddRef(v13, 0LL, v11, "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp");
  *ppOutRequest = v13;
  if ( Parameters )
    return (unsigned int)FxRequest::GetParameters(v13, Parameters, v14);
  return v9;
}
