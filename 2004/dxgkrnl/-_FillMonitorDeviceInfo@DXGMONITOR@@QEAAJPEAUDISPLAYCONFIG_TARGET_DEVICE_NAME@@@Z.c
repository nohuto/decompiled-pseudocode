/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C012C410
 * Callers:
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C012A304 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C015F8A8 (MonitorFillMonitorDeviceInfo.c)
 * Callees:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0009D34 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0009EB4 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C005F0F4 (-DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v18; // rax
  int UserFriendlyName; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int8 v23; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v18);
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
    v13 = v10;
    if ( v10 >= 0 )
    {
      v15 = 1;
    }
    else
    {
      v14 = WdLogNewEntry5_WdDmmEvent(v12, v11);
      *(_QWORD *)(v14 + 24) = *((_QWORD *)this + 18) + 24LL;
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdDmmEvent(v14);
      v15 = 0;
    }
    *((_DWORD *)a2 + 5) = v15 | *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
    if ( (int)EDIDV1_FillProductIdManufacturerName(
                (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                (unsigned __int16 *)a2 + 14,
                (unsigned __int16 *)a2 + 15) >= 0 )
      v2 = 4;
    v16 = v2 | *((_DWORD *)a2 + 5) & 0xFFFFFFFB;
  }
  else
  {
    v23 = 0;
    UserFriendlyName = DisplayID_GetUserFriendlyName((DXGMONITOR *)((char *)this + 168), v9, v6, &v23);
    v8 = UserFriendlyName;
    if ( UserFriendlyName < 0 )
    {
      v22 = WdLogNewEntry5_WdDmmEvent(v21, v20);
      *(_QWORD *)(v22 + 24) = *v5;
      *(_QWORD *)(v22 + 32) = v8;
      WdLogEvent5_WdDmmEvent(v22);
    }
    *((_DWORD *)a2 + 5) &= ~4u;
    v16 = *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
    *((_DWORD *)a2 + 7) = 0;
  }
  *((_DWORD *)a2 + 5) = v16;
  return (unsigned int)v8;
}
