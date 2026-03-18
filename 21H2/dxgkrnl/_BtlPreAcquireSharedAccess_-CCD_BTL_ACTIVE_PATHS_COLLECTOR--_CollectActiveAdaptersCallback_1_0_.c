/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C01E24A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
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

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  struct DMMVIDPN *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  struct VIDPN_MGR *v13; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  _QWORD *v16; // rax
  __int64 v17; // rax
  struct DMMVIDPN *v18; // [rsp+30h] [rbp-89h] BYREF
  __int64 v19; // [rsp+38h] [rbp-81h] BYREF
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v21[8]; // [rsp+48h] [rbp-71h] BYREF
  DXGADAPTER *v22; // [rsp+50h] [rbp-69h]
  char v23; // [rsp+58h] [rbp-61h]
  _BYTE v24[144]; // [rsp+60h] [rbp-59h] BYREF

  v22 = this;
  v23 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  v4 = *((_QWORD *)this + 349);
  if ( v4 && *(_DWORD *)(v4 + 96) && *((_DWORD *)this + 50) == 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 349) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, v5);
    v6 = *(_QWORD *)(v5 + 128);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      v7 = *(struct DMMVIDPN **)(v5 + 128);
      v18 = v7;
      if ( v7 && *((_QWORD *)v7 + 17) )
      {
        auto_rc<DMMVIDPN const>::reset((__int64 *)&v18, 0LL);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, this, 0LL);
        v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
        LODWORD(v11) = v8;
        if ( v8 < 0 )
        {
          if ( v8 != -1073741130 )
            goto LABEL_13;
          v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
          v16[3] = this;
          v16[4] = *((int *)this + 102);
          v16[5] = *((unsigned int *)this + 101);
          v16[6] = a2;
        }
        else if ( !DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled() )
        {
          v12 = *((_QWORD *)this + 349);
          if ( v12 )
          {
            v13 = *(struct VIDPN_MGR **)(v12 + 104);
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, (__int64)v13);
            v18 = 0LL;
            ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                       v13,
                                                       (__int64 *)&v18);
            v11 = ClientVidPnFromLastClientCommitedVidPn;
            if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
            {
              v17 = *((_QWORD *)v13 + 1);
              if ( !v17 )
              {
                WdLogSingleEntry0(1LL);
                v17 = *((_QWORD *)v13 + 1);
              }
              WdLogSingleEntry5(
                2LL,
                v11,
                v13,
                *(_QWORD *)(*(_QWORD *)a2 + 64LL),
                *(int *)(*(_QWORD *)(v17 + 16) + 408LL),
                *(unsigned int *)(*(_QWORD *)(v17 + 16) + 404LL));
            }
            else
            {
              LODWORD(v11) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v18, 1);
              if ( (int)v11 >= 0 )
              {
                auto_rc<DMMVIDPN>::reset((__int64 *)&v18, 0LL);
                DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
LABEL_13:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
                goto LABEL_17;
              }
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)&v18, 0LL);
            EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19);
            goto LABEL_13;
          }
        }
        LODWORD(v11) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v18 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v18, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
  }
  LODWORD(v11) = 0;
LABEL_17:
  if ( v23 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  return (unsigned int)v11;
}
