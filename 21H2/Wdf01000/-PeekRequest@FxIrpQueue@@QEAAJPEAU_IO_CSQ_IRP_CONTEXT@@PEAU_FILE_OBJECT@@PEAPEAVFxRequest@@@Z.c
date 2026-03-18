/*
 * XREFs of ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x1C00057FC
 * Callers:
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C00056A4 (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C00687A0 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

__int64 __fastcall FxIrpQueue::PeekRequest(
        FxIrpQueue *this,
        _IO_CSQ_IRP_CONTEXT *TagContext,
        _FILE_OBJECT *FileObject,
        FxRequest **ppOutRequest)
{
  FxIrpQueue *Flink; // r11
  bool v6; // r10
  __int64 result; // rax
  _IO_CSQ_IRP_CONTEXT *m_LockObject; // rbx
  int v9; // r8d
  FxRequest *v10; // rbx

  Flink = (FxIrpQueue *)this->m_Queue.Flink;
  v6 = TagContext == 0LL;
  while ( Flink != this )
  {
    if ( !BYTE4(Flink[-3].m_LockObject) )
    {
      m_LockObject = (_IO_CSQ_IRP_CONTEXT *)Flink[-1].m_LockObject;
      if ( v6 )
      {
        if ( !FileObject )
        {
          v9 = 447;
LABEL_9:
          v10 = (FxRequest *)&m_LockObject[-5];
          FxObject::AddRef(v10, 0LL, v9, "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp");
          result = 0LL;
          *ppOutRequest = v10;
          return result;
        }
        if ( *(_FILE_OBJECT **)&Flink->m_LockObject->m_SpinLock.m_DbgFlagIsInitialized == FileObject )
        {
          v9 = 432;
          goto LABEL_9;
        }
      }
      else
      {
        v6 = m_LockObject == TagContext;
      }
    }
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
  }
  if ( !TagContext )
    return 2147483674LL;
  result = 3221226021LL;
  if ( v6 )
    return 2147483674LL;
  return result;
}
