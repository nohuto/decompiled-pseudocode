/*
 * XREFs of IpmiLibAddSelCheckpointRecord @ 0x140652DB0
 * Callers:
 *     WheaSelLogCheckPoint @ 0x140A087A4 (WheaSelLogCheckPoint.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406528CC (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelRecord @ 0x140652E20 (IpmiLibAddSelRecord.c)
 */

__int64 IpmiLibAddSelCheckpointRecord()
{
  __int64 v0; // rcx
  int v1; // r8d
  _BYTE v3[9]; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+29h] [rbp-Fh]
  __int16 v5; // [rsp+2Ah] [rbp-Eh]
  int v6; // [rsp+2Ch] [rbp-Ch]
  __int16 v7; // [rsp+48h] [rbp+10h] BYREF
  char v8; // [rsp+4Ah] [rbp+12h]

  v7 = 0;
  v8 = 0;
  if ( !IpmiHwContextInitialized((__int64)&WheaIpmiContext) )
    return 3221225473LL;
  *(_QWORD *)v3 = 14614528LL;
  v6 = v1;
  *(_WORD *)&v3[7] = 311;
  v4 = 0;
  v5 = 5;
  return IpmiLibAddSelRecord(v0, v3, &v7);
}
