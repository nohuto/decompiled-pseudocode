/*
 * XREFs of ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B5F30
 * Callers:
 *     <none>
 * Callees:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C005191C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_s @ 0x1C0155A3C (WPP_RECORDER_SF_s.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C0173F70 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimProcessCompleteFrame @ 0x1C01766A8 (rimProcessCompleteFrame.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B097C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B1B84 (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01B6F44 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01B71F8 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleTouchInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 RimDevByName; // rax
  __int64 v7; // r15
  LARGE_INTEGER *v8; // r13
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  CBaseInput *v13; // rcx
  _BYTE v15[16]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  char v20; // [rsp+60h] [rbp-10h]
  LARGE_INTEGER *v21; // [rsp+A8h] [rbp+38h] BYREF
  char v22; // [rsp+B8h] [rbp+48h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      12,
      41,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
      (__int64)"IV_PACKET_TYPE_TOUCH_INPUT");
  v17 = 0LL;
  v18 = 0LL;
  v5 = 1;
  v19 = 0LL;
  v20 = 1;
  v16 = a2;
  if ( (int)IVDeSerializeIVTouchInputPacket((struct _IVTouchInputPacket *)a2, (struct CIVSerializer *)v15) >= 0 )
  {
    if ( *(_DWORD *)(a2 + 120) )
    {
      v21 = 0LL;
      rimGetCompleteFrameFromIVCompleteFrame(a2, 0LL, &v21);
      v12 = (__int64)v21;
      if ( v21 )
      {
        v13 = gpHidInput;
        *((_QWORD *)gpHidInput + 169) = v21;
        CRIMBase::SensorDoWorkAndWait((__int64)v13, 15LL, v10, v11);
        Win32FreePool(v12);
      }
    }
    else
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v22, 1, 0);
      RIMLockExclusive(a3 + 104);
      if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
      {
        *(_QWORD *)(a3 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
        KeLeaveCriticalRegion();
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v22);
        v5 = 2;
      }
      else
      {
        RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
        *(_QWORD *)(a3 + 112) = 0LL;
        v7 = RimDevByName;
        ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
        KeLeaveCriticalRegion();
        if ( v7 )
        {
          v21 = 0LL;
          rimGetCompleteFrameFromIVCompleteFrame(a2, v7, &v21);
          v8 = v21;
          if ( v21 )
          {
            RIMLockExclusive(a3 + 104);
            RIMLockExclusive(a3 + 568);
            v8[4] = *(LARGE_INTEGER *)(v7 + 16);
            rimProcessCompleteFrame((HANDLE *)a3, (struct RIMDEV *)v7, v8, v9);
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
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v22);
      }
    }
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v15);
  return v5;
}
