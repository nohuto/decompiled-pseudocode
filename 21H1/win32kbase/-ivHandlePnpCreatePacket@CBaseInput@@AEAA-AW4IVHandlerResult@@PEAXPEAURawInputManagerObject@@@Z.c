/*
 * XREFs of ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C01B77E0 (-IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpCreatePacket(__int64 a1, struct _IVPnpCreatePacket *a2, char *a3)
{
  struct _IVPnpCreatePacket *v4; // rdi
  unsigned int v5; // ebx
  int PacketForRimDev; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  int v11; // [rsp+28h] [rbp-50h]
  _BYTE v12[16]; // [rsp+30h] [rbp-48h] BYREF
  struct _IVPnpCreatePacket *v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+58h] [rbp-20h]
  char v17; // [rsp+60h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      12,
      34,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v14 = 0LL;
  v15 = 0LL;
  v5 = 1;
  v16 = 0LL;
  v17 = 1;
  v13 = v4;
  PacketForRimDev = IVDeSerializeIVPnpCreatePacketForRimDev(v4, (struct CIVSerializer *)v12);
  if ( PacketForRimDev < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 37;
      goto LABEL_11;
    }
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      12,
      35,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  PacketForRimDev = RIMVirtDeviceClassNotify(a3, ((unsigned __int64)v4 + 8) & -(__int64)(v4 != 0LL));
  if ( PacketForRimDev < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 36;
LABEL_11:
      v11 = PacketForRimDev;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        12,
        v9,
        (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
        v11);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
LABEL_13:
  CIVSerializer::~CIVSerializer((CIVSerializer *)v12, v7, v8);
  return v5;
}
