/*
 * XREFs of ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C033C1B0
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C033C9A0 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C031C0B0 (DxgkCreateBundleObjectInternal.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rcx
  _BYTE *v12; // rax
  _BYTE *v13; // rdx
  int BundleObjectInternal; // eax
  __int64 v15; // r9
  unsigned int v16; // ebx
  void *v17; // rsi
  __int64 v18; // rax
  DXGSHAREDVMOBJECT *v19; // rdi
  unsigned int v20; // eax
  _DWORD v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+6Ch] [rbp-94h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  _QWORD v29[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[128]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v31[768]; // [rsp+150h] [rbp+50h] BYREF

  memset(v29, 0, sizeof(v29));
  memset(v31, 0, sizeof(v31));
  LODWORD(v29[0]) = a2;
  v22[1] = 0;
  v26 = 0;
  v29[1] = a3;
  memset(v30, 0, sizeof(v30));
  if ( a2 )
  {
    v10 = *((_QWORD *)this + 5);
    v11 = v30;
    v12 = &v31[8];
    v9 = a2;
    v13 = v31;
    do
    {
      *v11 = v13;
      v13 += 48;
      *((_DWORD *)v12 - 2) = 48;
      ++v11;
      *(_QWORD *)v12 = 0LL;
      *((_DWORD *)v12 + 4) = 0;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 3) = v10;
      *((_QWORD *)v12 + 4) = 0LL;
      v12 += 48;
      --v9;
    }
    while ( v9 );
  }
  v29[2] = v30;
  LOBYTE(v9) = 1;
  v27 = *((_QWORD *)this + 4);
  v22[0] = 48;
  v29[4] = v22;
  v23 = 0LL;
  v25 = 512;
  v24 = 0LL;
  v28 = 0LL;
  LODWORD(v29[5]) = 0x10000000;
  BundleObjectInternal = DxgkCreateBundleObjectInternal(0LL, 0, v9, 0LL, (ULONG64)v29, (__int64)a4);
  v16 = BundleObjectInternal;
  if ( BundleObjectInternal >= 0 )
  {
    v17 = (void *)v29[9];
    v18 = operator new[](0x20uLL, 0x4B677844u, 256LL, v15);
    v19 = (DXGSHAREDVMOBJECT *)v18;
    if ( v18 )
    {
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_DWORD *)(v18 + 24) = 1;
      *(_DWORD *)v18 = 16;
      *(_QWORD *)(v18 + 16) = v17;
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 56LL))(
              *((_QWORD *)this + 1),
              v18,
              13LL);
      if ( v20 )
      {
        *a5 = v20;
      }
      else
      {
        WdLogSingleEntry1(6LL, 356LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate NT shared object handle",
          356LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v16 = -1073741801;
        DXGSHAREDVMOBJECT::ReleaseReference(v19);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 345LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
        345LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = -1073741801;
      if ( v17 )
        ObCloseHandle(v17, 0);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, BundleObjectInternal);
  }
  return v16;
}
