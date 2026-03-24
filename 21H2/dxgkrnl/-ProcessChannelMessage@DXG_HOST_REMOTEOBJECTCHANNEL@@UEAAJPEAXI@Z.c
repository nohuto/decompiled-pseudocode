/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028B270
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00069B4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006C64 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000D12C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003BB58 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0237938 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023AA1C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C028A5C0 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C028A838 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        struct _KPROCESS **this,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KPROCESS *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KPROCESS *v14; // rdx
  struct _KPROCESS *v15; // rdi
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KTHREAD **v21; // r12
  __int64 v22; // rcx
  struct _KTHREAD *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  struct _KTHREAD *v30; // r8
  unsigned int v31; // eax
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rax
  DXGSHAREDVMOBJECT *v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct _KPROCESS *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int i; // edi
  DXGSHAREDVMOBJECT *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  unsigned int v54; // [rsp+30h] [rbp-D0h]
  struct _KTHREAD **ProcessDxgProcess; // [rsp+38h] [rbp-C8h] BYREF
  char v56; // [rsp+40h] [rbp-C0h]
  _BYTE v57[16]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A0h]
  _BYTE v60[24]; // [rsp+68h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-80h] BYREF
  char v62; // [rsp+B0h] [rbp-50h]
  DXGSHAREDVMOBJECT *v63[16]; // [rsp+C0h] [rbp-40h] BYREF
  void *v64[16]; // [rsp+140h] [rbp+40h] BYREF
  int v65; // [rsp+1C0h] [rbp+C0h] BYREF
  int BundleObjectCallback; // [rsp+1C4h] [rbp+C4h]
  unsigned int v67[2]; // [rsp+1C8h] [rbp+C8h] BYREF

  v3 = (unsigned int)a3;
  if ( (unsigned int)a3 < 0xC )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v6[3] = v3;
