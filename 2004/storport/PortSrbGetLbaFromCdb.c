/*
 * XREFs of PortSrbGetLbaFromCdb @ 0x1C005851C
 * Callers:
 *     RaidStartIoPacket @ 0x1C000AD20 (RaidStartIoPacket.c)
 *     RiNormalizeDeviceQueue @ 0x1C000BA3C (RiNormalizeDeviceQueue.c)
 *     IsZonedWriteRequest @ 0x1C0014400 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C0033C80 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C0033EB4 (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbGetLbaFromCdb(unsigned __int8 *a1, int a2)
{
  __int64 v3; // [rsp+20h] [rbp+20h]

  if ( a2 != 16 )
    return a1[5] | ((a1[4] | ((a1[3] | (a1[2] << 8)) << 8)) << 8);
  HIBYTE(v3) = a1[2];
  BYTE6(v3) = a1[3];
  BYTE5(v3) = a1[4];
  BYTE4(v3) = a1[5];
  BYTE3(v3) = a1[6];
  BYTE2(v3) = a1[7];
  BYTE1(v3) = a1[8];
  LOBYTE(v3) = a1[9];
  return v3;
}
