/*
 * XREFs of ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C664
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C015F7EC (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001F6D4 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C00387B4 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C003A2B4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0056144 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     ?DpiOpmLogSetLevel@@YAXJII@Z @ 0x1C0056360 (-DpiOpmLogSetLevel@@YAXJII@Z.c)
 *     McTemplateK0ptpjq_EtwWriteTransfer @ 0x1C005675C (McTemplateK0ptpjq_EtwWriteTransfer.c)
 *     McTemplateK0ptpjqq_EtwWriteTransfer @ 0x1C005680C (McTemplateK0ptpjqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpq_EtwWriteTransfer @ 0x1C00568CC (McTemplateK0ptpq_EtwWriteTransfer.c)
 *     McTemplateK0ptpqq_EtwWriteTransfer @ 0x1C0056964 (McTemplateK0ptpqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpqqq_EtwWriteTransfer @ 0x1C0056A0C (McTemplateK0ptpqqq_EtwWriteTransfer.c)
 *     McTemplateK0ptqppq_EtwWriteTransfer @ 0x1C0056AC4 (McTemplateK0ptqppq_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01271F0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012746C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C015F688 (DxgkOpmTranslateAndDestroyHandle.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C015F8C0 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C015F954 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1C015F9B0 (DpiPdoVerifyOpmParameters.c)
 *     DxgkOpmTranslateHandle @ 0x1C015FAA8 (DxgkOpmTranslateHandle.c)
 *     DxgkOpmCreateHandle @ 0x1C015FC80 (DxgkOpmCreateHandle.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0161AF0 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0161B70 (DxgkReleaseAdapterDdiSync.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C0161FEC (DpiMiracastFindRenderAdapterForSession.c)
 */

