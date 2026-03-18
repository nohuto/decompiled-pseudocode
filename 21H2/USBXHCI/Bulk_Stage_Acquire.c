/*
 * XREFs of Bulk_Stage_Acquire @ 0x1C000ECDC
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000E980 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     Bulk_Stage_Initialize @ 0x1C000ED0C (Bulk_Stage_Initialize.c)
 *     StageQueue_Acquire @ 0x1C000ED90 (StageQueue_Acquire.c)
 */

__int64 __fastcall Bulk_Stage_Acquire(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r11

  v1 = StageQueue_Acquire(a1 + 128);
  if ( v1 )
    Bulk_Stage_Initialize(v2, v1);
  return v1;
}
