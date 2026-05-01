/*
 * XREFs of ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180031060
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180031088 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 */

int __fastcall ExecutionModel::ResourceManager::GetPSMInfo(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        struct _RM_PSM_HOST_INFO *a3)
{
  int ProcessPsmInfo; // eax

  ProcessPsmInfo = RmpSystemGetProcessPsmInfo(a2, a3);
  if ( ProcessPsmInfo < 0 )
    return ProcessPsmInfo | 0x10000000;
  else
    return 0;
}
