/*
 * XREFs of ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01B12C4 (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01B68AC (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01B69B8 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?IVDeSerializeMouseInputBuffer@@YAJPEAU_IVMouseInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B79C4 (-IVDeSerializeMouseInputBuffer@@YAJPEAU_IVMouseInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01BCCA4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01BCF58 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleMouseInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // edi
  int v10; // r15d
  void *v11; // r14
  __int64 RimDevByName; // rax
  int v13; // edx
  void **v14; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  __int64 v20; // [rsp+58h] [rbp-40h]
  char v21; // [rsp+60h] [rbp-38h]
  __int64 v22; // [rsp+A8h] [rbp+10h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      12,
      43,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v18 = 0LL;
  v19 = 0LL;
  v5 = 1;
  v20 = 0LL;
  v21 = 1;
  v17 = v4;
  if ( (int)IVDeSerializeMouseInputBuffer((struct _IVMouseInputPacket *)v4, (struct CIVSerializer *)v16) < 0 )
    goto LABEL_20;
  v8 = *(_DWORD *)(v4 + 16);
  if ( (v8 & 1) != 0 )
  {
    v22 = *(_QWORD *)(v4 + 36);
    ChildSynchronizeCursorAsyncWithRootPartition(&v22);
    v8 = *(_DWORD *)(v4 + 16);
  }
  v9 = 2;
  v10 = v8 & 2;
  v11 = 0LL;
  if ( (v8 & 4) == 0 )
  {
LABEL_18:
    if ( v10 )
      DeliverSynthesizedMouseInput((const struct _IVMouseInputPacket *)v4, v11);
LABEL_20:
    v9 = v5;
    goto LABEL_21;
  }
  RIMLockExclusive(a3 + 104);
  if ( !(unsigned __int8)IsRimObjectUnregistered(a3) )
  {
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)v4);
    if ( RimDevByName )
    {
      if ( v10 )
      {
        v14 = (void **)(*(_QWORD *)(RimDevByName + 32) + 88LL);
        if ( v14 )
          v11 = *v14;
      }
      else
      {
        DeliverMouseInputToRIM(
          (const struct _IVMouseInputPacket *)v4,
          (struct RawInputManagerObject *)a3,
          (struct RIMDEV *)RimDevByName);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v13,
          12,
          44,
          (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
      }
      v5 = 0;
    }
    *(_QWORD *)(a3 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_18;
  }
  *(_QWORD *)(a3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
  KeLeaveCriticalRegion();
LABEL_21:
  CIVSerializer::~CIVSerializer((CIVSerializer *)v16, v6, v7);
  return v9;
}
