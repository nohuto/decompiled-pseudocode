/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C01D9F50
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C001C154 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C01DA08C (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v7; // rsi
  struct DXGADAPTER **v8; // rax
  int PairingAdapters; // eax
  __int64 v10; // r14
  struct _KTHREAD **v11; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v13; // rcx
  unsigned int v14; // ebx
  __int64 v16; // rdx
  DXGADAPTER *v17; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp+Fh] BYREF
  DXGADAPTER *v19; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v20[8]; // [rsp+78h] [rbp+27h] BYREF
  DXGPUSHLOCK *v21; // [rsp+80h] [rbp+2Fh]
  int v22; // [rsp+88h] [rbp+37h]
  struct DXGADAPTER *v23; // [rsp+C8h] [rbp+77h] BYREF

  v5 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, (__int64)a2, a3, a4);
  if ( Current )
  {
    v23 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v19, v5, Current, &v23, 1);
    v7 = v23;
    if ( v23 )
    {
      v17 = 0LL;
      v8 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v17);
      PairingAdapters = DxgkpGetPairingAdapters(v7, 0, v8, &v18, 0LL, 0LL, 0);
      v10 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry2(2LL, v7, PairingAdapters);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get pairing adapters from adapter 0x%I64x for DxgkGetPresentHistoryReadyEvent (Status = 0x%I64x)!",
          (__int64)v7,
          v10,
          0LL,
          0LL,
          0LL);
        v14 = v10;
      }
      else
      {
        v11 = (struct _KTHREAD **)*((_QWORD *)v17 + 350);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, v11 + 108, 0);
        DXGPUSHLOCK::AcquireShared(v21);
        v22 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                     (ADAPTER_RENDER *)v11,
                                     (struct DXGAUTOPUSHLOCK *)v20,
                                     1);
        if ( PresentHistoryTokenQueue )
        {
          v13 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v13;
          ObfReferenceObject(v13);
          v14 = 0;
        }
        else
        {
          *a2 = 0LL;
          v14 = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
      }
      DXGADAPTER_REFERENCE::Assign(&v17, 0LL);
    }
    else
    {
      v16 = v5;
      v14 = -1073741811;
      WdLogSingleEntry2(3LL, v16, -1073741811LL);
    }
    if ( v19 )
      DXGADAPTER::ReleaseReference(v19);
  }
  else
  {
    v14 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v14;
}