__int64 __fastcall DpiPdoHandleOpmIoctlsInternal(
        struct _FDO_CONTEXT *RenderAdapterForSession,
        struct _PDO_CONTEXT *a2,
        __int64 a3,
        char *a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned int a7,
        unsigned __int64 *a8)
{
  _DWORD *v9; // rcx
  int v11; // r12d
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
  __int64 (__fastcall *v25)(__int64, void *, char *, _DWORD *); // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  char v31; // r12
  int v32; // ecx
  int v33; // r8d
  void *v34; // r14
  int v35; // eax
  unsigned int v36; // r12d
  unsigned int v38; // r14d
  int v39; // ecx
  int v40; // r8d
  char v41; // r12
  int v42; // ecx
  int v43; // r8d
  int v44; // eax
  _QWORD *v45; // rax
  int v46; // r12d
  int v47; // r12d
  void *v48; // r14
  int v49; // eax
  char v50; // r12
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v54; // r14d
  unsigned int v55; // r14d
  int v56; // ecx
  int v57; // r8d
  _QWORD *v58; // rax
  int v59; // eax
  __int64 v60; // rax
  void *v61; // rdx
  char v62; // r12
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  int v66; // eax
  __int64 (__fastcall *v67)(__int64, void *, char *, _QWORD, char *); // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  _QWORD *v70; // rax
  char v71; // r12
  int v72; // edx
  int v73; // ecx
  int v74; // r8d
  int v75; // eax
  __int64 (__fastcall *v76)(__int64, void *, char *, _DWORD *); // rax
  __int64 v77; // rcx
  void *v78; // rdx
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  int v83; // ecx
  int v84; // r8d
  int v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  unsigned int v87; // [rsp+54h] [rbp-ACh]
  unsigned int v89; // [rsp+58h] [rbp-A8h]
  unsigned int v90; // [rsp+58h] [rbp-A8h]
  unsigned int v91; // [rsp+58h] [rbp-A8h]
  void *v92; // [rsp+68h] [rbp-98h] BYREF
  int v93; // [rsp+70h] [rbp-90h]
  void *v94; // [rsp+78h] [rbp-88h] BYREF
  int v95; // [rsp+80h] [rbp-80h] BYREF
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v96; // [rsp+84h] [rbp-7Ch] BYREF
  void *v97; // [rsp+88h] [rbp-78h] BYREF
  void *v98; // [rsp+90h] [rbp-70h] BYREF
  void *v99; // [rsp+98h] [rbp-68h] BYREF
  void *v100; // [rsp+A0h] [rbp-60h] BYREF
  void *v101; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v102; // [rsp+B0h] [rbp-50h]
  struct _FDO_CONTEXT *v103; // [rsp+B8h] [rbp-48h]
  __int64 v104; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v105; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v106; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v107; // [rsp+D8h] [rbp-28h]
  __int128 v108; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v109; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v110; // [rsp+100h] [rbp+0h] BYREF

  v107 = a8;
  v9 = a6;
  v11 = a3;
  *a8 = 0LL;
  v12 = a2;
  LODWORD(v13) = -1073741637;
  v14 = 0;
  v93 = 0;
  v86 = 1;
  v103 = RenderAdapterForSession;
  if ( *((_BYTE *)RenderAdapterForSession + 1158) )
  {
    v59 = *((_DWORD *)RenderAdapterForSession + 291);
    if ( v59 == 2 )
    {
      v12 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = (struct _FDO_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_170:
        _InterlockedExchange64(&qword_1C00AFA50, 0LL);
        KeReleaseMutex(Mutex, 0);
        return (unsigned int)v13;
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)RenderAdapterForSession + 484) )
        DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
      ExAcquireResourceSharedLite(*((PERESOURCE *)RenderAdapterForSession + 21), 1u);
      v14 = 1;
      if ( v11 == 2303115 )
      {
        v93 = 1;
      }
      else
      {
        _InterlockedExchange64(&qword_1C00AFA50, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      v9 = a6;
    }
    else
    {
      if ( v59 != 1 )
      {
        v60 = WdLogNewEntry5_WdError(a6, a2);
        *(_QWORD *)(v60 + 24) = -1073741637LL;
        WdLogEvent5_WdError(v60);
        return (unsigned int)v13;
      }
      v86 = 0;
    }
  }
  if ( *((_QWORD *)RenderAdapterForSession + 382) )
  {
    v15 = v11 - 2303107;
    if ( v15 )
    {
      v16 = v15 - 4;
      if ( !v16 )
      {
        LODWORD(v13) = DpiPdoVerifyOpmParameters(2303111, (_DWORD)a4, a5, (_DWORD)v9, a7, 4, a7);
        if ( (int)v13 < 0 )
          goto LABEL_162;
        v55 = *(_DWORD *)a4;
        LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_162;
        DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
        if ( v12 )
          KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
        v36 = a7;
        v13 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, _DWORD *))RenderAdapterForSession + 383))(
                *((_QWORD *)RenderAdapterForSession + 6),
                v55,
                a7,
                a6);
        DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
        if ( v12 )
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqtqq_EtwWriteTransfer(
            v56,
            (unsigned int)&EventOpmGetCertificate,
            v57,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            v55,
            a7,
            v13);
        v58 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v58[3] = v13;
        v58[4] = *((_QWORD *)RenderAdapterForSession + 6);
        v58[5] = v14;
        v58[6] = 0LL;
        WdLogEvent5_WdEvent(v58);
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
            v101 = 0LL;
            LODWORD(v13) = DpiPdoVerifyOpmParameters(2303123, (_DWORD)a4, a5, (_DWORD)v9, a7, 264, 0);
            if ( (int)v13 >= 0 )
            {
              LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              if ( (int)v13 < 0 )
                goto LABEL_162;
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
              v44 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), *(void **)a4, &v101);
              v41 = (char)v101;
              LODWORD(v13) = v44;
              if ( v44 >= 0 )
                LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *, char *))RenderAdapterForSession + 386))(
                                 *((_QWORD *)RenderAdapterForSession + 6),
                                 v101,
                                 a4 + 8);
              DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_67;
            v61 = &EventOPMSetSigningKeyAndSequenceNumbers;
            goto LABEL_159;
          }
          v20 = v19 - 4;
          if ( !v20 )
          {
            v89 = -1;
            v85 = 4096;
            v21 = 0;
            v92 = 0LL;
            v110 = 0LL;
            LODWORD(v13) = DpiPdoVerifyOpmParameters(2303127, (_DWORD)a4, a5, (_DWORD)v9, a7, 4120, 4096);
            if ( (int)v13 >= 0 )
            {
              LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              if ( (int)v13 < 0 )
                goto LABEL_162;
              v89 = *((_DWORD *)a4 + 10);
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
              LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), *(void **)a4, &v92);
              if ( (int)v13 >= 0 )
              {
                v25 = (__int64 (__fastcall *)(__int64, void *, char *, _DWORD *))*((_QWORD *)RenderAdapterForSession
                                                                                 + 387);
                v26 = *((_QWORD *)RenderAdapterForSession + 6);
                v110 = *(_OWORD *)(a4 + 40);
                LODWORD(v13) = v25(v26, v92, a4 + 8, a6);
              }
              DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              v27 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
              if ( !v27 )
                v27 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
              if ( !v27 && a6[4] >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v78 = &EventOPMGetConnectorType;
LABEL_153:
                  McTemplateK0ptpqq_EtwWriteTransfer(
                    v23,
                    (_DWORD)v78,
                    v24,
                    *((_QWORD *)RenderAdapterForSession + 6),
                    v14,
                    (char)v92,
                    a6[10],
                    v13);
                  goto LABEL_29;
                }
                goto LABEL_29;
              }
              v28 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
              if ( !v28 )
                v28 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
              if ( !v28 && a6[4] >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v78 = &EventOPMGetSupportedProtectionTypes;
                  goto LABEL_153;
                }
