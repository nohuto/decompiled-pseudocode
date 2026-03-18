/*
 * XREFs of ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0020F80
 * Callers:
 *     DpiProcessOpmVmBusRequest @ 0x1C0065114 (DpiProcessOpmVmBusRequest.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C01ED968 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0046A74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0064B48 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     ?DpiOpmLogSetLevel@@YAXJII@Z @ 0x1C0064D40 (-DpiOpmLogSetLevel@@YAXJII@Z.c)
 *     McTemplateK0ptpjq_EtwWriteTransfer @ 0x1C00651F8 (McTemplateK0ptpjq_EtwWriteTransfer.c)
 *     McTemplateK0ptpjqq_EtwWriteTransfer @ 0x1C00652A8 (McTemplateK0ptpjqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpq_EtwWriteTransfer @ 0x1C0065368 (McTemplateK0ptpq_EtwWriteTransfer.c)
 *     McTemplateK0ptpqq_EtwWriteTransfer @ 0x1C0065400 (McTemplateK0ptpqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpqqq_EtwWriteTransfer @ 0x1C00654A8 (McTemplateK0ptpqqq_EtwWriteTransfer.c)
 *     McTemplateK0ptqppq_EtwWriteTransfer @ 0x1C0065560 (McTemplateK0ptqppq_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkOpmCreateHandle @ 0x1C01ED5A8 (DxgkOpmCreateHandle.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C01ED788 (DxgkOpmTranslateAndDestroyHandle.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C01EDA3C (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01EDAF4 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1C01EDB50 (DpiPdoVerifyOpmParameters.c)
 *     DxgkOpmTranslateHandle @ 0x1C01EDC40 (DxgkOpmTranslateHandle.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C01EEE34 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01EF8F4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01EF978 (DxgkReleaseAdapterDdiSync.c)
 */

