/*
 * XREFs of ?IsEndOfCapture@MPCSixDofProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18018D080
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006ACCC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B044 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B38C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCSixDofProcessor::IsEndOfCapture(__int64 this, struct InputInfo *a2)
{
  char v3; // di
  __int64 *Instance; // rbx
  _QWORD *v5; // rax
  const char *v6; // r9
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)a2 + 728) & 0x3F) != 0 )
    return 0;
  v3 = 1;
  if ( *(_BYTE *)(this + 4592) && !*((_BYTE *)a2 + 152) )
  {
    *(_DWORD *)(this + 6208) = 2;
    Instance = (__int64 *)MPCGestureHandlerManager::GetInstance(this);
    v5 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
           &v8,
           this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 24) >> 64));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, this + 5552, v5, v6);
  }
  return v3;
}
