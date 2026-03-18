/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C033C9A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00092A8 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00465B8 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C033C1B0 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C033C434 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  struct _KPROCESS *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 ProcessDxgProcess; // r13
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // r9
  int v19; // edx
  _DWORD *v20; // r14
  unsigned int v21; // edx
  __int64 v22; // r11
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r10
  int v26; // ecx
  __int64 v27; // rcx
  struct _KPROCESS *v28; // rdx
  __int64 v29; // r13
  _BYTE v30[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v31; // [rsp+58h] [rbp-A8h]
  DXGPROCESS *v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h]
  _BYTE v34[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v35[24]; // [rsp+80h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-68h] BYREF
  char v37; // [rsp+C8h] [rbp-38h]
  void *v38[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v39; // [rsp+150h] [rbp+50h] BYREF
  int BundleObjectCallback; // [rsp+154h] [rbp+54h]
  unsigned int v41[2]; // [rsp+158h] [rbp+58h] BYREF

  if ( (unsigned int)a3 < 0xC )
  {
    v6 = (unsigned int)a3;
LABEL_3:
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
    return (unsigned int)v7;
  }
  v6 = (int)a2[2];
  v9 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v6 == 1 )
  {
    if ( (_DWORD)a3 != 88 )
    {
      a3 = (unsigned int)a3;
      v7 = -1073741811LL;
      v10 = 1LL;
      goto LABEL_16;
    }
    v13 = *((_QWORD *)this + 3);
    if ( PsGetCurrentProcess(v9, v6, a3, a4) != v13 && (unsigned __int8)PsGetProcessExitProcessCalled(v13) )
      goto LABEL_11;
    BundleObjectCallback = a2[1];
    v39 = 1869901170;
    *(_QWORD *)v41 = 2LL;
    memset(v38, 0, sizeof(v38));
    v14 = a2[4];
    if ( (unsigned int)v14 > 0x10 || (v14 = a2[5], (unsigned int)v14 >= 2) )
    {
      v6 = v14;
      goto LABEL_3;
    }
    ProcessDxgProcess = PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v34);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v35,
      (struct DXGPROCESS *)ProcessDxgProcess);
    v16 = a2[3];
    v17 = (v16 >> 6) & 0xFFFFFF;
    if ( v17 < *(_DWORD *)(ProcessDxgProcess + 296) )
    {
      v18 = *(_QWORD *)(ProcessDxgProcess + 280);
      v19 = *(_DWORD *)(v18 + 16LL * v17 + 8);
      if ( ((v16 >> 25) & 0x60) == (v19 & 0x60) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
      {
        if ( (v19 & 0x1F) == 0xC )
        {
          v20 = *(_DWORD **)(v18 + 16LL * v17);
          if ( v20 )
          {
            DXGPROCESS::AcquireReference((DXGPROCESS *)v20);
            v32 = (DXGPROCESS *)v20;
            if ( (a2[5] & 1) != 0 )
            {
              v21 = 0;
              if ( a2[4] )
              {
                v22 = ProcessDxgProcess;
                while ( 1 )
                {
                  v23 = v21;
                  v24 = (a2[v21 + 6] >> 6) & 0xFFFFFF;
                  if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 296) )
                    break;
                  v25 = *(_QWORD *)(v22 + 280);
                  v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
                  if ( ((a2[v21 + 6] >> 25) & 0x60) != (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60)
                    || (v26 & 0x2000) != 0
                    || (v26 & 0x1F) == 0 )
                  {
                    break;
                  }
                  if ( (v26 & 0x1F) != 0xD )
                  {
                    WdLogSingleEntry1(2LL, 267LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Handle type mismatch",
                      267LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    break;
                  }
                  v27 = *(_QWORD *)(v25 + 16LL * (unsigned int)v24);
                  if ( !v27 )
                    break;
                  ++v21;
                  v38[v23] = *(void **)(v27 + 8);
                  a2[v23 + 6] = *(_DWORD *)v27;
                  if ( v21 >= a2[4] )
                    goto LABEL_45;
                }
                WdLogSingleEntry2(3LL, a2[v23 + 6], -1073741811LL);
                BundleObjectCallback = -1073741811;
                DXGPROCESS::ReleaseReference(v32);
                v20 = 0LL;
              }
            }
            goto LABEL_45;
          }
LABEL_29:
          WdLogSingleEntry2(3LL, v16, -1073741811LL);
          BundleObjectCallback = -1073741811;
          v32 = (DXGPROCESS *)v20;
LABEL_45:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
          if ( v34[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
          if ( v20 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)(v20 + 26), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
            if ( (v20[106] & 0x100) != 0 && v20[10] == 1 )
            {
              v28 = (struct _KPROCESS *)*((_QWORD *)this + 3);
              v37 = 0;
              CPROCESSATTACHHELPER::Attach(&ApcState, v28);
              CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
                (CEnsureCurrentDxgProcess *)&v32,
                (struct DXGPROCESS *)v20);
              v29 = v33;
              if ( v33 )
              {
                BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                                         this,
                                         a2[4],
                                         a2 + 6,
                                         v38,
                                         &v41[1]);
              }
              else
              {
                WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
                BundleObjectCallback = -1073741811;
              }
              if ( v29 )
                *(_QWORD *)(v29 + 24) = v32;
              if ( v37 )
                KeUnstackDetachProcess(&ApcState);
            }
            else
            {
              WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
              BundleObjectCallback = -1073741811;
            }
            if ( v31 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
            DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v30);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
            DXGPROCESS::ReleaseReference((DXGPROCESS *)v20);
            if ( v31 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
          }
          goto LABEL_62;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v16 = a2[3];
      }
    }
    v20 = 0LL;
    goto LABEL_29;
  }
  if ( (_DWORD)v6 != 3 )
    goto LABEL_3;
  if ( (_DWORD)a3 != 16 )
  {
    v10 = 3LL;
    a3 = (unsigned int)a3;
    v7 = -1073741811LL;
LABEL_16:
    WdLogSingleEntry3(3LL, v10, a3, v7);
    return (unsigned int)v7;
  }
  v11 = *((_QWORD *)this + 3);
  if ( PsGetCurrentProcess(v9, v6, a3, a4) != v11 && (unsigned __int8)PsGetProcessExitProcessCalled(v11) )
  {
LABEL_11:
    v10 = (int)a2[2];
    v7 = -1073741558LL;
    a3 = *((_QWORD *)this + 3);
    goto LABEL_16;
  }
  v12 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  *(_QWORD *)v41 = 4LL;
  v39 = 1869901170;
  v37 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v12);
  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(this, a2[3]);
  if ( v37 )
    KeUnstackDetachProcess(&ApcState);
LABEL_62:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), &v39, 16LL);
  return 0LL;
}
