/*
 * XREFs of ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BBC90
 * Callers:
 *     <none>
 * Callees:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0043E5C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_s @ 0x1C015BD8C (WPP_RECORDER_SF_s.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C017A2A0 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimProcessCompleteFrame @ 0x1C017C3A8 (rimProcessCompleteFrame.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B78E4 (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01BCCA4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01BCF58 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleTouchInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 RimDevByName; // rax
  __int64 v9; // r15
  LARGE_INTEGER *v10; // r13
  __int64 v11; // rbx
  CBaseInput *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE v16[16]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  char v21; // [rsp+60h] [rbp-10h]
  LARGE_INTEGER *v22; // [rsp+A8h] [rbp+38h] BYREF
  char v23; // [rsp+B8h] [rbp+48h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      12,
      41,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
      (__int64)"IV_PACKET_TYPE_TOUCH_INPUT");
  v18 = 0LL;
  v19 = 0LL;
  v5 = 1;
  v20 = 0LL;
  v21 = 1;
  v17 = a2;
  if ( (int)IVDeSerializeIVTouchInputPacket((struct _IVTouchInputPacket *)a2, (struct CIVSerializer *)v16) >= 0 )
  {
    if ( *(_DWORD *)(a2 + 120) )
    {
      v22 = 0LL;
      rimGetCompleteFrameFromIVCompleteFrame(a2, 0LL, &v22);
      v11 = (__int64)v22;
      if ( v22 )
      {
        v12 = gpHidInput;
        *((_QWORD *)gpHidInput + 169) = v22;
        CRIMBase::SensorDoWorkAndWait((__int64)v12, 0xFu);
        Win32FreePool(v11, v13, v14);
      }
    }
    else
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v23, 1, 0);
      RIMLockExclusive(a3 + 104);
      if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
      {
        *(_QWORD *)(a3 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
        KeLeaveCriticalRegion();
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v23);
        v5 = 2;
      }
      else
      {
        RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
        *(_QWORD *)(a3 + 112) = 0LL;
        v9 = RimDevByName;
        ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
        KeLeaveCriticalRegion();
        if ( v9 )
        {
          v22 = 0LL;
          rimGetCompleteFrameFromIVCompleteFrame(a2, v9, &v22);
          v10 = v22;
          if ( v22 )
          {
            RIMLockExclusive(a3 + 104);
            RIMLockExclusive(a3 + 568);
            v10[4] = *(LARGE_INTEGER *)(v9 + 16);
            rimProcessCompleteFrame((HANDLE *)a3, (struct RIMDEV *)v9, v10);
            *(_QWORD *)(a3 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(a3 + 568, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(a3 + 112) = 0LL;
            ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              12,
              42,
              (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
          v5 = 0;
        }
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v23);
      }
    }
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v16, v6, v7);
  return v5;
}
