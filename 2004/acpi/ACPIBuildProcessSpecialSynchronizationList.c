/*
 * XREFs of ACPIBuildProcessSpecialSynchronizationList @ 0x1C001D094
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C001CB70 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C001D2B0 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D994 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 ACPIBuildProcessSpecialSynchronizationList()
{
  PSLIST_ENTRY v0; // rdi
  const ULONG_PTR *v1; // rdx
  char v2; // bl
  PSLIST_ENTRY v3; // rsi
  int Next; // eax
  PSLIST_ENTRY v6; // rdi
  PSLIST_ENTRY v7; // rsi
  void *v8; // r10
  void *v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  void *v14; // r11
  void *v15; // r8
  __int64 v16; // r10
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // [rsp+40h] [rbp-38h]
  char v20; // [rsp+80h] [rbp+8h]

  v0 = AcpiBuildSpecialSynchronizationList;
  v1 = &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids;
  v2 = 1;
  v20 = 1;
  if ( AcpiBuildSpecialSynchronizationList == (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
    goto LABEL_23;
  do
  {
    v3 = v0;
    v0 = v0->Next;
    Next = (int)v3[5].Next;
    if ( (Next & 8) != 0 && (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList
      || (Next & 0x20) != 0 && AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList
      || (Next & 1) != 0 && (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList
      || (Next & 2) != 0 && (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList
      || (Next & 0x10) != 0 && (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList
      || (Next & 4) != 0 && (__int64 *)AcpiBuildPowerResourceList != &AcpiBuildPowerResourceList )
    {
      v2 = 0;
    }
    else
    {
      if ( (Next & 0x80u) != 0 && (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
        v2 = 0;
      if ( (Next & 0x40) == 0 )
      {
        v13 = (_QWORD *)*((_QWORD *)&v3[2].Next + 1);
        v14 = &unk_1C00701BA;
        v15 = &unk_1C00701BA;
        LOBYTE(v16) = 0;
        if ( v13 )
        {
          v17 = v13[1];
          v16 = *((_QWORD *)&v3[2].Next + 1);
          if ( (v17 & 0x200000000000LL) != 0 )
          {
            v14 = (void *)v13[71];
            v18 = (v17 & 0x400000000000LL) == 0;
            v1 = &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids;
            if ( !v18 )
              v15 = (void *)v13[72];
          }
          else
          {
            v1 = &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v1) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v1,
            6,
            69,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            Next,
            v16,
            (__int64)v14,
            (__int64)v15);
        }
        ACPIBuildProcessGenericComplete(v3);
        v1 = &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids;
      }
    }
  }
  while ( v0 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList );
  v20 = v2;
  if ( v2 )
  {
LABEL_23:
    v6 = AcpiBuildSpecialSynchronizationList;
    if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
    {
      do
      {
        v7 = v6;
        v8 = &unk_1C00701BA;
        v6 = v6->Next;
        v9 = &unk_1C00701BA;
        LOBYTE(v10) = 0;
        v11 = (_QWORD *)*((_QWORD *)&v7[2].Next + 1);
        if ( v11 )
        {
          v12 = v11[1];
          v10 = *((_QWORD *)&v7[2].Next + 1);
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v8 = (void *)v11[71];
            if ( (v12 & 0x400000000000LL) != 0 )
              v9 = (void *)v11[72];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = (__int64)v9;
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v9,
            6,
            70,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            (char)v7[5].Next,
            v10,
            (__int64)v8,
            v19);
        }
        ACPIBuildProcessGenericComplete(v7);
      }
      while ( v6 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList );
      v2 = v20;
    }
  }
  return v2 == 0 ? 0x103 : 0;
}
