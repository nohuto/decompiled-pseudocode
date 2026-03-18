/*
 * XREFs of ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BA990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01B67F4 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 *     ?IVDeSerializeIVKeyboardInputPacket@@YAJPEAU_IVKeyboardInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B759C (-IVDeSerializeIVKeyboardInputPacket@@YAJPEAU_IVKeyboardInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01BCCA4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01BCF58 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardInputPacket(__int64 a1, struct _IVKeyboardInputPacket *a2, __int64 a3)
{
  struct _IVKeyboardInputPacket *v4; // rbp
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct RIMDEV *RimDevByName; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  struct _IVKeyboardInputPacket *v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+58h] [rbp-30h]
  char v16; // [rsp+60h] [rbp-28h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      12,
      45,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v13 = 0LL;
  v14 = 0LL;
  v5 = 1;
  v15 = 0LL;
  v16 = 1;
  v12 = v4;
  v6 = IVDeSerializeIVKeyboardInputPacket(v4, (struct CIVSerializer *)v11);
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        47,
        (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
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
            (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
        v5 = 0;
      }
      *(_QWORD *)(a3 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v11, v7, v8);
  return v5;
}