LABEL_29:
                v30 = (_QWORD *)WdLogNewEntry5_WdEvent();
                v30[3] = (int)v13;
                v30[4] = *((_QWORD *)RenderAdapterForSession + 6);
                v30[5] = v14;
                v30[6] = v89;
LABEL_43:
                WdLogEvent5_WdEvent(v30);
                v36 = v85;
                goto LABEL_44;
              }
              v29 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
              if ( !v29 )
                v29 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
              if ( !v29 && *((_DWORD *)a4 + 15) >= 4u && a6[4] >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0ptpqqq_EtwWriteTransfer(
                    v23,
                    (unsigned int)&EventOPMGetActualProtectionLevel,
                    v24,
                    *((_QWORD *)RenderAdapterForSession + 6),
                    v14,
                    (char)v92,
                    *((_DWORD *)a4 + 16),
                    a6[10],
                    v13);
                goto LABEL_29;
              }
              v21 = (char)v92;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0ptpjq_EtwWriteTransfer(
                v23,
                v22,
                v24,
                *((_QWORD *)RenderAdapterForSession + 6),
                v14,
                v21,
                (__int64)&v110,
                v13);
            goto LABEL_29;
          }
          v46 = v20 - 4;
          if ( v46 )
          {
            v47 = v46 - 4;
            if ( !v47 )
            {
              v91 = -1;
              v62 = 0;
              v108 = 0LL;
              v100 = 0LL;
              LOBYTE(v87) = 0;
              LODWORD(v13) = DpiPdoVerifyOpmParameters(2303135, (_DWORD)a4, a5, (_DWORD)v9, a7, 4112, 0);
              if ( (int)v13 >= 0 )
              {
                v87 = *((_DWORD *)a4 + 1026);
                LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
                if ( (int)v13 < 0 )
                  goto LABEL_162;
                v91 = *((_DWORD *)a4 + 6);
                DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
                if ( v12 )
                  KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
                DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
                v66 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), *(void **)a4, &v100);
                v62 = (char)v100;
                LODWORD(v13) = v66;
                if ( v66 >= 0 )
                {
                  v67 = (__int64 (__fastcall *)(__int64, void *, char *, _QWORD, char *))*((_QWORD *)RenderAdapterForSession
                                                                                         + 389);
                  v68 = *((_QWORD *)RenderAdapterForSession + 6);
                  v108 = *(_OWORD *)(a4 + 24);
                  LODWORD(v13) = v67(v68, v100, a4 + 8, v87, a4 + 4108);
                }
                DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
                if ( v12 )
                  KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
                DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
                DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
                v69 = *((_QWORD *)a4 + 3) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
                if ( !v69 )
                  v69 = *((_QWORD *)a4 + 4) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
                if ( !v69 && *((_DWORD *)a4 + 11) >= 0x10u )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0ptpqqq_EtwWriteTransfer(
                      v64,
                      (unsigned int)&EventOPMSetProtectionLevel,
                      v65,
                      *((_QWORD *)RenderAdapterForSession + 6),
                      v14,
                      v62,
                      *((_DWORD *)a4 + 12),
                      *((_DWORD *)a4 + 13),
                      v13);
                  v70 = (_QWORD *)WdLogNewEntry5_WdEvent();
                  v70[3] = (int)v13;
                  v70[4] = *((_QWORD *)RenderAdapterForSession + 6);
                  v70[5] = v14;
                  v70[6] = *((unsigned int *)a4 + 12);
                  WdLogEvent5_WdEvent(v70);
                  DpiOpmLogSetLevel(v13, *((_DWORD *)a4 + 12), *((_DWORD *)a4 + 13));
                }
              }
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0ptpjqq_EtwWriteTransfer(
                  v64,
                  v63,
                  v65,
                  *((_QWORD *)RenderAdapterForSession + 6),
                  v14,
                  v62,
                  (__int64)&v108,
                  v87,
                  v13);
              v45 = (_QWORD *)WdLogNewEntry5_WdEvent();
              v45[3] = (int)v13;
              v45[4] = *((_QWORD *)RenderAdapterForSession + 6);
              v45[5] = v14;
              v45[6] = v91;
              goto LABEL_68;
            }
            if ( v47 != 4 )
              goto LABEL_162;
            v41 = 0;
            v99 = 0LL;
            LODWORD(v13) = DpiPdoVerifyOpmParameters(2303139, (_DWORD)a4, a5, (_DWORD)v9, a7, 8, 0);
            if ( (int)v13 >= 0 )
            {
              v48 = *(void **)a4;
              LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              if ( (int)v13 < 0 )
                goto LABEL_162;
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
              v49 = DxgkOpmTranslateAndDestroyHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), v48, &v99);
              v41 = (char)v99;
              LODWORD(v13) = v49;
              if ( v49 >= 0 )
                LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *))RenderAdapterForSession + 390))(
                                 *((_QWORD *)RenderAdapterForSession + 6),
                                 v99);
              DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
              if ( v12 )
                KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
              DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            {
LABEL_67:
              v45 = (_QWORD *)WdLogNewEntry5_WdEvent();
              v45[3] = (int)v13;
              v45[4] = *((_QWORD *)RenderAdapterForSession + 6);
              v45[5] = v14;
              v45[6] = 0LL;
LABEL_68:
              WdLogEvent5_WdEvent(v45);
              v36 = 0;
LABEL_44:
              if ( (int)v13 >= 0 )
              {
                *v107 = v36;
                goto LABEL_46;
              }
LABEL_162:
              v80 = WdLogNewEntry5_WdWarning(v9, a2, a3);
              *(_QWORD *)(v80 + 24) = (int)v13;
              WdLogEvent5_WdWarning(v80);
              goto LABEL_46;
            }
            v61 = &EventOPMDestroyProtectedOutput;
