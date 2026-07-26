/*
 * XREFs of ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C0114760
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C005B6D8 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x1C0015678 (-ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C005E04C (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C01142EC (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C0114500 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C0114614 (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverStats(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        const struct _GUID *a3)
{
  union _LARGE_INTEGER *SelectiveSuspend; // rbx
  LONGLONG TimeInterval; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  ULONGLONG v10; // r14
  unsigned int v11; // r15d
  ULONGLONG v12; // r12
  ULONGLONG QuadPart; // rcx
  __int64 v14; // [rsp+20h] [rbp-59h]
  __int64 v15; // [rsp+20h] [rbp-59h]
  int v16; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-21h] BYREF
  LONGLONG v18; // [rsp+68h] [rbp-11h]
  ULONGLONG v19; // [rsp+70h] [rbp-9h]
  _QWORD v20[2]; // [rsp+78h] [rbp-1h] BYREF
  GUID v21; // [rsp+88h] [rbp+Fh] BYREF

  SelectiveSuspend = (union _LARGE_INTEGER *)a1->SelectiveSuspend;
  if ( SelectiveSuspend )
  {
    v21 = GUID_CS_BLOCKER_GEN;
    TimeInterval = ndisGetTimeInterval(SelectiveSuspend + 91);
    v10 = SelectiveSuspend[86].QuadPart - SelectiveSuspend[90].QuadPart;
    v11 = SelectiveSuspend[80].HighPart - SelectiveSuspend[88].LowPart;
    v12 = SelectiveSuspend[84].QuadPart - SelectiveSuspend[89].QuadPart;
    QuadPart = SelectiveSuspend[83].QuadPart;
    v18 = TimeInterval;
    v19 = QuadPart;
    if ( ndisEnableNicAutoPowerSaverInSleepStudy == 1 )
    {
      v20[1] = 25LL;
      a3 = &v21;
      v17[1] = 36LL;
      v20[0] = L"Events preventing Nic Dx";
      v17[0] = L"Breakdown of OIDs preventing Nic Dx";
      v21.Data3 = a1->IfIndex;
      v16 = 1;
      v21.Data4[0] = 0x80;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0ujqzr2jxx_EtwWriteTransfer(
          (__int64)L"Nic Auto Power Saver",
          v8,
          &a1->InterfaceGuid,
          a2,
          v9,
          21,
          (__int64)L"Nic Auto Power Saver",
          (__int64)&v21,
          0,
          a2);
      ndisPublishSleepStudyNapsCustomData(
        (__int64)a1,
        a2,
        (__int64)&v21,
        (__int64)v20,
        v14,
        (__int64)&SelectiveSuspend[92],
        (char *)&v16);
      ndisPublishSleepStudyNapsOidCustomData(
        (__int64)a1,
        a2,
        (__int64)&v21,
        (__int64)v17,
        v15,
        (__int64)&SelectiveSuspend[190],
        &v16);
      TimeInterval = v18;
      QuadPart = v19;
    }
    ndisPublishSleepStudyNicAutoPowerSaverCustomData((__int64)a1, a2, a3, TimeInterval, QuadPart, v10, v11, v12);
  }
}