__int64 __fastcall DpiPdoHandleOpmIoctlsInternal(
        struct _FDO_CONTEXT *RenderAdapterForSession,
        struct _PDO_CONTEXT *a2,
        int a3,
        char *a4,
        unsigned int a5,
        void **a6,
        unsigned int a7,
        unsigned __int64 *a8)
{
  int v9; // ecx
  struct _PDO_CONTEXT *v12; // r15
  __int64 v13; // rsi
  unsigned int v14; // r13d
  int v15; // r12d
  int v16; // r12d
  int v17; // r12d
  int v18; // r12d
  int v19; // r12d
  int v20; // r12d
  char v21; // r12
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 (__fastcall *v25)(__int64, void *, char *, void **); // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // r12
  int v31; // ecx
  int v32; // r8d
  void *v33; // r14
  int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // r12d
  unsigned int v38; // r14d
  int v39; // ecx
  int v40; // r8d
  char v41; // r12
  int v42; // ecx
  int v43; // r8d
  int v44; // eax
  int v45; // r12d
  int v46; // r12d
  void *v47; // r14
  int v48; // eax
  char v49; // r12
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v53; // r14d
  unsigned int v54; // r14d
  int v55; // ecx
  int v56; // r8d
  int v57; // eax
  void *v58; // rdx
  char v59; // r12
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  int v63; // eax
  __int64 (__fastcall *v64)(__int64, struct _FDO_CONTEXT *, char *, _QWORD, char *); // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  char v67; // r12
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // eax
  __int64 (__fastcall *v72)(__int64, void *, char *, void **); // rax
  __int64 v73; // rcx
  void *v74; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  int v77; // ecx
  int v78; // r8d
  int v79; // [rsp+50h] [rbp-B0h]
  unsigned int v80; // [rsp+54h] [rbp-ACh]
  unsigned int v81; // [rsp+54h] [rbp-ACh]
  unsigned int v82; // [rsp+54h] [rbp-ACh]
  int v83; // [rsp+58h] [rbp-A8h]
  unsigned int v84; // [rsp+58h] [rbp-A8h]
  void **v85; // [rsp+60h] [rbp-A0h] BYREF
  void *v86; // [rsp+68h] [rbp-98h] BYREF
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v87; // [rsp+70h] [rbp-90h]
  int v88; // [rsp+74h] [rbp-8Ch]
  void *v89; // [rsp+78h] [rbp-88h] BYREF
  struct _FDO_CONTEXT *v90; // [rsp+80h] [rbp-80h] BYREF
  void *v91; // [rsp+88h] [rbp-78h] BYREF
  int v92; // [rsp+90h] [rbp-70h] BYREF
  void *v93; // [rsp+98h] [rbp-68h] BYREF
  void *v94; // [rsp+A0h] [rbp-60h] BYREF
  void *v95; // [rsp+A8h] [rbp-58h] BYREF
  void **v96; // [rsp+B0h] [rbp-50h]
  __int64 v97; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v98; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 *v100; // [rsp+D0h] [rbp-30h]
  __int128 v101; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v102; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v103; // [rsp+F8h] [rbp-8h] BYREF

  v100 = a8;
  v9 = (int)a6;
  v85 = a6;
  *a8 = 0LL;
  v12 = a2;
  LODWORD(v13) = -1073741637;
  v14 = 0;
  v88 = 0;
  v83 = 1;
  v91 = a2;
  v90 = RenderAdapterForSession;
  if ( *((_BYTE *)RenderAdapterForSession + 1159) )
  {
    v57 = *((_DWORD *)RenderAdapterForSession + 291);
    if ( v57 == 2 )
    {
      v12 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = (struct _FDO_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_170:
        _InterlockedExchange64(&qword_1C01304D8, 0LL);
        KeReleaseMutex(Mutex, 0);
        return (unsigned int)v13;
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)RenderAdapterForSession + 484) )
        DpiCheckForOutstandingD3Requests((__int64)RenderAdapterForSession);
      ExAcquireResourceSharedLite(*((PERESOURCE *)RenderAdapterForSession + 21), 1u);
      v14 = 1;
      if ( a3 == 2303115 )
      {
        v88 = 1;
      }
      else
      {
        _InterlockedExchange64(&qword_1C01304D8, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      v9 = (int)v85;
    }
    else
    {
      if ( v57 != 1 )
      {
        WdLogSingleEntry1(2LL, -1073741637LL);
        return (unsigned int)v13;
      }
      v83 = 0;
    }
  }
  if ( *((_QWORD *)RenderAdapterForSession + 382) )
  {
    v15 = a3 - 2303107;
    if ( v15 )
    {
      v16 = v15 - 4;
      if ( !v16 )
      {
        LODWORD(v13) = DpiPdoVerifyOpmParameters(2303111, (_DWORD)a4, a5, v9, a7, 4, a7);
        if ( (int)v13 < 0 )
          goto LABEL_162;
        v54 = *(_DWORD *)a4;
        LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_162;
        DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
        if ( v12 )
          KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
        v36 = a7;
        v13 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))RenderAdapterForSession + 383))(
                *((_QWORD *)RenderAdapterForSession + 6),
                v54,
                a7,
                v85);
        DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
        if ( v12 )
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqtqq_EtwWriteTransfer(
            v55,
            (unsigned int)&EventOpmGetCertificate,
            v56,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            v54,
            a7,
            v13);
        WdLogSingleEntry4(4LL, v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
        goto LABEL_44;
      }
      v17 = v16 - 4;
      if ( v17 )
      {
        v18 = v17 - 4;
        if ( v18 )
        {
          v19 = v18 - 4;
          if ( !v19 )
          {
            v41 = 0;
            v91 = 0LL;
            LODWORD(v13) = DpiPdoVerifyOpmParameters(2303123, (_DWORD)a4, a5, v9, a7, 264, 0);
            if ( (int)v13 >= 0 )
            {
              LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              if ( (int)v13 < 0 )
                goto LABEL_162;
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
              v44 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), *(void **)a4, &v91);
              v41 = (char)v91;
              LODWORD(v13) = v44;
              if ( v44 >= 0 )
                LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *, char *))RenderAdapterForSession + 386))(
                                 *((_QWORD *)RenderAdapterForSession + 6),
                                 v91,
                                 a4 + 8);
              DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
              goto LABEL_67;
            v58 = &EventOPMSetSigningKeyAndSequenceNumbers;
            goto LABEL_159;
          }
          v20 = v19 - 4;
          if ( !v20 )
          {
            v80 = -1;
            v79 = 4096;
            v21 = 0;
            v86 = 0LL;
            v103 = 0LL;
            LODWORD(v13) = DpiPdoVerifyOpmParameters(2303127, (_DWORD)a4, a5, v9, a7, 4120, 4096);
            if ( (int)v13 >= 0 )
            {
              LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              if ( (int)v13 < 0 )
                goto LABEL_162;
              v80 = *((_DWORD *)a4 + 10);
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
              LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), *(void **)a4, &v86);
              if ( (int)v13 >= 0 )
              {
                v25 = (__int64 (__fastcall *)(__int64, void *, char *, void **))*((_QWORD *)RenderAdapterForSession + 387);
                v26 = *((_QWORD *)RenderAdapterForSession + 6);
                v103 = *(_OWORD *)(a4 + 40);
                LODWORD(v13) = v25(v26, v86, a4 + 8, v85);
              }
              DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              v27 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
              if ( !v27 )
                v27 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
              if ( !v27 && *((_DWORD *)v85 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                {
                  v74 = &EventOPMGetConnectorType;
LABEL_153:
                  McTemplateK0ptpqq_EtwWriteTransfer(
                    v23,
                    (_DWORD)v74,
                    v24,
                    *((_QWORD *)RenderAdapterForSession + 6),
                    v14,
                    (char)v86,
                    *((_DWORD *)v85 + 10),
                    v13);
                  goto LABEL_29;
                }
                goto LABEL_29;
              }
              v28 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
              if ( !v28 )
                v28 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
              if ( !v28 && *((_DWORD *)v85 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                {
                  v74 = &EventOPMGetSupportedProtectionTypes;
                  goto LABEL_153;
                }
LABEL_29:
                WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, v80);
LABEL_43:
                v36 = v79;
                goto LABEL_44;
              }
              v29 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
              if ( !v29 )
                v29 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
              if ( !v29 && *((_DWORD *)a4 + 15) >= 4u && *((_DWORD *)v85 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0ptpqqq_EtwWriteTransfer(
                    v23,
                    (unsigned int)&EventOPMGetActualProtectionLevel,
                    v24,
                    *((_QWORD *)RenderAdapterForSession + 6),
                    v14,
                    (char)v86,
                    *((_DWORD *)a4 + 16),
                    *((_DWORD *)v85 + 10),
                    v13);
                goto LABEL_29;
              }
              v21 = (char)v86;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0ptpjq_EtwWriteTransfer(
                v23,
                v22,
                v24,
                *((_QWORD *)RenderAdapterForSession + 6),
                v14,
                v21,
                (__int64)&v103,
                v13);
            goto LABEL_29;
          }
          v45 = v20 - 4;
          if ( v45 )
          {
            v46 = v45 - 4;
            if ( !v46 )
            {
              v82 = -1;
              v59 = 0;
              v101 = 0LL;
              v90 = 0LL;
              LOBYTE(v84) = 0;
              LODWORD(v13) = DpiPdoVerifyOpmParameters(2303135, (_DWORD)a4, a5, v9, a7, 4112, 0);
              if ( (int)v13 >= 0 )
              {
                v84 = *((_DWORD *)a4 + 1026);
                LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
                if ( (int)v13 < 0 )
                  goto LABEL_162;
                v82 = *((_DWORD *)a4 + 6);
                DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
                if ( v12 )
                  KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
                DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
                v63 = DxgkOpmTranslateHandle(
                        *((DXGADAPTER **)RenderAdapterForSession + 487),
                        *(void **)a4,
                        (void **)&v90);
                v59 = (char)v90;
                LODWORD(v13) = v63;
                if ( v63 >= 0 )
                {
                  v64 = (__int64 (__fastcall *)(__int64, struct _FDO_CONTEXT *, char *, _QWORD, char *))*((_QWORD *)RenderAdapterForSession + 389);
                  v65 = *((_QWORD *)RenderAdapterForSession + 6);
                  v101 = *(_OWORD *)(a4 + 24);
                  LODWORD(v13) = v64(v65, v90, a4 + 8, v84, a4 + 4108);
                }
                DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
                if ( v12 )
                  KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
                DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
                DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
                v66 = *((_QWORD *)a4 + 3) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
                if ( !v66 )
                  v66 = *((_QWORD *)a4 + 4) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
                if ( !v66 && *((_DWORD *)a4 + 11) >= 0x10u )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0ptpqqq_EtwWriteTransfer(
                      v61,
                      (unsigned int)&EventOPMSetProtectionLevel,
                      v62,
                      *((_QWORD *)RenderAdapterForSession + 6),
                      v14,
                      v59,
                      *((_DWORD *)a4 + 12),
                      *((_DWORD *)a4 + 13),
                      v13);
                  WdLogSingleEntry4(
                    4LL,
                    (int)v13,
                    *((_QWORD *)RenderAdapterForSession + 6),
                    v14,
                    *((unsigned int *)a4 + 12));
                  DpiOpmLogSetLevel(v13, *((_DWORD *)a4 + 12), *((_DWORD *)a4 + 13));
                }
              }
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0ptpjqq_EtwWriteTransfer(
                  v61,
                  v60,
                  v62,
                  *((_QWORD *)RenderAdapterForSession + 6),
                  v14,
                  v59,
                  (__int64)&v101,
                  v84,
                  v13);
              WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, v82);
              goto LABEL_68;
            }
            if ( v46 != 4 )
              goto LABEL_162;
            v41 = 0;
            v95 = 0LL;
            LODWORD(v13) = DpiPdoVerifyOpmParameters(2303139, (_DWORD)a4, a5, v9, a7, 8, 0);
            if ( (int)v13 >= 0 )
            {
              v47 = *(void **)a4;
              LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              if ( (int)v13 < 0 )
                goto LABEL_162;
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
              v48 = DxgkOpmTranslateAndDestroyHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), v47, &v95);
              v41 = (char)v95;
              LODWORD(v13) = v48;
              if ( v48 >= 0 )
                LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *))RenderAdapterForSession + 390))(
                                 *((_QWORD *)RenderAdapterForSession + 6),
                                 v95);
              DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            {
LABEL_67:
              WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
LABEL_68:
              v36 = 0;
LABEL_44:
              if ( (int)v13 >= 0 )
              {
                *v100 = v36;
                goto LABEL_46;
              }
LABEL_162:
              WdLogSingleEntry1(3LL, (int)v13);
              goto LABEL_46;
            }
            v58 = &EventOPMDestroyProtectedOutput;
