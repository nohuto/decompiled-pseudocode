/*
 * XREFs of imp_WdfIoQueueCreate @ 0x1C0024AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C002256C (-InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0024C4C (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_DDDDd @ 0x1C0080E2C (WPP_IFR_SF_DDDDd.c)
 */

__int64 __fastcall imp_WdfIoQueueCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        WDFQUEUE__ **Queue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  unsigned int Size; // ecx
  unsigned __int8 DefaultQueue; // cl
  WDFQUEUE__ **v16; // r14
  FxPkgIo *m_PkgIo; // r15
  unsigned int v18; // edi
  FxIoQueue *v19; // rdi
  int v20; // esi
  unsigned int v21; // r8d
  unsigned __int16 v22; // r9
  const void *_a1; // rax
  FxIoQueue **ppQueue; // [rsp+20h] [rbp-58h]
  unsigned int _a2; // [rsp+30h] [rbp-48h]
  unsigned int v26; // [rsp+38h] [rbp-40h]
  unsigned int v27; // [rsp+40h] [rbp-38h]
  int v28; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxDevice *pDevice; // [rsp+80h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+90h] [rbp+18h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  pQueue = 0LL;
  m_Globals = pDevice->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, QueueAttributes, 6);
  if ( (int)result >= 0 )
  {
    Size = Config->Size;
    if ( ((Config->Size - 80) & 0xFFFFFFE7) != 0 || Size == 104 )
    {
      WPP_IFR_SF_DDDDd(m_Globals, v11, v12, v13, (const _GUID *)ppQueue, Size, _a2, v26, v27, v28);
      return 3221225476LL;
    }
    DefaultQueue = Config->DefaultQueue;
    v16 = Queue;
    if ( !DefaultQueue && !Queue )
    {
      v18 = -1073741582;
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueApi_cpp_Traceguids, -1073741582);
      return v18;
    }
    m_PkgIo = pDevice->m_PkgIo;
    if ( !DefaultQueue )
      goto LABEL_9;
    if ( pDevice->m_Legacy )
    {
      if ( (pDevice->m_DeviceObject.m_DeviceObject->Flags & 0x80u) != 0 )
        goto LABEL_9;
      v21 = 12;
      v22 = 12;
    }
    else
    {
      if ( pDevice->m_CurrentPnpState == WdfDevStatePnpInit )
      {
LABEL_9:
        v18 = FxPkgIo::CreateQueue(
                m_PkgIo,
                Config,
                QueueAttributes,
                *(FxDriver **)&DriverGlobals[-7].DriverName[8],
                &pQueue);
        if ( (v18 & 0x80000000) == 0 )
        {
          v19 = pQueue;
          if ( Config->DefaultQueue && (v20 = FxPkgIo::InitializeDefaultQueue(m_PkgIo, pDevice, pQueue), v20 < 0) )
          {
            WPP_IFR_SF_qq(m_Globals, 2u, 0xDu, 0xFu, WPP_FxIoQueueApi_cpp_Traceguids, m_PkgIo, Device);
            FxObject::ClearEvtCallbacks(v19);
            ((void (*)(void))v19->DeleteObject)();
            return (unsigned int)v20;
          }
          else
          {
            if ( m_Globals->FxVerboseOn )
            {
              _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v19);
              WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x10u, WPP_FxIoQueueApi_cpp_Traceguids, _a1);
            }
            if ( v16 )
              *v16 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(v19);
            return 0LL;
          }
        }
        v22 = 14;
        v21 = 13;
LABEL_24:
        WPP_IFR_SF_qL(m_Globals, 2u, v21, v22, WPP_FxIoQueueApi_cpp_Traceguids, Device, v18);
        return v18;
      }
      v22 = 13;
      v21 = 12;
    }
    v18 = -1073741436;
    goto LABEL_24;
  }
  return result;
}
