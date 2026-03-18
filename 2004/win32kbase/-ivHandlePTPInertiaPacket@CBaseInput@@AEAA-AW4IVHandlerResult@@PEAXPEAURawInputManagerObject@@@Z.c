/*
 * XREFs of ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B5500
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_s @ 0x1C0155A3C (WPP_RECORDER_SF_s.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01A75E8 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B097C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVPTPInertiaPacket@@YAJPEAU_IVPTPInertiaPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B19C4 (-IVDeSerializeIVPTPInertiaPacket@@YAJPEAU_IVPTPInertiaPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01B6F44 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01B71F8 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePTPInertiaPacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 RimDevByName; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r9
  CHidInput *v11; // rcx
  _BYTE v13[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  __int64 v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+58h] [rbp-40h]
  char v18; // [rsp+60h] [rbp-38h]
  char v19; // [rsp+A8h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      12,
      52,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
      (__int64)"IV_PACKET_TYPE_PTP_INERTIA");
  v5 = 0LL;
  v14 = a2;
  v6 = 1;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 1;
  if ( (int)IVDeSerializeIVPTPInertiaPacket((struct _IVPTPInertiaPacket *)a2, (struct CIVSerializer *)v13) >= 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v19, 1, 0);
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      *(_QWORD *)(a3 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
      KeLeaveCriticalRegion();
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v19);
      v6 = 2;
    }
    else
    {
      RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
      *(_QWORD *)(a3 + 112) = 0LL;
      v8 = a3 + 104;
      v9 = RimDevByName;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
      if ( v9 )
      {
        v11 = *(CHidInput **)(v9 + 480);
        if ( v11 && *((_DWORD *)v11 + 6) == 7 )
        {
          if ( *(_QWORD *)(v9 + 32) != -88LL )
            v5 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 88LL);
          CHidInput::ProcessPTPInertiaActions(v11, v5, *(_QWORD *)(a2 + 16), v10);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            53,
            (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
        v6 = 0;
      }
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v19);
    }
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v13);
  return v6;
}
