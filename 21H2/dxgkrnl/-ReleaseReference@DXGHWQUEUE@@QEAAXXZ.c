/*
 * XREFs of ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C0026238
 * Callers:
 *     DxgkDestroyHwQueueInternal @ 0x1C0271868 (DxgkDestroyHwQueueInternal.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005898 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5B54 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026CF34 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGHWQUEUE::ReleaseReference(DXGHWQUEUE *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  struct DXGDEVICE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r9
  char *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r9
  char *v13; // rdx
  _BYTE v14[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h]
  char v16; // [rsp+48h] [rbp-B8h]
  _BYTE v17[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h]
  char v19; // [rsp+60h] [rbp-A0h]
  _QWORD v20[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v21[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v22[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v24[88]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v25[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v26[64]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v27[88]; // [rsp+178h] [rbp+78h] BYREF

  v3 = _InterlockedDecrement64((volatile signed __int64 *)this + 11);
  if ( v3 < 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 111LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !v3 )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *(struct DXGDEVICE **)(v5 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20, v6);
    v7 = *((_QWORD *)v6 + 2);
    v16 = 0;
    v15 = *(_QWORD *)(v7 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, (__int64)v6, 2, v8, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v22, v9);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 200LL) != 4 )
      DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v5, this, (struct COREDEVICEACCESS *)v22);
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    COREACCESS::~COREACCESS((COREACCESS *)v23);
    if ( v16 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
    if ( v20[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(v5 + 32)) )
    {
      v10 = *(_QWORD *)(v5 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v21,
        (struct DXGDEVICE *)v10);
      v11 = *(_QWORD *)(v5 + 16);
      v19 = 0;
      v18 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, v10, 2, v12, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v25, v13);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v10, (struct DXGCONTEXT *)v5, (struct COREDEVICEACCESS *)v25);
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      COREACCESS::~COREACCESS((COREACCESS *)v26);
      if ( v19 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
      if ( v21[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v10 + 64)) )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
    }
  }
}
