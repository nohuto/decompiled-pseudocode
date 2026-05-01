/*
 * XREFs of ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x1800375A0
 * Callers:
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180012970 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016750 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement(ExecutionModel::ResourceSet *this)
{
  return *((_DWORD *)this + 320) == 2 || (*((_BYTE *)this + 1332) & 4) != 0;
}
