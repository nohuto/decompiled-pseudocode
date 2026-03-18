/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C0152250
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009F98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0050A74 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00EB900 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
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
  DXGADAPTER *v37; // [rsp+48h] [rbp-71h]
  char v38; // [rsp+50h] [rbp-69h]
  _BYTE v39[144]; // [rsp+60h] [rbp-59h] BYREF

  v37 = this;
  v38 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  v4 = *((_QWORD *)this + 334);
  if ( v4 && *(_DWORD *)(v4 + 80) && *((_DWORD *)this + 50) == 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 334) + 88LL);
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
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, this, 0LL);
        v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
        LODWORD(v14) = v9;
        if ( v9 < 0 )
        {
          if ( v9 != -1073741130 )
            goto LABEL_13;
          v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
          v23[3] = this;
          v23[4] = *((int *)this + 80);
          v23[5] = *((unsigned int *)this + 79);
          v23[6] = a2;
        }
        else if ( !DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled() )
        {
          v15 = *((_QWORD *)this + 334);
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
              v25 = *(_QWORD *)a2;
              v26 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
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
              LODWORD(v14) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v32, 1);
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40), v20);
            goto LABEL_13;
          }
        }
        LODWORD(v14) = 0;
LABEL_13:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39, v10);
        goto LABEL_17;
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
LABEL_17:
  if ( v38 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  return (unsigned int)v14;
}
