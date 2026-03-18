/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C01640E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0164528 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0379E60 (-VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS)
{
  __int64 ProcessDxgProcess; // rax
  unsigned int *v3; // rbx
  struct DXGGLOBAL *Global; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v5);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v3 = (unsigned int *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x800) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGFASTMUTEX *const)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
    KeStackAttachProcess(PROCESS, &ApcState);
    if ( v3[126] )
    {
      Global = DXGGLOBAL_GetGlobal();
      DXG_GUEST_GLOBAL_VMBUS::VmBusSendNotifyProcessFreeze(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 218), v3[126]);
    }
    DXGPROCESS::NotifyProcessFreeze((DXGPROCESS *)v3);
    KeUnstackDetachProcess(&ApcState);
    if ( v6[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}
