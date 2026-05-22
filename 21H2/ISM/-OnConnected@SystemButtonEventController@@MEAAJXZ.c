/*
 * XREFs of ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180102320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x1800BC008 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180102140 (--4-$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventController@@@Z @ 0x1801028AC (--4-$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventContr.c)
 */

__int64 __fastcall SystemButtonEventController::OnConnected(SystemButtonEventController *this)
{
  struct SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax
  struct SystemButtonEventControllerManager *v3; // rdi
  _QWORD *v4; // rdi
  __int64 (__fastcall ***v6)(_QWORD); // [rsp+38h] [rbp+10h] BYREF

  SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
  v3 = SystemButtonEventControllerManager;
  if ( *(_QWORD *)SystemButtonEventControllerManager )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD))this;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v6);
    v4 = (_QWORD *)((char *)v3 + 8);
    Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=((__int64 *)(*v4 + 48LL), &v6);
    Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=((__int64 *)this + 7, v4);
    if ( this )
      (*(void (__fastcall **)(SystemButtonEventController *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(SystemButtonEventControllerManager, this);
    v4 = (_QWORD *)((char *)v3 + 8);
  }
  Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(v4, this);
  return 0LL;
}
