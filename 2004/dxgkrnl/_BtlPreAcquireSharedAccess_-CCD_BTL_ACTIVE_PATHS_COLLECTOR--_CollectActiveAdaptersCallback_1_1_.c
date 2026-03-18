/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x1C0123D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009738 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0051A84 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0123560 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C012E6A4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdi
  struct VIDPN_MGR *v16; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  struct DMMVIDPN *v32; // [rsp+20h] [rbp-99h] BYREF
  __int64 v33; // [rsp+28h] [rbp-91h] BYREF
  __int64 v34; // [rsp+30h] [rbp-89h] BYREF
  __int64 v35; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v36[8]; // [rsp+40h] [rbp-79h] BYREF
  struct DXGADAPTER *v37; // [rsp+48h] [rbp-71h]
  char v38; // [rsp+50h] [rbp-69h]
  _BYTE v39[144]; // [rsp+60h] [rbp-59h] BYREF

  v37 = a1;
  v38 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  v4 = *((_QWORD *)a1 + 337);
  if ( v4 && *(_DWORD *)(v4 + 80) && *((_DWORD *)a1 + 50) == 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, v5);
    v6 = *(_QWORD *)(v5 + 88);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      v7 = *(_QWORD *)(v5 + 88);
      v34 = v7;
      if ( v7 && *(_QWORD *)(v7 + 136) )
      {
        auto_rc<DMMVIDPN const>::reset(&v34, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35 + 40), v8);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, a1, 0LL);
        v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
        LODWORD(v14) = v9;
        if ( v9 < 0 )
        {
          if ( v9 != -1073741130 )
            goto LABEL_14;
          v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
          v23[3] = a1;
          v23[4] = *((int *)a1 + 80);
          v23[5] = *((unsigned int *)a1 + 79);
          v23[6] = this;
        }
        else if ( !*((_BYTE *)a1 + 2609) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
        {
          v15 = *((_QWORD *)a1 + 337);
          if ( v15 )
          {
            v16 = *(struct VIDPN_MGR **)(v15 + 88);
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, (__int64)v16);
            v32 = 0LL;
            ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                       v16,
                                                       (__int64 *)&v32);
            v14 = ClientVidPnFromLastClientCommitedVidPn;
            if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
            {
              v24 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
              v24[3] = v14;
              v24[4] = v16;
              v25 = *(_QWORD *)this;
              v26 = *(_QWORD *)(*(_QWORD *)this + 64LL);
              v24[5] = v26;
              v27 = *((_QWORD *)v16 + 1);
              if ( !v27 )
              {
                v28 = WdLogNewEntry5_WdAssertion(v25, v26);
                WdLogEvent5_WdAssertion(v28);
                v27 = *((_QWORD *)v16 + 1);
              }
              v29 = *(int *)(*(_QWORD *)(v27 + 16) + 320LL);
              v24[6] = v29;
              v30 = *((_QWORD *)v16 + 1);
              if ( !v30 )
              {
                v31 = WdLogNewEntry5_WdAssertion(v29, v26);
                WdLogEvent5_WdAssertion(v31);
                v30 = *((_QWORD *)v16 + 1);
              }
              v24[7] = *(unsigned int *)(*(_QWORD *)(v30 + 16) + 316LL);
              WdLogEvent5_WdError(v24);
            }
            else
            {
              LODWORD(v14) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v32, 1);
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40), v20);
            goto LABEL_14;
          }
        }
        LODWORD(v14) = 0;
LABEL_14:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39, v10);
        goto LABEL_18;
      }
    }
    else
    {
      v34 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v34, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35 + 40), v21);
  }
  LODWORD(v14) = 0;
LABEL_18:
  if ( v38 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  return (unsigned int)v14;
}