LABEL_159:
            McTemplateK0ptpq_EtwWriteTransfer(
              v42,
              (_DWORD)v58,
              v43,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v41,
              v13);
            goto LABEL_67;
          }
          v79 = 4096;
          v67 = 0;
          v93 = 0LL;
          v102 = 0LL;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303131, (_DWORD)a4, a5, v9, a7, 4104, 4096);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_162;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
            v71 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), *(void **)a4, &v93);
            v67 = (char)v93;
            LODWORD(v13) = v71;
            if ( v71 >= 0 )
            {
              v72 = (__int64 (__fastcall *)(__int64, void *, char *, void **))*((_QWORD *)RenderAdapterForSession + 388);
              v73 = *((_QWORD *)RenderAdapterForSession + 6);
              v102 = *(_OWORD *)(a4 + 24);
              LODWORD(v13) = v72(v73, v93, a4 + 8, v85);
            }
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ptpjq_EtwWriteTransfer(
              v69,
              v68,
              v70,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v67,
              (__int64)&v102,
              v13);
        }
        else
        {
          v30 = 0;
          v94 = 0LL;
          v79 = 16;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303119, (_DWORD)a4, a5, v9, a7, 8, 16);
          if ( (int)v13 >= 0 )
          {
            v33 = *(void **)a4;
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_162;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
            v34 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), v33, &v94);
            v30 = (char)v94;
            LODWORD(v13) = v34;
            if ( v34 >= 0 )
              LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *, void **))RenderAdapterForSession + 385))(
                               *((_QWORD *)RenderAdapterForSession + 6),
                               v94,
                               v85);
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ptpq_EtwWriteTransfer(
              v31,
              (unsigned int)&EventOPMGetRandomNumber,
              v32,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v30,
              v13);
        }
      }
      else
      {
        v49 = -1;
        v89 = 0LL;
        v96 = 0LL;
        v79 = 8;
        LODWORD(v13) = DpiPdoVerifyOpmParameters(2303115, (_DWORD)a4, a5, v9, a7, 4, 8);
        if ( (int)v13 >= 0 )
        {
          v53 = *(_DWORD *)a4;
          v87 = v53;
          if ( v53 == DXGKMDT_OPM_VOS_OPM_INDIRECT_DISPLAY && v83 )
          {
            LODWORD(v13) = -1073741198;
            WdLogSingleEntry4(4LL, -1073741198LL, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
            goto LABEL_162;
          }
          v96 = v85;
          if ( v14 )
          {
            v81 = *((_DWORD *)v91 + 126);
            LODWORD(v13) = CreateProtectedOutputIndirectDisplay(RenderAdapterForSession, v90, v53, v81, v85, &v89);
          }
          else
          {
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_162;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
            v81 = *((_DWORD *)v12 + 126);
            LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))RenderAdapterForSession + 384))(
                             *((_QWORD *)RenderAdapterForSession + 6),
                             v81,
                             (unsigned int)v87,
                             &v89);
            if ( (int)v13 >= 0 )
            {
              LODWORD(v13) = DxgkOpmCreateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), v89, v85);
              if ( (int)v13 < 0 )
              {
                (*((void (__fastcall **)(_QWORD, void *))RenderAdapterForSession + 390))(
                  *((_QWORD *)RenderAdapterForSession + 6),
                  v89);
                if ( (_DWORD)v13 == -1073741198 )
                  LODWORD(v13) = -1073741637;
              }
            }
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
            KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            v53 = v87;
          }
          if ( (unsigned int)dword_1C012F8A8 > 5 && tlgKeywordOn((__int64)&dword_1C012F8A8, 0x400000100000LL) )
          {
            CurrentProcess = PsGetCurrentProcess();
            ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
            v92 = v13;
            v97 = ProcessImageFileName;
            LODWORD(v85) = v53;
            v98 = 33556480LL;
            v99 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
              v77,
              (unsigned int)&unk_1C0099ED0,
              v78,
              (unsigned int)&v99,
              (__int64)&v98,
              (__int64)&v85,
              (__int64)&v92,
              (__int64)&v97);
          }
          v49 = v81;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ptqppq_EtwWriteTransfer(
            v51,
            v50,
            v52,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            v49,
            (char)v89,
            (char)*v96,
            v13);
      }
      v35 = (int)v13;
    }
    else
    {
      v79 = 4;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303107, (_DWORD)a4, a5, v9, a7, 4, 4);
      if ( (int)v13 < 0 )
        goto LABEL_162;
      v38 = *(_DWORD *)a4;
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_162;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, void **))RenderAdapterForSession + 382))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v38,
              v85);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pqtqq_EtwWriteTransfer(
          v39,
          (unsigned int)&EventOpmGetCertificateSize,
          v40,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v38,
          *(_DWORD *)v85,
          v13);
      v35 = v13;
    }
    WdLogSingleEntry4(4LL, v35, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
    goto LABEL_43;
  }
LABEL_46:
  if ( v14 )
  {
    if ( *((_BYTE *)RenderAdapterForSession + 484) )
      DpiEnableD3Requests(*((_QWORD *)RenderAdapterForSession + 3));
    ExReleaseResourceLite(*((PERESOURCE *)RenderAdapterForSession + 21));
    KeLeaveCriticalRegion();
    if ( v88 )
      goto LABEL_170;
  }
  return (unsigned int)v13;
}
