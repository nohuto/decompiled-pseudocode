/*
 * XREFs of ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_s @ 0x1C015BD8C (WPP_RECORDER_SF_s.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01AD348 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVPTPInertiaPacket@@YAJPEAU_IVPTPInertiaPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B7724 (-IVDeSerializeIVPTPInertiaPacket@@YAJPEAU_IVPTPInertiaPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01BCCA4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01BCF58 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePTPInertiaPacket(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 RimDevByName; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  CHidInput *v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h]
  char v19; // [rsp+60h] [rbp-38h]
  char v20; // [rsp+A8h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      12,
      52,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
      (__int64)"IV_PACKET_TYPE_PTP_INERTIA");
  v5 = 0LL;
  v15 = a2;
  v6 = 1;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 1;
  if ( (int)IVDeSerializeIVPTPInertiaPacket((struct _IVPTPInertiaPacket *)a2, (struct CIVSerializer *)v14) >= 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v20, 1, 0);
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      *(_QWORD *)(a3 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
      KeLeaveCriticalRegion();
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v20);
      v6 = 2;
    }
    else
    {
      RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
      *(_QWORD *)(a3 + 112) = 0LL;
      v10 = a3 + 104;
      v11 = RimDevByName;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
      if ( v11 )
      {
        v12 = *(CHidInput **)(v11 + 480);
        if ( v12 && *((_DWORD *)v12 + 6) == 7 )
        {
          if ( *(_QWORD *)(v11 + 32) != -88LL )
            v5 = *(void **)(*(_QWORD *)(v11 + 32) + 88LL);
          CHidInput::ProcessPTPInertiaActions(v12, v5, *(_QWORD *)(a2 + 16));
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
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v20);
    }
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v14, v7, v8);
  return v6;
}
