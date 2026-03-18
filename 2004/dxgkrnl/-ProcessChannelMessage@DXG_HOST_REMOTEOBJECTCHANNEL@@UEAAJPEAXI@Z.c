/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006654 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006904 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003AD58 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C028A110 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C028A388 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        struct _KPROCESS **this,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _KPROCESS *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KPROCESS *v15; // rdx
  struct _KPROCESS *v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 ProcessDxgProcess; // r13
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  struct _KPROCESS *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r13
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  _BYTE v54[8]; // [rsp+30h] [rbp-D0h] BYREF
  char v55; // [rsp+38h] [rbp-C8h]
  _BYTE v56[16]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+58h] [rbp-A8h]
  _BYTE v59[24]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-88h] BYREF
  char v61; // [rsp+A8h] [rbp-58h]
  void *v62[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v63; // [rsp+130h] [rbp+30h] BYREF
  int v64; // [rsp+134h] [rbp+34h]
  int v65; // [rsp+138h] [rbp+38h]
  unsigned int v66; // [rsp+13Ch] [rbp+3Ch] BYREF

  v3 = (unsigned int)a3;
  if ( (unsigned int)a3 < 0xC )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v6[3] = v3;
LABEL_3:
    LODWORD(v7) = -1073741811;
    v6[4] = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return (unsigned int)v7;
  }
  v9 = a2[2] - 1;
  if ( a2[2] == 1 )
  {
    if ( (_DWORD)a3 != 88 )
    {
LABEL_14:
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, a2, a3);
      v6[3] = (int)a2[2];
      v6[4] = v3;
      v7 = -1073741811LL;
LABEL_15:
      v6[5] = v7;
      goto LABEL_4;
    }
    v16 = this[3];
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v9, a2) != v16 && (unsigned __int8)PsGetProcessExitProcessCalled(v16) )
      goto LABEL_18;
    v17 = a2[1];
    v66 = 0;
    v64 = v17;
    v63 = 1869901170;
    v65 = 2;
    memset(v62, 0, sizeof(v62));
    if ( a2[4] > 0x10 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v10 = a2[4];
      goto LABEL_21;
    }
    if ( a2[5] >= 2 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v10 = a2[5];
      goto LABEL_21;
    }
    ProcessDxgProcess = PsGetProcessDxgProcess(this[3]);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v56);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v59,
      (struct _KTHREAD **)ProcessDxgProcess);
    v23 = a2[3];
    v24 = (a2[3] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *(_DWORD *)(ProcessDxgProcess + 256) )
    {
      v22 = *(_QWORD *)(ProcessDxgProcess + 240);
      v25 = (unsigned int)v24;
      v23 = ((unsigned int)v23 >> 25) & 0x60;
      v24 = *(unsigned int *)(v22 + 16LL * (unsigned int)v24 + 8);
      if ( (_BYTE)v23 == (v24 & 0x60) && (v24 & 0x2000) == 0 && (v24 & 0x1F) != 0 )
      {
        v26 = 2 * v25;
        v24 &= 0x1Fu;
        if ( (_BYTE)v24 == 12 )
        {
          v28 = *(_QWORD *)(v22 + 8 * v26);
          if ( v28 )
          {
            DXGPROCESS::AcquireReference((DXGPROCESS *)v28, v23);
LABEL_32:
            if ( v28 )
            {
              if ( (a2[5] & 1) != 0 )
              {
                v31 = 0LL;
                if ( a2[4] )
                {
                  while ( 1 )
                  {
                    v32 = a2[v31 + 6];
                    v33 = (a2[v31 + 6] >> 6) & 0xFFFFFF;
                    v34 = (unsigned int)v31;
                    if ( (unsigned int)v33 >= *(_DWORD *)(ProcessDxgProcess + 256) )
                      break;
                    v35 = *(_QWORD *)(ProcessDxgProcess + 240);
                    v32 = ((unsigned int)v32 >> 25) & 0x60;
                    v30 = *(unsigned int *)(v35 + 16 * v33 + 8);
                    if ( (_BYTE)v32 != (*(_BYTE *)(v35 + 16 * v33 + 8) & 0x60)
                      || (v30 & 0x2000) != 0
                      || (v30 & 0x1F) == 0 )
                    {
                      break;
                    }
                    v36 = v30 & 0x1F;
                    if ( (_BYTE)v36 != 13 )
                    {
                      v37 = WdLogNewEntry5_WdError(v36, v31);
                      *(_QWORD *)(v37 + 24) = 267LL;
                      WdLogEvent5_WdError(v37);
                      break;
                    }
                    v30 = *(_QWORD *)(v35 + 16LL * (unsigned int)v33);
                    if ( !v30 )
                      break;
                    v62[v31] = *(void **)(v30 + 8);
                    a2[v31 + 6] = *(_DWORD *)v30;
                    v31 = (unsigned int)(v31 + 1);
                    if ( (unsigned int)v31 >= a2[4] )
                      goto LABEL_47;
                  }
                  v38 = WdLogNewEntry5_WdWarning(v30, v31, v32);
                  *(_QWORD *)(v38 + 24) = a2[v34 + 6];
                  *(_QWORD *)(v38 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v38);
                  v64 = -1073741811;
                  DXGPROCESS::ReleaseReference((DXGPROCESS *)v28, v39);
                  v28 = 0LL;
                }
              }
            }
LABEL_47:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
            if ( v56[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56, v40);
            if ( v28 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v54, *(struct DXGFASTMUTEX *const *)(v28 + 104), 0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v54);
              if ( (*(_BYTE *)(v28 + 347) & 0x20) != 0 && *(_DWORD *)(v28 + 40) == 1 )
              {
                v44 = this[3];
                v61 = 0;
                CPROCESSATTACHHELPER::Attach(&ApcState, v44);
                CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
                  (CEnsureCurrentDxgProcess *)&v57,
                  (struct DXGPROCESS *)v28);
                v48 = v58;
                if ( v58 )
                {
                  v64 = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                          (DXG_HOST_REMOTEOBJECTCHANNEL *)this,
                          a2[4],
                          a2 + 6,
                          v62,
                          &v66);
                }
                else
                {
                  v50 = WdLogNewEntry5_WdWarning(v46, v45, v47);
                  *(_QWORD *)(v50 + 24) = a2[3];
                  *(_QWORD *)(v50 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v50);
                  v64 = -1073741811;
                }
                if ( v48 )
                  *(_QWORD *)(v48 + 8) = v57;
                if ( v61 )
                  KeUnstackDetachProcess(&ApcState);
              }
              else
              {
                v51 = WdLogNewEntry5_WdWarning(v42, v41, v43);
                *(_QWORD *)(v51 + 24) = a2[3];
                *(_QWORD *)(v51 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v51);
                v64 = -1073741811;
              }
              if ( v55 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v54, v49);
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v54);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v54);
              DXGPROCESS::ReleaseReference((DXGPROCESS *)v28, v52);
              if ( v55 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v54, v53);
            }
            goto LABEL_64;
          }
