/*
 * XREFs of ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x1C02B8010
 * Callers:
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C02B91C0 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 * Callees:
 *     ?GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z @ 0x1C02B80CC (-GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02B82D8 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::GetAvailableIndex(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        int *a7)
{
  DXGTRACKEDWORKLOAD *v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // r10
  struct COREDEVICEACCESS *v12; // r11
  int IndexHelper; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax

  *a7 = 0;
  LODWORD(v10) = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a6);
  if ( (int)v10 < 0 )
  {
    LODWORD(v10) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v9, a2, v12, v11, a5);
    if ( (int)v10 >= 0 )
    {
      *a7 = 1;
      IndexHelper = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a6);
      v10 = IndexHelper;
      if ( IndexHelper < 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
        v16[3] = this;
        v16[4] = v10;
        v16[5] = 1350LL;
        WdLogEvent5_WdError(v16);
      }
    }
  }
  return (unsigned int)v10;
}
