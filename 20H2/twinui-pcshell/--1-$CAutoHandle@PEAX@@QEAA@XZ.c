/*
 * XREFs of ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x180146DC0
 * Callers:
 *     _CImmersiveApp::_SetApplicationForegroundPriority_::_1_::dtor$0 @ 0x180101B16 (_CImmersiveApp--_SetApplicationForegroundPriority_--_1_--dtor$0.c)
 *     _CAppViewManager::_ProcessNextOperation_::_1_::dtor$2 @ 0x180103E97 (_CAppViewManager--_ProcessNextOperation_--_1_--dtor$2.c)
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$2 @ 0x180177652 (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<void *>::~CAutoHandle<void *>(void **a1)
{
  char *v1; // rdx
  int result; // eax

  v1 = (char *)*a1;
  *a1 = 0LL;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
