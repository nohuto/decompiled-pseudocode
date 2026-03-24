/*
 * XREFs of ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N1@Z @ 0x1C018E16C
 * Callers:
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C018E098 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C0022874 (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z @ 0x1C005FA20 (-EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x1C005FAD4 (-EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C016BFDC (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageFromEDIDForMsftVSDB(
        DXGMONITOR *this,
        enum DISPLAY_USE_CASE *a2,
        bool *a3,
        bool *a4)
{
  int v8; // ebx
  unsigned int v9; // ebx
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int8 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // esi
  int DisplayPrimaryUse; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 18) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  v8 = *((_DWORD *)this + 32);
  v23 = 0;
  v9 = v8 << 7;
  v10 = (unsigned __int8 *)operator new[](v9, 0x4D677844u, PagedPool);
  v14 = v10;
  if ( v10 )
  {
    DXGMONITOR::_GetContiguousEDID(this, v9, &v23, v10);
    v17 = v23;
    if ( v9 != v23 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v21);
    }
    DisplayPrimaryUse = EDID_V1_GetDisplayPrimaryUse(v17, v14, a2);
    if ( DisplayPrimaryUse >= 0 )
    {
      DisplayPrimaryUse = EDID_V1_GetDisplayIsMsftOnlyPrimaryUse(v17, v14, a3);
      if ( DisplayPrimaryUse >= 0 )
        DisplayPrimaryUse = EDID_V1_GetDisplayIsForDesktopUsage(v17, v14, a4);
    }
    operator delete[](v14);
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    WdLogEvent5_WdWarning(v22);
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DisplayPrimaryUse;
}
