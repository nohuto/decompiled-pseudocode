/*
 * XREFs of ?IsEndOfCapture@MPCHandProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18007E240
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B454 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B79C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCHandProcessor::IsEndOfCapture(signed __int64 this, struct InputInfo *a2)
{
  char v3; // di
  __int64 *Instance; // rbx
  _QWORD *v5; // rax
  const char *v6; // r9
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( ((*(_DWORD *)a2 & 0x662600) == 0 || *((_DWORD *)a2 + 16) != 3)
    && ((*(_DWORD *)a2 & 0x662600) == 0 || *((_DWORD *)a2 + 16) != 4) )
  {
    return 0;
  }
  v3 = 1;
  if ( *(_BYTE *)(this + 4592) && !*((_BYTE *)a2 + 152) && *((_BYTE *)a2 + 972) )
  {
    *(_DWORD *)(this + 9360) = 2;
    Instance = (__int64 *)MPCGestureHandlerManager::GetInstance(0LL);
    v5 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
           &v8,
           this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 24) >> 64));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, this + 8704, v5, v6);
  }
  return v3;
}
