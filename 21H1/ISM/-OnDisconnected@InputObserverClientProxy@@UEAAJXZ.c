/*
 * XREFs of ?OnDisconnected@InputObserverClientProxy@@UEAAJXZ @ 0x1800F3E70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3E3C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterObserverClientOfType@CInputObserverManager@@UEAAJPEAVBamoInputObserverManagerStub@@W4InputObserverType@InputObservation@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800F4760 (-UnregisterObserverClientOfType@CInputObserverManager@@UEAAJPEAVBamoInputObserverManagerStub@@W4.c)
 */

__int64 __fastcall InputObserverClientProxy::OnDisconnected(InputObserverClientProxy *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 48);
  CInputObserverManager::UnregisterObserverClientOfType(*((_QWORD *)this + 6), 0LL, *((unsigned int *)this + 14), this);
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(v1);
  return 0LL;
}
