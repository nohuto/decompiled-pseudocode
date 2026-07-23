/*
 * XREFs of EtwpTraceSystemInitialization @ 0x140A61E04
 * Callers:
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     RtlGetSystemTimePrecise @ 0x1402F9590 (RtlGetSystemTimePrecise.c)
 *     HviGetHypervisorFeatures @ 0x1403A5FA0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403B9A50 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HviGetHardwareFeatures @ 0x1405B99C0 (HviGetHardwareFeatures.c)
 *     RtlGetVersion @ 0x1406FBC60 (RtlGetVersion.c)
 */

char EtwpTraceSystemInitialization()
{
  NTSTATUS Version; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  REGHANDLE v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r9
  REGHANDLE v13; // rsi
  __int64 v14; // rax
  ULONGLONG v15; // rax
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+5Ch] [rbp-ACh] BYREF
  int v23; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+64h] [rbp-A4h] BYREF
  int v25; // [rsp+68h] [rbp-A0h] BYREF
  int v26; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER v28; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER SystemTimePrecise; // [rsp+80h] [rbp-88h] BYREF
  __int128 v30; // [rsp+88h] [rbp-80h] BYREF
  __int128 v31; // [rsp+98h] [rbp-70h] BYREF
  int VersionInformation; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD VersionInformation_4[71]; // [rsp+ACh] [rbp-5Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  LARGE_INTEGER *p_SystemTimePrecise; // [rsp+1D8h] [rbp+D0h]
  __int64 v36; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v37; // [rsp+1E8h] [rbp+E0h]
  __int64 v38; // [rsp+1F0h] [rbp+E8h]
  int *v39; // [rsp+1F8h] [rbp+F0h]
  __int64 v40; // [rsp+200h] [rbp+F8h]
  _DWORD *v41; // [rsp+208h] [rbp+100h]
  __int64 v42; // [rsp+210h] [rbp+108h]
  int *v43; // [rsp+218h] [rbp+110h]
  __int64 v44; // [rsp+220h] [rbp+118h]
  LARGE_INTEGER *v45; // [rsp+228h] [rbp+120h]
  __int64 v46; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+238h] [rbp+130h] BYREF
  int *v48; // [rsp+258h] [rbp+150h]
  __int64 v49; // [rsp+260h] [rbp+158h]
  int *v50; // [rsp+268h] [rbp+160h]
  __int64 v51; // [rsp+270h] [rbp+168h]
  int *v52; // [rsp+278h] [rbp+170h]
  __int64 v53; // [rsp+280h] [rbp+178h]
  int *v54; // [rsp+288h] [rbp+180h]
  __int64 v55; // [rsp+290h] [rbp+188h]
  int *v56; // [rsp+298h] [rbp+190h]
  __int64 v57; // [rsp+2A0h] [rbp+198h]
  int *v58; // [rsp+2A8h] [rbp+1A0h]
  __int64 v59; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v60; // [rsp+2B8h] [rbp+1B0h]
  __int64 v61; // [rsp+2C0h] [rbp+1B8h]
  __int128 *v62; // [rsp+2C8h] [rbp+1C0h]
  __int64 v63; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v64; // [rsp+2D8h] [rbp+1D0h]
  __int64 v65; // [rsp+2E0h] [rbp+1D8h]
  int *v66; // [rsp+2E8h] [rbp+1E0h]
  __int64 v67; // [rsp+2F0h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned int *v69; // [rsp+318h] [rbp+210h]
  __int64 v70; // [rsp+320h] [rbp+218h]
  int *v71; // [rsp+328h] [rbp+220h]
  __int64 v72; // [rsp+330h] [rbp+228h]

  memset(VersionInformation_4, 0, 0x118uLL);
  v20 = NtBuildQfe;
  v21 = InitSafeBootMode;
  v31 = 0LL;
  VersionInformation = 284;
  Version = RtlGetVersion((PRTL_OSVERSIONINFOW)&VersionInformation);
  if ( Version >= 0 )
  {
    v28 = KeBootTime;
    if ( (unsigned int)dword_140C02BB0 > 5 && tlgKeywordOn((__int64)&dword_140C02BB0, 0x800000000000LL) )
    {
      v22 = VersionInformation_4[0];
      *(_QWORD *)&v30 = v7;
      v48 = &v22;
      LOBYTE(v17) = v8 != 0;
      v23 = VersionInformation_4[1];
      v49 = 4LL;
      v50 = &v23;
      v24 = VersionInformation_4[2];
      v52 = &v24;
      v54 = &v25;
      v26 = v20;
      v56 = &v26;
      LOWORD(v18) = VersionInformation_4[68];
      v58 = &v18;
      LODWORD(v27) = v21;
      v60 = &v27;
      v62 = &v30;
      v19 = dword_140C50958;
      v64 = &v19;
      v66 = &v17;
      v51 = 4LL;
      v53 = 4LL;
      v25 = 1;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 2LL;
      v61 = 4LL;
      v63 = 8LL;
      v65 = 4LL;
      v67 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02BB0,
        (unsigned __int8 *)&word_14002B756,
        0LL,
        0LL,
        0xCu,
        &v47);
    }
    LOBYTE(Version) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)Version )
    {
      HviGetHardwareFeatures((__int64)&v31, v1, v2, v3);
      v30 = 0LL;
      LOBYTE(Version) = HviGetHypervisorFeatures(&v30, v9, v10, v11);
      if ( (unsigned int)dword_140C02BB0 > 5 )
      {
        LOBYTE(Version) = tlgKeywordOn((__int64)&dword_140C02BB0, 0x400000000000LL);
        if ( (_BYTE)Version )
        {
          LOBYTE(v17) = v12;
          v19 = ((unsigned int)v31 >> 10) & 0xF;
          v70 = 4LL;
          v69 = &v19;
          v72 = 1LL;
          v71 = &v17;
          LOBYTE(Version) = tlgWriteTransfer_EtwWriteTransfer(
                              (__int64)&dword_140C02BB0,
                              (unsigned __int8 *)&dword_14002B7EC,
                              0LL,
                              0LL,
                              4u,
                              &v68);
        }
      }
    }
    if ( EtwKernelProvRegHandle )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)VersionInformation_4;
      v36 = 4LL;
      p_SystemTimePrecise = (LARGE_INTEGER *)&VersionInformation_4[1];
      v38 = 4LL;
      v37 = &VersionInformation_4[2];
      v40 = 4LL;
      v39 = &v20;
      v41 = &VersionInformation_4[68];
      v43 = &v21;
      v45 = &v28;
      v42 = 2LL;
      v44 = 4LL;
      v46 = 8LL;
      EtwWriteEx(EtwKernelProvRegHandle, &KernelSystemStart, 0LL, 0, 0LL, 0LL, 7u, &UserData);
      v4 = EtwKernelProvRegHandle;
      LOBYTE(Version) = EtwEventEnabled(EtwKernelProvRegHandle, &BootPerformanceData);
      if ( (_BYTE)Version )
      {
        *(_QWORD *)&UserData.Size = 264LL;
        UserData.Ptr = (ULONGLONG)&EtwBootPerfData;
        LOBYTE(Version) = EtwWriteEx(v4, &BootPerformanceData, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
      v5 = KeLoaderBlock_0;
      v6 = *(_QWORD *)(KeLoaderBlock_0 + 240);
      if ( (*(_DWORD *)(v6 + 132) & 0x100) != 0 || *(_QWORD *)(v6 + 224) )
      {
        v13 = EtwKernelProvRegHandle;
        LOBYTE(Version) = EtwEventEnabled(EtwKernelProvRegHandle, &VsmPerformanceData);
        if ( (_BYTE)Version )
        {
          *(_QWORD *)&UserData.Size = 8LL;
          UserData.Ptr = v6 + 224;
          v14 = *(_QWORD *)(v5 + 240) + 3488LL;
          v36 = 64LL;
          p_SystemTimePrecise = (LARGE_INTEGER *)v14;
          LOBYTE(Version) = EtwWriteEx(v13, &VsmPerformanceData, 0LL, 0, 0LL, 0LL, 2u, &UserData);
        }
      }
      if ( (qword_140C19598 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v15 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 2912LL;
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = v15;
        p_SystemTimePrecise = &SystemTimePrecise;
        v36 = 8LL;
        v37 = (_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2904LL);
        v38 = 4LL;
        LOBYTE(Version) = EtwWriteEx(EtwKernelProvRegHandle, &SoftBootInfo, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      }
    }
  }
  return Version;
}
