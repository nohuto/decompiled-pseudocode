/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C02DD450
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001AE8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001C4C (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct _D3DKMT_DISPLAYMODE *a4)
{
  unsigned int v4; // r15d
  unsigned int v5; // r14d
  unsigned int v6; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *v12; // rbx
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  struct DXGDEVICE **v20; // rsi
  unsigned int v21; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rbx
  int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // r8
  struct DXGCONTEXT *v30[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGHWQUEUE *v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v33[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v34[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v35[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v36[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v37[88]; // [rsp+E8h] [rbp-18h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, (__int64)a4);
  v12 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v18 = PsGetCurrentProcess(v15, v14, v16, v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v18,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v30[0] = 0LL;
  v31 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34, v6, Current, v30, 0, 1);
  v20 = (struct DXGDEVICE **)v30[0];
  if ( v30[0] )
  {
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v33, v5, v12, &v31, 0);
    Global = DXGGLOBAL_GetGlobal();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGGLOBAL *)((char *)Global + 1664), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
    v23 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 193);
    v24 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 384);
    if ( v23 || v24 != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 413) != 4 )
      {
        v25 = (__int64)v20[2];
        v26 = *(_QWORD *)(v25 + 1848);
        if ( v26 == *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v20[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, v25, 1, v27, 0);
          v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
          v21 = v28;
          if ( v28 < 0 )
          {
            WdLogSingleEntry2(4LL, v28, v25);
            COREACCESS::~COREACCESS((COREACCESS *)v37);
            COREACCESS::~COREACCESS((COREACCESS *)v36);
            if ( v30[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
            goto LABEL_18;
          }
          if ( !*(_BYTE *)(v25 + 1904) )
          {
            LOBYTE(v29) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 2800)
                                                                                              + 624LL)
                                                                                  + 8LL)
                                                                      + 560LL))(
              *(_QWORD *)(v25 + 768),
              3LL,
              v29,
              4294967293LL);
            *(_BYTE *)(v25 + 1904) = 1;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v37);
          COREACCESS::~COREACCESS((COREACCESS *)v36);
          if ( v30[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
        }
      }
      v21 = PresentCddShadowBuffer((struct DXGCONTEXT *)v20, v31, v4);
    }
    else
    {
      v21 = -1073741823;
    }
LABEL_18:
    if ( v32[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v33);
    goto LABEL_21;
  }
  v21 = 0;
LABEL_21:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
  return v21;
}
