/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0137474
 * Callers:
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C00ECF40 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C0137150 (MonitorFillMonitorDeviceInfo.c)
 * Callees:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C00122F0 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0012470 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C005E074 (-DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(DXGMONITOR *this, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  int v2; // ebx
  _QWORD *v5; // r14
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int16 *v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v17; // rax
  int UserFriendlyName; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int8 v21; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v17);
  }
  v5 = (_QWORD *)((char *)this + 168);
  if ( !*((_QWORD *)this + 18) && !*v5 )
    return 3223126017LL;
  memset((char *)a2 + 36, 0, 0x80uLL);
  v7 = *((_QWORD *)this + 18);
  LODWORD(v8) = 0;
  v9 = (unsigned __int16 *)((char *)a2 + 36);
  if ( v7 )
  {
    v10 = EDIDV1_ObtainDisplayConfigFriendlyName((unsigned __int8 *)(v7 + 24), v9);
    v12 = v10;
    if ( v10 >= 0 )
    {
      v14 = 1;
    }
    else
    {
      v13 = WdLogNewEntry5_WdDmmEvent(v11);
      *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 18) + 24LL;
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdDmmEvent(v13);
      v14 = 0;
    }
    *((_DWORD *)a2 + 5) = v14 | *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
    if ( (int)EDIDV1_FillProductIdManufacturerName(
                (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                (unsigned __int16 *)a2 + 14,
                (unsigned __int16 *)a2 + 15) >= 0 )
      v2 = 4;
    v15 = v2 | *((_DWORD *)a2 + 5) & 0xFFFFFFFB;
  }
  else
  {
    v21 = 0;
    UserFriendlyName = DisplayID_GetUserFriendlyName((DXGMONITOR *)((char *)this + 168), v9, v6, &v21);
    v8 = UserFriendlyName;
    if ( UserFriendlyName < 0 )
    {
      v20 = WdLogNewEntry5_WdDmmEvent(v19);
      *(_QWORD *)(v20 + 24) = *v5;
      *(_QWORD *)(v20 + 32) = v8;
      WdLogEvent5_WdDmmEvent(v20);
    }
    *((_DWORD *)a2 + 5) &= ~4u;
    v15 = *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
    *((_DWORD *)a2 + 7) = 0;
  }
  *((_DWORD *)a2 + 5) = v15;
  return (unsigned int)v8;
}