LABEL_159:
            McTemplateK0ptpq_EtwWriteTransfer(
              v42,
              (_DWORD)v61,
              v43,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v41,
              v13);
            goto LABEL_67;
          }
          v85 = 4096;
          v71 = 0;
          v97 = 0LL;
          v109 = 0LL;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303131, (_DWORD)a4, a5, (_DWORD)v9, a7, 4104, 4096);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_162;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
            v75 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), *(void **)a4, &v97);
            v71 = (char)v97;
            LODWORD(v13) = v75;
            if ( v75 >= 0 )
            {
              v76 = (__int64 (__fastcall *)(__int64, void *, char *, _DWORD *))*((_QWORD *)RenderAdapterForSession + 388);
              v77 = *((_QWORD *)RenderAdapterForSession + 6);
              v109 = *(_OWORD *)(a4 + 24);
              LODWORD(v13) = v76(v77, v97, a4 + 8, a6);
            }
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ptpjq_EtwWriteTransfer(
              v73,
              v72,
              v74,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v71,
              (__int64)&v109,
              v13);
        }
        else
        {
          v31 = 0;
          v98 = 0LL;
          v85 = 16;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303119, (_DWORD)a4, a5, (_DWORD)v9, a7, 8, 16);
          if ( (int)v13 >= 0 )
          {
            v34 = *(void **)a4;
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_162;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487), 1LL);
            v35 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), v34, &v98);
            v31 = (char)v98;
            LODWORD(v13) = v35;
            if ( v35 >= 0 )
              LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *, _DWORD *))RenderAdapterForSession + 385))(
                               *((_QWORD *)RenderAdapterForSession + 6),
                               v98,
                               a6);
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ptpq_EtwWriteTransfer(
              v32,
              (unsigned int)&EventOPMGetRandomNumber,
              v33,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v31,
              v13);
        }
      }
      else
      {
        v50 = -1;
        v94 = 0LL;
        v102 = 0LL;
        v85 = 8;
        LODWORD(v13) = DpiPdoVerifyOpmParameters(2303115, (_DWORD)a4, a5, (_DWORD)v9, a7, 4, 8);
        if ( (int)v13 >= 0 )
        {
          v54 = *(_DWORD *)a4;
          if ( v54 == DXGKMDT_OPM_VOS_OPM_INDIRECT_DISPLAY && v86 )
          {
            LODWORD(v13) = -1073741198;
            v79 = (_QWORD *)WdLogNewEntry5_WdEvent();
            v79[3] = -1073741198LL;
            v79[4] = *((_QWORD *)RenderAdapterForSession + 6);
            v79[5] = v14;
            v79[6] = 0LL;
            WdLogEvent5_WdEvent(v79);
            goto LABEL_162;
          }
          v102 = a6;
          if ( v14 )
          {
            v90 = *((_DWORD *)a2 + 126);
            LODWORD(v13) = CreateProtectedOutputIndirectDisplay(
                             RenderAdapterForSession,
                             v103,
                             v54,
                             v90,
                             (void **)a6,
                             &v94);
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
            v90 = *((_DWORD *)v12 + 126);
            LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))RenderAdapterForSession + 384))(
                             *((_QWORD *)RenderAdapterForSession + 6),
                             v90,
                             (unsigned int)v54,
                             &v94);
            if ( (int)v13 >= 0 )
            {
              LODWORD(v13) = DxgkOpmCreateHandle(*((DXGADAPTER **)RenderAdapterForSession + 487), v94, (void **)a6);
              if ( (int)v13 < 0 )
              {
                (*((void (__fastcall **)(_QWORD, void *))RenderAdapterForSession + 390))(
                  *((_QWORD *)RenderAdapterForSession + 6),
                  v94);
                if ( (_DWORD)v13 == -1073741198 )
                  LODWORD(v13) = -1073741637;
              }
            }
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
            KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (unsigned int)dword_1C00AE9E8 > 5 && tlgKeywordOn((__int64)&dword_1C00AE9E8, 0x400000100000LL) )
          {
            CurrentProcess = PsGetCurrentProcess();
            ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
            v95 = v13;
            v104 = ProcessImageFileName;
            v96 = v54;
            v105 = 33556480LL;
            v106 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
              v83,
              (unsigned int)&unk_1C007E08C,
              v84,
              (unsigned int)&v106,
              (__int64)&v105,
              (__int64)&v96,
              (__int64)&v95,
              (__int64)&v104);
          }
          v50 = v90;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ptqppq_EtwWriteTransfer(
            v52,
            v51,
            v53,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            v50,
            (char)v94,
            *v102,
            v13);
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v30[3] = (int)v13;
    }
    else
    {
      v85 = 4;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303107, (_DWORD)a4, a5, (_DWORD)v9, a7, 4, 4);
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
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, _DWORD *))RenderAdapterForSession + 382))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v38,
              a6);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 487));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 487));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqtqq_EtwWriteTransfer(
          v39,
          (unsigned int)&EventOpmGetCertificateSize,
          v40,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v38,
          *a6,
          v13);
      v30 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v30[3] = v13;
    }
    v30[4] = *((_QWORD *)RenderAdapterForSession + 6);
    v30[5] = v14;
    v30[6] = 0LL;
    goto LABEL_43;
  }
LABEL_46:
  if ( v14 )
  {
    if ( *((_BYTE *)RenderAdapterForSession + 484) )
      DpiEnableD3Requests(*((_QWORD *)RenderAdapterForSession + 3));
    ExReleaseResourceLite(*((PERESOURCE *)RenderAdapterForSession + 21));
    KeLeaveCriticalRegion();
    if ( v93 )
      goto LABEL_170;
  }
  return (unsigned int)v13;
}
