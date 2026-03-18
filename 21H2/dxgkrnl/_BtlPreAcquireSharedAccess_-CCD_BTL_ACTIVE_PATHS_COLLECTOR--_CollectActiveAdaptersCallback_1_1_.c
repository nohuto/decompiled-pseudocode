/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x1C01A21A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000F8B8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C002C514 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00601EC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C01AB8B4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  struct DMMVIDPN *v7; // rax
  struct DXGADAPTER *const v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  struct VIDPN_MGR *v14; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  _QWORD *v17; // rax
  __int64 v18; // rax
  struct DMMVIDPN *v19; // [rsp+30h] [rbp-89h] BYREF
  __int64 v20; // [rsp+38h] [rbp-81h] BYREF
  __int64 v21; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v22[8]; // [rsp+48h] [rbp-71h] BYREF
  DXGADAPTER *v23; // [rsp+50h] [rbp-69h]
  char v24; // [rsp+58h] [rbp-61h]
  _BYTE v25[8]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v26[64]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v27[72]; // [rsp+A8h] [rbp-11h] BYREF

  v23 = this;
  v24 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  v4 = *((_QWORD *)this + 349);
  if ( v4 && *(_DWORD *)(v4 + 96) && *((_DWORD *)this + 50) == 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 349) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, v5);
    v6 = *(_QWORD *)(v5 + 128);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      v7 = *(struct DMMVIDPN **)(v5 + 128);
      v19 = v7;
      if ( v7 && *((_QWORD *)v7 + 17) )
      {
        auto_rc<DMMVIDPN const>::reset((__int64 *)&v19, 0LL);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
        v25[1] = 0;
        COREACCESS::COREACCESS((COREACCESS *)v26, this);
        COREACCESS::COREACCESS((COREACCESS *)v27, v8);
        v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL);
        LODWORD(v12) = v9;
        if ( v9 < 0 )
        {
          if ( v9 != -1073741130 )
            goto LABEL_14;
          v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
          v17[3] = this;
          v17[4] = *((int *)this + 102);
          v17[5] = *((unsigned int *)this + 101);
          v17[6] = a2;
        }
        else if ( !*((_BYTE *)this + 2705) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
        {
          v13 = *((_QWORD *)this + 349);
          if ( v13 )
          {
            v14 = *(struct VIDPN_MGR **)(v13 + 104);
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, (__int64)v14);
            v19 = 0LL;
            ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v14);
            v12 = ClientVidPnFromLastClientCommitedVidPn;
            if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
            {
              v18 = *((_QWORD *)v14 + 1);
              if ( !v18 )
              {
                WdLogSingleEntry0(1LL);
                v18 = *((_QWORD *)v14 + 1);
              }
              WdLogSingleEntry5(
                2LL,
                v12,
                v14,
                *(_QWORD *)(*(_QWORD *)a2 + 64LL),
                *(int *)(*(_QWORD *)(v18 + 16) + 408LL),
                *(unsigned int *)(*(_QWORD *)(v18 + 16) + 404LL));
            }
            else
            {
              LODWORD(v12) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v19, 1);
              if ( (int)v12 >= 0 )
              {
                auto_rc<DMMVIDPN>::reset((__int64 *)&v19, 0LL);
                DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
LABEL_14:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
                goto LABEL_18;
              }
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)&v19, 0LL);
            EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20);
            goto LABEL_14;
          }
        }
        LODWORD(v12) = 0;
        goto LABEL_14;
      }
    }
    else
    {
      v19 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v19, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
  }
  LODWORD(v12) = 0;
LABEL_18:
  if ( v24 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  return (unsigned int)v12;
}
