/*
 * XREFs of ?GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x1C02190F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x1C002A298 (-EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01D1EF0 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetContainerId(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _GUID *a2,
        __int64 a3,
        __int64 a4)
{
  struct _GUID *v5; // r8
  unsigned __int8 *v6; // rbx
  unsigned int ContainerID; // edi
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int8 *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v10, &v9, a4);
  v5 = a2;
  v6 = v10;
  ContainerID = EDID_V1_GetContainerID(v9, v10, v5);
  if ( v6 )
    operator delete[](v6);
  return ContainerID;
}
