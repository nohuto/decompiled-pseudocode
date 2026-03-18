/*
 * XREFs of ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01871BC
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     IsPTPIVEnabled @ 0x1C00AF270 (IsPTPIVEnabled.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C0180ED0 (-IsContainer@CInputDest@@QEBA_NXZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0199C64 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     IsPenIVEnabled @ 0x1C01B4E20 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B4EA0 (IsTouchIVEnabled.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01B56D0 (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01B7018 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckandDeliverContainerInput(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r12d
  int v6; // ebx
  CTouchProcessor *v7; // rcx
  unsigned int v8; // esi
  _DWORD *v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r13d
  __int128 v16; // xmm1
  __int64 v17; // r8
  int v18; // eax
  unsigned __int64 v19; // rcx
  size_t v20; // r12
  __int64 v21; // rsi
  int v22; // r9d
  unsigned int v23; // r15d
  _WORD *v24; // r14
  int v25; // eax
  unsigned int v26; // ebx
  struct CContainerPointerInput *v27; // rdx
  unsigned int v28; // r12d
  unsigned int v29; // r15d
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rbx
  _OWORD *v33; // rax
  __int128 v34; // xmm1
  __int64 v35; // rcx
  unsigned int v36; // [rsp+40h] [rbp-99h]
  unsigned int v37; // [rsp+40h] [rbp-99h]
  int v38; // [rsp+48h] [rbp-91h]
  size_t v39; // [rsp+50h] [rbp-89h]
  _QWORD v40[2]; // [rsp+58h] [rbp-81h] BYREF
  int v41; // [rsp+68h] [rbp-71h]
  int v42; // [rsp+6Ch] [rbp-6Dh]
  _QWORD v43[16]; // [rsp+70h] [rbp-69h] BYREF

  v4 = a4;
  v36 = a3;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v6 = *(_DWORD *)(*((_QWORD *)a2 + 17) + 168LL);
  if ( v6 == 2 && (unsigned __int8)IsTouchIVEnabled()
    || v6 == 3 && (unsigned __int8)IsPenIVEnabled()
    || v6 == 5 && IsPTPIVEnabled() )
  {
    v8 = 0;
    v9 = (_DWORD *)*((_QWORD *)a2 + 17);
    v10 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      do
      {
        if ( CTouchProcessor::ShouldGenerateMessagesForNode(v7, a2, (const struct CPointerInfoNode *)v9, v4) )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
            0x1244BCEu,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_TestMode_logged_traits,
            0,
            3);
          if ( CInputDest::IsContainer((CInputDest *)(v9 + 88)) )
          {
            *v9 |= 0x1000u;
            ++v8;
            v7 = (CTouchProcessor *)(unsigned int)v9[115];
            v9[1] |= 0x2000u;
            v9[118] = (_DWORD)v7;
          }
        }
        ++v10;
        v9 += 120;
      }
      while ( v10 < *((_DWORD *)a2 + 12) );
      if ( v8 )
      {
        memset(v43, 0, sizeof(v43));
        v11 = *((unsigned int *)a2 + 14);
        if ( *((void **)a2 + 8) != TouchExtensibility::hDeviceUser )
        {
          v12 = *(_QWORD *)(*((_QWORD *)a2 + 19) + 16LL);
          if ( v36 )
            v13 = *(_QWORD *)(v12 + 24);
          else
            v13 = *(_QWORD *)(v12 + 16);
          v43[4] = v13;
        }
        v14 = *((_QWORD *)a2 + 16);
        HIDWORD(v43[11]) = 0;
        v43[12] = 0LL;
        v43[14] = 0LL;
        v15 = 24 * v11 + 128;
        v43[10] = v36;
        HIDWORD(v43[3]) = v11;
        v38 = v15;
        v16 = *(_OWORD *)((char *)a2 + 88);
        *(_OWORD *)&v43[5] = *(_OWORD *)((char *)a2 + 72);
        v43[9] = *((_QWORD *)a2 + 13);
        *(_OWORD *)&v43[7] = v16;
        if ( (_DWORD)v11 )
        {
          v17 = v11;
          do
          {
            v18 = *(_DWORD *)(v14 + 8);
            v14 = *(_QWORD *)(v14 + 24);
            v15 += (v18 + 7) & 0xFFFFFFF8;
            --v17;
          }
          while ( v17 );
          v38 = v15;
        }
        v19 = 192LL * v8;
        if ( v19 > 0xFFFFFFFF )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v22 = 340;
          goto LABEL_51;
        }
        v20 = (unsigned int)v19;
        v39 = (unsigned int)v19;
        v21 = Win32AllocPool((unsigned int)v19, 0x6E705649u);
        if ( !v21 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v22 = 341;
LABEL_51:
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v14,
            7,
            v22,
            (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
          return;
        }
        v23 = 0;
        v37 = 0;
        if ( *((_DWORD *)a2 + 12) )
        {
          v24 = (_WORD *)(*((_QWORD *)a2 + 17) + 472LL);
          do
          {
            v25 = *((_DWORD *)v24 - 117);
            if ( (v25 & 0x2000) != 0 && (v25 & 0x4000) == 0 )
            {
              v26 = 0;
              memset((void *)v21, 0, v20);
              v28 = v23;
              if ( v23 < *((_DWORD *)a2 + 12) )
              {
                v29 = 0;
                do
                {
                  v30 = *((_QWORD *)a2 + 17);
                  v31 = 480LL * v28;
                  v27 = (struct CContainerPointerInput *)*(unsigned int *)(v31 + v30 + 4);
                  if ( ((unsigned __int16)v27 & 0x2000) != 0
                    && ((unsigned __int16)v27 & 0x4000) == 0
                    && *v24 == *(_WORD *)(v31 + v30 + 472)
                    && v24[1] == *(_WORD *)(v31 + v30 + 474) )
                  {
                    *(_DWORD *)(v31 + v30 + 4) = (unsigned int)v27 | 0x4000;
                    v32 = v21 + 192LL * v29;
                    *(_DWORD *)v32 = *(_DWORD *)(v31 + v30 + 156);
                    v33 = (_OWORD *)(v31 + v30 + 160);
                    *(_OWORD *)(v32 + 8) = *v33;
                    *(_OWORD *)(v32 + 24) = v33[1];
                    *(_OWORD *)(v32 + 40) = v33[2];
                    *(_OWORD *)(v32 + 56) = v33[3];
                    *(_OWORD *)(v32 + 72) = v33[4];
                    *(_OWORD *)(v32 + 88) = v33[5];
                    *(_OWORD *)(v32 + 104) = v33[6];
                    v34 = v33[7];
                    v33 += 8;
                    *(_OWORD *)(v32 + 120) = v34;
                    *(_OWORD *)(v32 + 136) = *v33;
                    *(_OWORD *)(v32 + 152) = v33[1];
                    *(_OWORD *)(v32 + 168) = v33[2];
                    *(_QWORD *)(v32 + 184) = *((_QWORD *)v33 + 6);
                    *(_DWORD *)(v32 + 28) &= 0xFF87FFFE;
                    wil_details_FeatureReporting_ReportUsageToService(
                      (__int64)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
                      0x1244BCEu,
                      0LL,
                      0LL,
                      (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_TestMode_logged_traits,
                      0,
                      3);
                    CDesktopInputTransform::TransformPointerCoordinates((struct tagRIMPOINTERINFONODE *)v32);
                    ++v29;
                  }
                  ++v28;
                }
                while ( v28 < *((_DWORD *)a2 + 12) );
                v15 = v38;
                v26 = v29;
                v23 = v37;
              }
              v42 = 0;
              v15 += 192 * v26;
              LODWORD(v43[3]) = v26;
              v43[15] = v21;
              v40[0] = v43;
              LODWORD(v43[0]) = v15;
              v41 = *(_DWORD *)v24;
              v38 = v15;
              v40[1] = a2;
              IVRootDeliver::Pointer::SendTouchInput((IVRootDeliver::Pointer *)v40, v27);
              if ( (*(_DWORD *)(v21 + 28) & 0x10000) != 0 )
              {
                v35 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(v21 + 32), 19) + 480);
                if ( v35 )
                  v35 = *(_QWORD *)(v35 + 1000);
                v20 = v39;
                if ( v35 )
                {
                  *(_DWORD *)(v35 + 452) |= 2u;
                  *(_DWORD *)(v35 + 448) = v41;
                }
              }
              else
              {
                v20 = v39;
              }
            }
            ++v23;
            v24 += 240;
            v37 = v23;
          }
          while ( v23 < *((_DWORD *)a2 + 12) );
        }
        Win32FreePool(v21);
      }
    }
  }
}
