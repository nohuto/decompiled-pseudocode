/*
 * XREFs of ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C02866C0
 * Callers:
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0285F50 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023393C (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0236A1C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     DxgkExtractBundleObjectInternal @ 0x1C0273EC8 (DxgkExtractBundleObjectInternal.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        __int64 a2,
        __int64 a3,
        void **a4,
        struct _EPROCESS *a5)
{
  __int64 v6; // rbx
  DXG_HOST_REMOTEOBJECTCHANNEL *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  struct DXGFASTMUTEX *v16; // rax
  DXGSHAREDVMOBJECT *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGSHAREDVMOBJECT *v20; // rsi
  __int64 v21; // rdx
  struct _KPROCESS *v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rdi
  int BundleObjectInternal; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  _BYTE v33[8]; // [rsp+20h] [rbp-B1h] BYREF
  char v34; // [rsp+28h] [rbp-A9h]
  __int64 v35; // [rsp+30h] [rbp-A1h] BYREF
  int v36; // [rsp+38h] [rbp-99h]
  int v37; // [rsp+3Ch] [rbp-95h]
  _BYTE *v38; // [rsp+40h] [rbp-91h]
  void **v39; // [rsp+48h] [rbp-89h]
  __int128 v40; // [rsp+50h] [rbp-81h]
  __int64 v41; // [rsp+60h] [rbp-71h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-69h] BYREF
  char v43; // [rsp+98h] [rbp-39h]
  _BYTE v44[64]; // [rsp+A0h] [rbp-31h] BYREF

  v6 = (unsigned int)a3;
  v7 = this;
  v8 = (unsigned int)a2;
  if ( (_DWORD)a2 && (unsigned int)(a3 - 1) <= 0xF && a4 )
  {
    v9 = *((_QWORD *)this + 3);
    if ( PsGetCurrentProcess(this, a2) != v9 && (unsigned __int8)PsGetProcessExitProcessCalled(v9) )
    {
      v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      v14 = *((_QWORD *)v7 + 3);
      LODWORD(v7) = -1073741558;
      *(_QWORD *)(v13 + 24) = v14;
      *(_QWORD *)(v13 + 32) = -1073741558LL;
      WdLogEvent5_WdWarning(v13);
      return (unsigned int)v7;
    }
    v16 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 1) + 48LL))(*((_QWORD *)v7 + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, v16, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    v17 = (DXGSHAREDVMOBJECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 1) + 72LL))(
                                 *((_QWORD *)v7 + 1),
                                 (unsigned int)v8,
                                 13LL);
    v20 = v17;
    if ( v17 && *(_DWORD *)v17 == 16 )
    {
      DXGSHAREDVMOBJECT::AddReference(v17, v18);
      if ( v34 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33, v21);
      v22 = (struct _KPROCESS *)*((_QWORD *)v7 + 3);
      v43 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v22);
      v37 = 0;
      v41 = 0LL;
      v40 = 0LL;
      if ( (_DWORD)v6 )
      {
        v23 = v6;
        v24 = v44;
        while ( v23 )
        {
          *v24++ = 0x10000000;
          --v23;
        }
      }
      v35 = *((_QWORD *)v20 + 2);
      v36 = v6;
      v38 = v44;
      v39 = a4;
      BundleObjectInternal = DxgkExtractBundleObjectInternal(0LL, 0, a5, (ULONG64)&v35);
      v7 = (DXG_HOST_REMOTEOBJECTCHANNEL *)BundleObjectInternal;
      if ( BundleObjectInternal < 0 )
      {
        v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
        *(_QWORD *)(v29 + 24) = v7;
        WdLogEvent5_WdWarning(v29);
      }
      DXGSHAREDVMOBJECT::ReleaseReference(v20, v26);
      if ( v43 )
        KeUnstackDetachProcess(&ApcState);
      return (unsigned int)v7;
    }
    v30 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v30 + 24) = v8;
    WdLogEvent5_WdError(v30);
    if ( v34 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33, v31);
  }
  else
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v32[3] = v8;
    v32[4] = v6;
    v32[5] = a4;
    v32[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
  }
  return 3221225485LL;
}
