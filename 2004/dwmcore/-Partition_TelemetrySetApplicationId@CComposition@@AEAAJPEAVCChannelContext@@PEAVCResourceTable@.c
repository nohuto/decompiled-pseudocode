/*
 * XREFs of ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x1800962E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x18009635C (-TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180157200 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetrySetApplicationId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID *a4,
        const unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned __int64 v6; // r8

  if ( a6 < 8
    || (v6 = *(_QWORD *)a5 >> 1, (*(_QWORD *)a5 & 1) != 0)
    || !*(_QWORD *)a5
    || v6 > 0x96
    || a6 != *(_QWORD *)a5 + 8LL + (-(*(_DWORD *)a5 + 8) & 3) )
  {
    CComposition::FailFastOnMalformedPacket(this, 2350814536LL, 0LL, this);
  }
  CChannelContext::TelemetrySetApplicationId(a2, a5 + 4, v6);
  return 0LL;
}
