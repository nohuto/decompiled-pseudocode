/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C00E6160
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009F98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0050A74 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00E63B0 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v12; // rax
  struct VIDPN_MGR *v13; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r15d
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r15d
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  struct DMMVIDPN *v32; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v33; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v34[8]; // [rsp+30h] [rbp-99h] BYREF
  struct DXGADAPTER *v35; // [rsp+38h] [rbp-91h]
  char v36; // [rsp+40h] [rbp-89h]
  _BYTE v37[144]; // [rsp+50h] [rbp-79h] BYREF

  v35 = a1;
  v36 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37, 0LL);
  LODWORD(v9) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_5;
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = *((int *)a1 + 80);
    v10[5] = *((unsigned int *)a1 + 79);
    v10[6] = this;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a1 + 2585)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v12 = *((_QWORD *)a1 + 334)) == 0 )
  {
LABEL_4:
    LODWORD(v9) = 0;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 16) && !*(_BYTE *)(v12 + 250) )
    goto LABEL_22;
  v13 = *(struct VIDPN_MGR **)(v12 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, (__int64)v13);
  v32 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v17 = 0;
    v18 = 0;
    if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
    {
LABEL_20:
      auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40), v22);
LABEL_21:
      LODWORD(v9) = -2147483622;
      goto LABEL_5;
    }
    do
    {
      if ( (*(_QWORD *)(272LL * v18 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
      {
        v19 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v18, v32);
        v9 = v19;
        if ( v19 == -1073741275 )
        {
          ++v17;
        }
        else if ( v19 < 0 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
          v27[3] = v9;
          v27[4] = a1;
          v27[5] = *((_QWORD *)this + 1);
          v27[6] = *(_QWORD *)this;
          v28 = v18;
          goto LABEL_34;
        }
      }
      ++v18;
    }
    while ( v18 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
    if ( !v17 )
      goto LABEL_20;
    auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40), v30);
LABEL_22:
    v23 = 0;
    v24 = 0;
    if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
    {
      do
      {
        if ( (*(_QWORD *)(272LL * v24 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
        {
          v25 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v24, 0LL);
          v9 = v25;
          if ( v25 == -1073741275 )
          {
            ++v23;
          }
          else if ( v25 < 0 )
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdError(v26, v5);
            v31[3] = v9;
            v31[4] = a1;
            v31[5] = *((_QWORD *)this + 1);
            v31[6] = *(_QWORD *)this;
            v31[7] = v24;
            WdLogEvent5_WdError(v31);
            goto LABEL_5;
          }
        }
        ++v24;
      }
      while ( v24 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
      if ( !v23 )
        goto LABEL_21;
      goto LABEL_4;
    }
    goto LABEL_21;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
  v27[3] = v9;
  v27[4] = v13;
  v27[5] = *((_QWORD *)this + 1);
  v27[6] = *((int *)a1 + 80);
  v28 = *((unsigned int *)a1 + 79);
LABEL_34:
  v27[7] = v28;
  WdLogEvent5_WdError(v27);
  auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40), v29);
LABEL_5:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37, v5);
  if ( v36 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  return (unsigned int)v9;
}
