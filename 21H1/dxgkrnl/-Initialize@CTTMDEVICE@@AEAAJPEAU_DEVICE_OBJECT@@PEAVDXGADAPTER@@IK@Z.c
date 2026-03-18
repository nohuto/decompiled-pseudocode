/*
 * XREFs of ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C016D260
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C016D088 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0021D58 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00E7C30 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00EFD00 (MonitorGetMonitorHandle.c)
 *     MonitorGetCCDMonitorID @ 0x1C00F039C (MonitorGetCCDMonitorID.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C013853C (MonitorGetMonitorDeviceInterfaceName.c)
 */

__int64 __fastcall CTTMDEVICE::Initialize(
        CTTMDEVICE *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  unsigned __int16 *v6; // r14
  __int64 v9; // rbp
  bool v10; // zf
  __int64 CCDMonitorID; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int MonitorHandle; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct HDXGMONITOR__ *v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v6 = (unsigned __int16 *)((char *)this + 88);
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 9) = a2;
  v9 = a4;
  *((_DWORD *)this + 20) = a4;
  *((_DWORD *)this + 21) = v5;
  v23 = 0LL;
  v24 = 0LL;
  memset((char *)this + 88, 0, 0x208uLL);
  v10 = MONITOR_MGR::_UsingCCDNameForTTM == 0;
  *((_DWORD *)this + 152) = 34078720;
  *((_QWORD *)this + 77) = v6;
  if ( v10 )
    LODWORD(CCDMonitorID) = MonitorGetMonitorDeviceInterfaceName((__int64)a3, (unsigned int)v9, 260LL, (__int64)v6);
  else
    LODWORD(CCDMonitorID) = -1073741632;
  if ( (_DWORD)CCDMonitorID == -1073741632 )
  {
    MonitorHandle = MonitorGetMonitorHandle((__int64)a3, (unsigned int)v9, 0LL, this, &v23);
    CCDMonitorID = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
      goto LABEL_12;
    }
    CCDMonitorID = (int)MonitorGetCCDMonitorID(v23, 0x103u, v6);
    MonitorReleaseMonitorHandle((__int64)a3, (__int64)v23, this, v20);
    if ( (int)CCDMonitorID < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v19[6] = 0LL;
      goto LABEL_12;
    }
LABEL_5:
    v12 = RtlStringCbLengthW(*((const unsigned __int16 **)this + 77), *((unsigned __int16 *)this + 305), &v24);
    CCDMonitorID = v12;
    if ( v12 >= 0 )
    {
      *((_WORD *)this + 304) = v24;
      return (unsigned int)CCDMonitorID;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v19[6] = 1LL;
LABEL_12:
    v19[5] = CCDMonitorID;
    v19[4] = v9;
    v19[3] = a3;
    WdLogEvent5_WdError(v19);
    return (unsigned int)CCDMonitorID;
  }
  if ( (int)CCDMonitorID >= 0 )
    goto LABEL_5;
  return (unsigned int)CCDMonitorID;
}
