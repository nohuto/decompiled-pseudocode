/*
 * XREFs of ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C00E4928
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00E3CEC (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00E4E68 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z @ 0x1C004D21C (--_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllTrackedWorkloads(DXGDEVICE *this)
{
  DXGTRACKEDWORKLOAD **v2; // rbx
  DXGTRACKEDWORKLOAD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 838LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v2 = (DXGTRACKEDWORKLOAD **)((char *)this + 528);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (DXGTRACKEDWORKLOAD *)v2 )
      break;
    if ( v3 )
      DXGTRACKEDWORKLOAD::`scalar deleting destructor'(v3);
  }
}
