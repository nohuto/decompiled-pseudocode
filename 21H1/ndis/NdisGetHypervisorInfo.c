/*
 * XREFs of NdisGetHypervisorInfo @ 0x1C0020FA0
 * Callers:
 *     ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1C0021B0C (-ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisGetHypervisorInfo(PNDIS_HYPERVISOR_INFO HypervisorInfo)
{
  NDIS_STATUS v1; // r9d

  v1 = 0;
  if ( HypervisorInfo->Header.Size < 0xCu )
    return -1073676266;
  *(_QWORD *)&HypervisorInfo->Header.Type = 786816LL;
  HypervisorInfo->PartitionType = NdisHypervisorPartitionTypeUnknown;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    HypervisorInfo->Flags = 1;
    _RAX = 1073741825LL;
    __asm { cpuid }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      HypervisorInfo->PartitionType = 2 - ((__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0);
    }
  }
  return v1;
}
