/*
 * XREFs of ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C016AE30
 * Callers:
 *     MonitorGetContainerIDFromDescriptor @ 0x1C016AD58 (MonitorGetContainerIDFromDescriptor.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x1C0021830 (-EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z.c)
 *     ?DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z @ 0x1C005DD10 (-DisplayID_GetContainerID@@YAJPEBUDisplayIDObj@@PEAU_GUID@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C015716C (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorContainerID(DXGMONITOR *this, struct _GUID *a2)
{
  const struct DisplayIDObj *v4; // rcx
  int v5; // ebx
  unsigned int v6; // ebx
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int ContainerID; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // [rsp+30h] [rbp+8h] BYREF

  v4 = (DXGMONITOR *)((char *)this + 168);
  if ( *(_QWORD *)v4 && (int)DisplayID_GetContainerID(v4, a2) >= 0 )
    return 0LL;
  v5 = *((_DWORD *)this + 32);
  if ( !v5 )
    return 3221226021LL;
  if ( !*((_QWORD *)this + 18) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v4, a2);
    WdLogEvent5_WdAssertion(v16);
    v5 = *((_DWORD *)this + 32);
  }
  v19 = 0;
  v6 = v5 << 7;
  v7 = (unsigned __int8 *)operator new[](v6, 0x4D677844u, PagedPool);
  v11 = v7;
  if ( v7 )
  {
    DXGMONITOR::_GetContiguousEDID(this, v6, &v19, v7);
    if ( v6 != v19 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v13, v12);
      WdLogEvent5_WdAssertion(v18);
    }
    ContainerID = EDID_V1_GetContainerID(v19, v11, a2);
    operator delete[](v11);
    return ContainerID;
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    WdLogEvent5_WdWarning(v17);
    return 3221225495LL;
  }
}