LABEL_31:
          v29 = WdLogNewEntry5_WdWarning(v24, v23, v22);
          *(_QWORD *)(v29 + 24) = a2[3];
          *(_QWORD *)(v29 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v29);
          v64 = -1073741811;
          goto LABEL_32;
        }
        v27 = WdLogNewEntry5_WdError(v24, v23);
        *(_QWORD *)(v27 + 24) = 267LL;
        WdLogEvent5_WdError(v27);
      }
    }
    v28 = 0LL;
    goto LABEL_31;
  }
  if ( a2[2] != 3 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, a2, a3);
    v10 = (int)a2[2];
LABEL_21:
    v6[3] = v10;
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 16 )
    goto LABEL_14;
  v11 = this[3];
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v9, a2) != v11 && (unsigned __int8)PsGetProcessExitProcessCalled(v11) )
  {
LABEL_18:
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v7 = -1073741558LL;
    v6[3] = (int)a2[2];
    v6[4] = this[3];
    goto LABEL_15;
  }
  v15 = this[3];
  v66 = 0;
  v63 = 1869901170;
  v65 = 4;
  v61 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v15);
  v64 = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback((DXG_HOST_REMOTEOBJECTCHANNEL *)this, a2[3]);
  if ( v61 )
    KeUnstackDetachProcess(&ApcState);
LABEL_64:
  (*(void (__fastcall **)(struct _KPROCESS *, int *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], &v63, 16LL);
  return 0LL;
}
