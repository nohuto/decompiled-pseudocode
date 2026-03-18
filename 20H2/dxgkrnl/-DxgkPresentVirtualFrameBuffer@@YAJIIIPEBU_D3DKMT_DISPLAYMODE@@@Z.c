/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C018FC10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016AF0 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0016C18 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C018FE24 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rbx
  struct DXGDEVICE **v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGGLOBAL *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  struct DXGCONTEXT *v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGHWQUEUE *v37; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v38[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v39[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v40[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v41[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v43[88]; // [rsp+C8h] [rbp-38h] BYREF

  v5 = a2;
  v6 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    LODWORD(v30) = -1073741811;
    v32 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v34, v33);
    WdLogEvent5_WdError(v32);
    return (unsigned int)v30;
  }
  v36[0] = 0LL;
  v37 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40, v6, Current, v36, 0);
  v11 = (struct DXGDEVICE **)v36[0];
  if ( v36[0] )
  {
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39, v5, v10, &v37, 0);
    Global = DXGGLOBAL::GetGlobal(v13, v12);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGGLOBAL *)((char *)Global + 1504), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    v17 = *((_QWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 174);
    v20 = DXGGLOBAL::GetGlobal(v19, v18);
    if ( v17 || *((_DWORD *)v20 + 346) != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v22, v21) + 373) != 4 )
      {
        v23 = (__int64)v11[2];
        v24 = *(_QWORD *)(v23 + 1848);
        if ( v24 == *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v11[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, v23, 1, v25, 0);
          v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41, 0LL);
          v30 = v26;
          if ( v26 < 0 )
          {
            v35 = WdLogNewEntry5_WdEvent(v28, v27);
            *(_QWORD *)(v35 + 24) = v30;
            *(_QWORD *)(v35 + 32) = v23;
            WdLogEvent5_WdEvent(v35);
            COREACCESS::~COREACCESS((COREACCESS *)v43);
            COREACCESS::~COREACCESS((COREACCESS *)v42);
            if ( v36[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
            goto LABEL_12;
          }
          if ( !*(_BYTE *)(v23 + 1904) )
          {
            LOBYTE(v29) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 2704)
                                                                                              + 616LL)
                                                                                  + 8LL)
                                                                      + 560LL))(
              *(_QWORD *)(v23 + 768),
              3LL,
              v29,
              4294967293LL);
            *(_BYTE *)(v23 + 1904) = 1;
          }
          COREACCESS::~COREACCESS((COREACCESS *)v43);
          COREACCESS::~COREACCESS((COREACCESS *)v42);
          if ( v36[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
        }
      }
      LODWORD(v30) = PresentCddShadowBuffer((struct DXGCONTEXT *)v11, v37, a3);
    }
    else
    {
      LODWORD(v30) = -1073741823;
    }
LABEL_12:
    if ( v38[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38, v21);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39, v21);
    goto LABEL_15;
  }
  LODWORD(v30) = 0;
LABEL_15:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40);
  return (unsigned int)v30;
}
