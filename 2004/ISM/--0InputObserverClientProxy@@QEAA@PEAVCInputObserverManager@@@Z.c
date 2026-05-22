/*
 * XREFs of ??0InputObserverClientProxy@@QEAA@PEAVCInputObserverManager@@@Z @ 0x1800F3844
 * Callers:
 *     ?CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverClientProxy@@@Z @ 0x1800F38E8 (-CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverCli.c)
 * Callees:
 *     <none>
 */

InputObserverClientProxy *__fastcall InputObserverClientProxy::InputObserverClientProxy(
        InputObserverClientProxy *this,
        struct CInputObserverManager *a2)
{
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &InputObserverClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &InputObserverClientProxy::`vftable'{for `IInputObserverClientProxy'};
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  *((_DWORD *)this + 14) = 1;
  return this;
}
