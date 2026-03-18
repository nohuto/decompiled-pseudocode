/*
 * XREFs of ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C025EDF8
 * Callers:
 *     ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DC00 (-VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C025F758 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 * Callees:
 *     DpiGetPnpRegistryKeyName @ 0x1C0161B30 (DpiGetPnpRegistryKeyName.c)
 *     ?EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C025EBD8 (-EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall CDriverStoreCopy::InitializeSystem32Links(CDriverStoreCopy *this, struct DXGADAPTER *a2)
{
  int PnpRegistryKeyName; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _UNICODE_STRING *v22; // [rsp+38h] [rbp+10h] BYREF

  v22 = 0LL;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(*((_QWORD *)a2 + 27), 3LL, (__int64 *)&v22);
  v8 = PnpRegistryKeyName;
  if ( PnpRegistryKeyName >= 0 )
  {
    v10 = CDriverStoreCopy::EnumSingleDriverKey(this, v22);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v14 = DpiGetPnpRegistryKeyName(*((_QWORD *)a2 + 27), 2LL, (__int64 *)&v22);
      v8 = v14;
      if ( v14 >= 0 )
      {
        v18 = CDriverStoreCopy::EnumSingleDriverKey(this, v22);
        v8 = v18;
        if ( v18 >= 0 )
          return;
        v9 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v9 + 32) = 1139LL;
      }
      else
      {
        v9 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v9 + 32) = 1133LL;
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v9 + 32) = 1120LL;
  }
  *(_QWORD *)(v9 + 24) = v8;
  WdLogEvent5_WdWarning(v9);
}