LABEL_3:
    v6[4] = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  v8 = a2[2] - 1;
  if ( a2[2] == 1 )
  {
    if ( (_DWORD)a3 != 88 )
      goto LABEL_14;
    v15 = this[3];
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v8, a2) != v15 && (unsigned __int8)PsGetProcessExitProcessCalled(v15) )
      goto LABEL_17;
    v17 = a2[1];
    v65 = 1869901170;
    *(_QWORD *)v67 = 2LL;
    BundleObjectCallback = v17;
    memset(v64, 0, sizeof(v64));
    if ( a2[4] > 0x10 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v9 = a2[4];
      goto LABEL_20;
    }
    if ( a2[5] >= 2 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v9 = a2[5];
      goto LABEL_20;
    }
    ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(this[3]);
    v21 = ProcessDxgProcess;
    memset(v63, 0, sizeof(v63));
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v57);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v57);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v60, ProcessDxgProcess);
    v24 = a2[3];
    v25 = (a2[3] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)ProcessDxgProcess + 64) )
    {
      v23 = ProcessDxgProcess[30];
      v24 = ((unsigned int)v24 >> 25) & 0x60;
      v22 = *((unsigned int *)v23 + 4 * v25 + 2);
      if ( (_BYTE)v24 == (*((_BYTE *)v23 + 16 * v25 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
      {
        v22 &= 0x1Fu;
        if ( (_BYTE)v22 == 12 )
        {
          v27 = *((_QWORD *)v23 + 2 * (unsigned int)v25);
          if ( v27 )
          {
            DXGPROCESS::AcquireReference((DXGPROCESS *)v27, v24);
LABEL_31:
            if ( v27 )
            {
              if ( (a2[5] & 1) != 0 )
              {
                v31 = 0;
                v54 = 0;
                if ( a2[4] )
                {
                  while ( 1 )
                  {
                    v32 = v31;
                    v33 = a2[v31 + 6];
                    v34 = (a2[v31 + 6] >> 6) & 0xFFFFFF;
                    if ( (unsigned int)v34 >= *((_DWORD *)v21 + 64) )
                      break;
                    v33 = ((unsigned int)v33 >> 25) & 0x60;
                    v30 = ProcessDxgProcess[30];
                    v29 = *((unsigned int *)v30 + 4 * v34 + 2);
                    if ( (_BYTE)v33 != (*((_BYTE *)v30 + 16 * v34 + 8) & 0x60)
                      || (v29 & 0x2000) != 0
                      || (v29 & 0x1F) == 0 )
                    {
                      break;
                    }
                    v29 &= 0x1Fu;
                    if ( (_BYTE)v29 != 13 )
                    {
                      v36 = WdLogNewEntry5_WdError(v29, v33);
                      *(_QWORD *)(v36 + 24) = 316LL;
                      WdLogEvent5_WdError(v36);
                      break;
                    }
                    v35 = (DXGSHAREDVMOBJECT *)*((_QWORD *)v30 + 2 * (unsigned int)v34);
                    if ( !v35 )
                      break;
                    DXGSHAREDVMOBJECT::AddReference(v35, v33);
                    v64[v32] = (void *)*((_QWORD *)v35 + 1);
                    a2[v32 + 6] = *(_DWORD *)v35;
                    v31 = v54 + 1;
                    v63[v32] = v35;
                    v54 = v31;
                    if ( v31 >= a2[4] )
                      goto LABEL_46;
                    v21 = ProcessDxgProcess;
                  }
                  v37 = WdLogNewEntry5_WdWarning(v29, v33, v30);
                  *(_QWORD *)(v37 + 24) = a2[v32 + 6];
                  *(_QWORD *)(v37 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v37);
                  BundleObjectCallback = -1073741811;
                  DXGPROCESS::ReleaseReference((DXGPROCESS *)v27, v38);
                  v27 = 0LL;
                }
              }
            }
LABEL_46:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v60);
            if ( v57[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v57, v39);
            if ( v27 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)&ProcessDxgProcess,
                *(struct DXGFASTMUTEX *const *)(v27 + 104),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&ProcessDxgProcess);
              if ( (*(_BYTE *)(v27 + 347) & 0x20) != 0 && *(_DWORD *)(v27 + 40) == 1 )
              {
                v43 = this[3];
                v62 = 0;
                CPROCESSATTACHHELPER::Attach(&ApcState, v43);
                CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
                  (CEnsureCurrentDxgProcess *)&v58,
                  (struct DXGPROCESS *)v27);
                v47 = v59;
                if ( v59 )
                {
                  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                                           (DXG_HOST_REMOTEOBJECTCHANNEL *)this,
                                           a2[4],
                                           a2 + 6,
                                           v64,
                                           &v67[1]);
                }
                else
                {
                  v48 = WdLogNewEntry5_WdWarning(v45, v44, v46);
                  *(_QWORD *)(v48 + 24) = a2[3];
                  *(_QWORD *)(v48 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v48);
                  BundleObjectCallback = -1073741811;
                }
                if ( v47 )
                  *(_QWORD *)(v47 + 8) = v58;
                if ( v62 )
                  KeUnstackDetachProcess(&ApcState);
              }
              else
              {
                v49 = WdLogNewEntry5_WdWarning(v41, v40, v42);
                *(_QWORD *)(v49 + 24) = a2[3];
                *(_QWORD *)(v49 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v49);
                BundleObjectCallback = -1073741811;
              }
              if ( v56 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&ProcessDxgProcess, v39);
            }
            for ( i = 0; i < a2[4]; ++i )
            {
              v51 = v63[i];
              if ( v51 )
              {
                DXGSHAREDVMOBJECT::ReleaseReference(v51, v39);
                v63[i] = 0LL;
              }
            }
            if ( v27 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)&ProcessDxgProcess);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&ProcessDxgProcess);
              DXGPROCESS::ReleaseReference((DXGPROCESS *)v27, v52);
              if ( v56 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&ProcessDxgProcess, v53);
            }
            goto LABEL_68;
          }
LABEL_30:
          v28 = WdLogNewEntry5_WdWarning(v22, v24, v23);
          *(_QWORD *)(v28 + 24) = a2[3];
          *(_QWORD *)(v28 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v28);
          BundleObjectCallback = -1073741811;
          goto LABEL_31;
        }
        v26 = WdLogNewEntry5_WdError(v22, v24);
        *(_QWORD *)(v26 + 24) = 316LL;
        WdLogEvent5_WdError(v26);
      }
    }
    v27 = 0LL;
    goto LABEL_30;
  }
  if ( a2[2] != 3 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v9 = (int)a2[2];
LABEL_20:
    v6[3] = v9;
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 16 )
  {
LABEL_14:
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v6[3] = (int)a2[2];
    v6[4] = v3;
    v6[5] = -1073741811LL;
    goto LABEL_4;
  }
  v10 = this[3];
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v8, a2) != v10 && (unsigned __int8)PsGetProcessExitProcessCalled(v10) )
  {
LABEL_17:
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v16[3] = (int)a2[2];
    v16[4] = this[3];
    v16[5] = -1073741558LL;
    WdLogEvent5_WdWarning(v16);
    return 3221225738LL;
  }
  v14 = this[3];
  *(_QWORD *)v67 = 4LL;
  v65 = 1869901170;
  v62 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v14);
  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(
                           (DXG_HOST_REMOTEOBJECTCHANNEL *)this,
                           a2[3]);
  if ( v62 )
    KeUnstackDetachProcess(&ApcState);
LABEL_68:
  (*(void (__fastcall **)(struct _KPROCESS *, int *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], &v65, 16LL);
  return 0LL;
}
