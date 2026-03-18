/*
 * XREFs of ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C018F3FC
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     IsPTPIVEnabled @ 0x1C005F440 (IsPTPIVEnabled.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C0189110 (-IsContainer@CInputDest@@QEBA_NXZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01A1EC4 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     IsPenIVEnabled @ 0x1C01BCEF0 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BCF70 (IsTouchIVEnabled.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01BD7A0 (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01BF0E8 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckandDeliverContainerInput(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4)
{
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
  __int64 v22; // r8
  int v23; // r9d
  unsigned int v24; // r15d
  _WORD *v25; // r14
  int v26; // eax
  unsigned int v27; // ebx
  struct CContainerPointerInput *v28; // rdx
  unsigned int v29; // r12d
  unsigned int v30; // r15d
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rbx
  _OWORD *v34; // rax
  __int128 v35; // xmm1
  __int64 v36; // rcx
  unsigned int v38; // [rsp+40h] [rbp-99h]
  int v39; // [rsp+48h] [rbp-91h]
  size_t v40; // [rsp+50h] [rbp-89h]
  _QWORD v41[2]; // [rsp+58h] [rbp-81h] BYREF
  int v42; // [rsp+68h] [rbp-71h]
  int v43; // [rsp+6Ch] [rbp-6Dh]
  _QWORD v44[16]; // [rsp+70h] [rbp-69h] BYREF

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
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
        if ( CTouchProcessor::ShouldGenerateMessagesForNode(v7, a2, (const struct CPointerInfoNode *)v9, a4) )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (int)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
            0x1244BCEu,
            0,
            0,
            (__int64)&Feature_BrokeredDisplays_TestMode_logged_traits,
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
        memset(v44, 0, sizeof(v44));
        v11 = *((unsigned int *)a2 + 14);
        if ( *((void **)a2 + 8) != TouchExtensibility::hDeviceUser )
        {
          v12 = *(_QWORD *)(*((_QWORD *)a2 + 19) + 16LL);
          if ( a3 )
            v13 = *(_QWORD *)(v12 + 24);
          else
            v13 = *(_QWORD *)(v12 + 16);
          v44[4] = v13;
        }
        v14 = *((_QWORD *)a2 + 16);
        HIDWORD(v44[11]) = 0;
        v44[12] = 0LL;
        v44[14] = 0LL;
        v15 = 24 * v11 + 128;
        v44[10] = a3;
        HIDWORD(v44[3]) = v11;
        v39 = v15;
        v16 = *(_OWORD *)((char *)a2 + 88);
        *(_OWORD *)&v44[5] = *(_OWORD *)((char *)a2 + 72);
        v44[9] = *((_QWORD *)a2 + 13);
        *(_OWORD *)&v44[7] = v16;
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
          v39 = v15;
        }
        v19 = 192LL * v8;
        if ( v19 > 0xFFFFFFFF )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v23 = 340;
          goto LABEL_51;
        }
        v20 = (unsigned int)v19;
        v40 = (unsigned int)v19;
        v21 = Win32AllocPool((unsigned int)v19, 0x6E705649u);
        if ( !v21 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v23 = 341;
LABEL_51:
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v14,
            7,
            v23,
            (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
          return;
        }
        v24 = 0;
        v38 = 0;
        if ( *((_DWORD *)a2 + 12) )
        {
          v25 = (_WORD *)(*((_QWORD *)a2 + 17) + 472LL);
          do
          {
            v26 = *((_DWORD *)v25 - 117);
            if ( (v26 & 0x2000) != 0 && (v26 & 0x4000) == 0 )
            {
              v27 = 0;
              memset((void *)v21, 0, v20);
              v29 = v24;
              if ( v24 < *((_DWORD *)a2 + 12) )
              {
                v30 = 0;
                do
                {
                  v31 = *((_QWORD *)a2 + 17);
                  v32 = 480LL * v29;
                  v28 = (struct CContainerPointerInput *)*(unsigned int *)(v32 + v31 + 4);
                  if ( ((unsigned __int16)v28 & 0x2000) != 0
                    && ((unsigned __int16)v28 & 0x4000) == 0
                    && *v25 == *(_WORD *)(v32 + v31 + 472)
                    && v25[1] == *(_WORD *)(v32 + v31 + 474) )
                  {
                    *(_DWORD *)(v32 + v31 + 4) = (unsigned int)v28 | 0x4000;
                    v33 = v21 + 192LL * v30;
                    *(_DWORD *)v33 = *(_DWORD *)(v32 + v31 + 156);
                    v34 = (_OWORD *)(v32 + v31 + 160);
                    *(_OWORD *)(v33 + 8) = *v34;
                    *(_OWORD *)(v33 + 24) = v34[1];
                    *(_OWORD *)(v33 + 40) = v34[2];
                    *(_OWORD *)(v33 + 56) = v34[3];
                    *(_OWORD *)(v33 + 72) = v34[4];
                    *(_OWORD *)(v33 + 88) = v34[5];
                    *(_OWORD *)(v33 + 104) = v34[6];
                    v35 = v34[7];
                    v34 += 8;
                    *(_OWORD *)(v33 + 120) = v35;
                    *(_OWORD *)(v33 + 136) = *v34;
                    *(_OWORD *)(v33 + 152) = v34[1];
                    *(_OWORD *)(v33 + 168) = v34[2];
                    *(_QWORD *)(v33 + 184) = *((_QWORD *)v34 + 6);
                    *(_DWORD *)(v33 + 28) &= 0xFF87FFFE;
                    wil_details_FeatureReporting_ReportUsageToService(
                      (int)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
                      0x1244BCEu,
                      0,
                      0,
                      (__int64)&Feature_BrokeredDisplays_TestMode_logged_traits,
                      0,
                      3);
                    CDesktopInputTransform::TransformPointerCoordinates((struct tagRIMPOINTERINFONODE *)v33);
                    ++v30;
                  }
                  ++v29;
                }
                while ( v29 < *((_DWORD *)a2 + 12) );
                v15 = v39;
                v27 = v30;
                v24 = v38;
              }
              v43 = 0;
              v15 += 192 * v27;
              LODWORD(v44[3]) = v27;
              v44[15] = v21;
              v41[0] = v44;
              LODWORD(v44[0]) = v15;
              v42 = *(_DWORD *)v25;
              v39 = v15;
              v41[1] = a2;
              IVRootDeliver::Pointer::SendTouchInput((IVRootDeliver::Pointer *)v41, v28);
              if ( (*(_DWORD *)(v21 + 28) & 0x10000) != 0 )
              {
                v36 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(v21 + 32), 19) + 480);
                if ( v36 )
                  v36 = *(_QWORD *)(v36 + 1000);
                v20 = v40;
                if ( v36 )
                {
                  *(_DWORD *)(v36 + 452) |= 2u;
                  *(_DWORD *)(v36 + 448) = v42;
                }
              }
              else
              {
                v20 = v40;
              }
            }
            ++v24;
            v25 += 240;
            v38 = v24;
          }
          while ( v24 < *((_DWORD *)a2 + 12) );
        }
        Win32FreePool(v21, v14, v22);
      }
    }
  }
}
