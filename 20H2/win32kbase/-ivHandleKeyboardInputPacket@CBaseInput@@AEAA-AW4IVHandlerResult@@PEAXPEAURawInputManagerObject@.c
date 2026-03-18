/*
 * XREFs of ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B28C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01AE5FC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01AE714 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 *     ?IVDeSerializeIVKeyboardInputPacket@@YAJPEAU_IVKeyboardInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01AF4BC (-IVDeSerializeIVKeyboardInputPacket@@YAJPEAU_IVKeyboardInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01B4BD4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01B4E88 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardInputPacket(__int64 a1, struct _IVKeyboardInputPacket *a2, __int64 a3)
{
  struct _IVKeyboardInputPacket *v4; // rbp
  unsigned int v5; // ebx
  int v6; // eax
  struct RIMDEV *RimDevByName; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-58h] BYREF
  struct _IVKeyboardInputPacket *v10; // [rsp+40h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  char v14; // [rsp+60h] [rbp-28h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      12,
      45,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  v11 = 0LL;
  v12 = 0LL;
  v5 = 1;
  v13 = 0LL;
  v14 = 1;
  v10 = v4;
  v6 = IVDeSerializeIVKeyboardInputPacket(v4, (struct CIVSerializer *)v9);
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        47,
        (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids,
        v6);
    v5 = 0;
  }
  else
  {
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      *(_QWORD *)(a3 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
      KeLeaveCriticalRegion();
      v5 = 2;
    }
    else
    {
      RimDevByName = (struct RIMDEV *)FindRimDevByName((PCUNICODE_STRING)v4);
      if ( RimDevByName )
      {
        DeliverKeyboardInputToRim(v4, (struct RawInputManagerObject *)a3, RimDevByName);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            46,
            (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
        v5 = 0;
      }
      *(_QWORD *)(a3 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v9);
  return v5;
}
