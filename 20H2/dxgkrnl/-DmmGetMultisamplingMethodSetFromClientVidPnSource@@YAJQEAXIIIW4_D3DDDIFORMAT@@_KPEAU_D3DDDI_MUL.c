/*
 * XREFs of ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02DBDB8
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C025D710 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008208 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C000A1B8 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C010E7C4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01214E4 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01223E0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        struct _D3DDDI_MULTISAMPLINGMETHOD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // r12
  unsigned __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  struct VIDPN_MGR *v17; // r13
  __int64 v18; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  DMMVIDPNSOURCEMODESET *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r13
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned __int64 v49; // rbx
  size_t v50; // r8
  unsigned __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  DMMVIDPNSOURCEMODESET *v57; // [rsp+30h] [rbp-10h] BYREF
  __int64 v58; // [rsp+38h] [rbp-8h] BYREF
  DXGK_ENUM_PIVOT v59; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v60; // [rsp+90h] [rbp+50h]
  unsigned int v61; // [rsp+98h] [rbp+58h]

  v61 = a4;
  v60 = a3;
  v8 = (unsigned int)a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)this + 337);
  if ( !v16 )
  {
    v11 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v11 + 24) = this;
    goto LABEL_7;
  }
  v17 = *(struct VIDPN_MGR **)(v16 + 88);
  if ( v17 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v58, *(_QWORD *)(v16 + 88));
    a8 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v17,
                                               (__int64 *)&a8);
    v22 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
    {
      v24 = (unsigned __int64)a8;
      v25 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a8[38], v8);
      v28 = v25;
      if ( v25 )
      {
        v30 = *(_QWORD *)(v25 + 104);
        if ( v30 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 96));
          v31 = *(DMMVIDPNSOURCEMODESET **)(v28 + 104);
          v24 = (unsigned __int64)a8;
        }
        else
        {
          v31 = 0LL;
        }
        v32 = *((_QWORD *)v31 + 18);
        v57 = v31;
        if ( v32 )
        {
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v31,
                        v60,
                        v61,
                        a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v32 + 72));
          if ( BestMatch )
          {
            v38 = DMMVIDPNSOURCEMODESET::PinMode(v31, *((unsigned int *)BestMatch + 6));
            v22 = v38;
            if ( v38 >= 0 )
            {
              v59.VidPnTargetId = -1;
              v59.VidPnSourceId = v8;
              v42 = VIDPN_MGR::FormalizeVidPnChange(
                      (__int64)v17,
                      (D3DKMDT_HVIDPN)(v24 & -(__int64)(v24 != -88LL)),
                      3LL,
                      1,
                      &v59);
              v46 = v42;
              if ( v42 >= 0 )
              {
                v49 = *(_QWORD *)(v28 + 168) >> 3;
                v50 = 8 * v49;
                if ( v10 )
                  *v10 = v50;
                v51 = a6;
                if ( a6 >= v49 )
                {
                  if ( a7 )
                    memmove(a7, *(const void **)(v28 + 160), v50);
                  LODWORD(v22) = 0;
                }
                else
                {
                  v52 = WdLogNewEntry5_WdDmmEvent(v44, v43);
                  *(_QWORD *)(v52 + 24) = v51;
                  *(_QWORD *)(v52 + 32) = v49;
                  WdLogEvent5_WdDmmEvent(v52);
                  if ( !v10 )
                  {
                    v55 = WdLogNewEntry5_WdAssertion(v54, v53);
                    WdLogEvent5_WdAssertion(v55);
                  }
                  LODWORD(v22) = -1073741789;
                }
              }
              else
              {
                if ( v42 == -1071774970 )
                {
                  v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
                  v47[3] = v24;
                  v47[4] = v8;
                  v47[5] = this;
                  WdLogEvent5_WdWarning(v47);
                }
                else
                {
                  v48 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
                  v48[3] = v60;
                  v48[4] = v61;
                  v48[5] = a5;
                  v48[6] = v8;
                  v48[7] = v46;
                  WdLogEvent5_WdError(v48);
                }
                LODWORD(v22) = v46;
              }
            }
            else
            {
              v41 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
              v41[4] = v60;
              v41[5] = v61;
              v41[6] = a5;
              v41[3] = v8;
              v41[7] = v22;
              WdLogEvent5_WdError(v41);
            }
          }
          else
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v36, v35);
            v37[3] = v60;
            v37[4] = v61;
            v37[5] = a5;
            v37[6] = v8;
            v37[7] = this;
            WdLogEvent5_WdDmmEvent(v37);
            LODWORD(v22) = -1071774970;
          }
        }
        else
        {
          v33 = WdLogNewEntry5_WdError(v27, v26);
          *(_QWORD *)(v33 + 24) = v28;
          WdLogEvent5_WdError(v33);
          LODWORD(v22) = 1075708679;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v57, 0LL);
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v27, v26);
        *(_QWORD *)(v29 + 24) = v8;
        WdLogEvent5_WdError(v29);
        LODWORD(v22) = -1071774972;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdDmmEvent(v21, v20);
      *(_QWORD *)(v23 + 24) = v22;
      WdLogEvent5_WdDmmEvent(v23);
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v58 + 40), v56);
    return (unsigned int)v22;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}
