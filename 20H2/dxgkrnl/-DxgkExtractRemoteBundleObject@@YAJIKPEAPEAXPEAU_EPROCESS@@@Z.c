/*
 * XREFs of ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0289410
 * Callers:
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C028ADC8 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?VailDRTProcessExtractWorker@@YAXPEAX@Z @ 0x1C02B48A0 (-VailDRTProcessExtractWorker@@YAXPEAX@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B4930 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A170 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0284790 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C02847F8 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0289B80 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkExtractRemoteBundleObject(__int64 a1, __int64 a2, void **a3, struct _EPROCESS *a4)
{
  __int64 v5; // r14
  unsigned int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // al
  struct DXGVAILOBJECT *v17; // rsi
  struct DXGPROCESS *v18; // rax
  struct _KTHREAD **v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int BundleObject; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE v36[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v37[8]; // [rsp+40h] [rbp-48h] BYREF
  DXGPUSHLOCK *v38; // [rsp+48h] [rbp-40h]
  int v39; // [rsp+50h] [rbp-38h]

  v5 = (unsigned int)a1;
  v7 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    KeEnterCriticalRegion();
    v16 = *((_BYTE *)Current + 347);
    v17 = 0LL;
    if ( (v16 & 0x10) != 0 )
    {
      if ( (v16 & 0x20) != 0 )
        v18 = (struct DXGPROCESS *)*((_QWORD *)Current + 62);
      else
        v18 = Current;
      v19 = (struct _KTHREAD **)*((_QWORD *)v18 + 62);
      if ( !v19 )
        goto LABEL_14;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37, v19 + 8, 0);
      DXGPUSHLOCK::AcquireExclusive(v38);
      v39 = 2;
      v17 = DXGVIRTUALMACHINE::ReferenceVailObject(v19, v20);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
      if ( *((_QWORD *)Current + 60) )
        v17 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
      if ( v36[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36, v13);
    }
    if ( v17 )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v17 + 10) )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v17 + 13) + 64LL)) )
        {
          BundleObject = DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
                           *((DXG_HOST_REMOTEOBJECTCHANNEL **)v17 + 14),
                           v5,
                           v7,
                           a3,
                           a4);
          v12 = BundleObject;
          if ( BundleObject < 0 )
          {
            v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
            *(_QWORD *)(v32 + 24) = v5;
            *(_QWORD *)(v32 + 32) = v12;
            WdLogEvent5_WdWarning(v32);
          }
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v17 + 13) + 64LL));
        }
        else
        {
          LODWORD(v12) = -2147483611;
          v33 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v33 + 24) = 2LL;
          *(_QWORD *)(v33 + 32) = -2147483611LL;
          WdLogEvent5_WdWarning(v33);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v17 + 10);
      }
      else
      {
        LODWORD(v12) = -2147483611;
        v34 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v34 + 24) = 1LL;
        *(_QWORD *)(v34 + 32) = -2147483611LL;
        WdLogEvent5_WdWarning(v34);
      }
      DxgkCompositionObject::Release(v17);
      goto LABEL_24;
    }
LABEL_14:
    LODWORD(v12) = -1073741811;
    v21 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v21 + 24) = Current;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
LABEL_24:
    KeLeaveCriticalRegion();
    return (unsigned int)v12;
  }
  v11 = WdLogNewEntry5_WdError(v9, v8);
  LODWORD(v12) = -1073741811;
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v11);
  return (unsigned int)v12;
}
