/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C00D83D0
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0007A9C (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009A48 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C00D8504 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rbx
  struct DXGADAPTER **v11; // rax
  int PairingAdapters; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  struct _KTHREAD **v16; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v18; // rcx
  unsigned int v19; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  DXGADAPTER *v24; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  DXGADAPTER *v26; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v28; // [rsp+68h] [rbp-18h]
  int v29; // [rsp+70h] [rbp-10h]
  struct DXGADAPTER *v30; // [rsp+A0h] [rbp+20h] BYREF

  v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v30 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v26, (unsigned int)v3, Current, &v30, 1);
    v10 = v30;
    if ( v30 )
    {
      v24 = 0LL;
      v11 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v24, v7);
      PairingAdapters = DxgkpGetPairingAdapters(v10, 0, v11, &v25, 0LL, 0LL, 0);
      v15 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v23 + 24) = v10;
        *(_QWORD *)(v23 + 32) = v15;
        WdLogEvent5_WdError(v23);
        v19 = v15;
      }
      else
      {
        v16 = (struct _KTHREAD **)*((_QWORD *)v24 + 335);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, v16 + 105, 0);
        DXGPUSHLOCK::AcquireShared(v28);
        v29 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                     (ADAPTER_RENDER *)v16,
                                     (struct DXGAUTOPUSHLOCK *)v27,
                                     1);
        if ( PresentHistoryTokenQueue )
        {
          v18 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v18;
          ObfReferenceObject(v18);
          v19 = 0;
        }
        else
        {
          *a2 = 0LL;
          v19 = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
      }
      DXGADAPTER_REFERENCE::Assign(&v24, 0LL);
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      v19 = -1073741811;
      *(_QWORD *)(v22 + 24) = v3;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
    }
    if ( v26 )
      DXGADAPTER::ReleaseReferenceNoTracking(v26);
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v6, v5);
    v19 = -1073741811;
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
  }
  return v19;
}
