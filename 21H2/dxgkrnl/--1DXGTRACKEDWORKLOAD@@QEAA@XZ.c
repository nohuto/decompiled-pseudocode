/*
 * XREFs of ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C0344870
 * Callers:
 *     ??_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z @ 0x1C005A13C (--_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0344B8C (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::~DXGTRACKEDWORKLOAD(DXGTRACKEDWORKLOAD *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rbx
  __int64 i; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  char *v12; // rdx
  _BYTE v13[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h]
  char v15; // [rsp+48h] [rbp-B8h]
  _QWORD v16[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v19[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v20[88]; // [rsp+C8h] [rbp-38h] BYREF

  DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(this);
  if ( *((_DWORD *)this + 20) )
  {
    Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, Current);
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), *((_DWORD *)this + 20));
    *((_DWORD *)this + 20) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 270); i = (unsigned int)(i + 1) )
  {
    v8 = *((_QWORD *)this + i + 71);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v16,
        (struct DXGDEVICE *)v9);
      v10 = *(_QWORD *)(v8 + 16);
      v15 = 0;
      v14 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v18, v9, 2, v11, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v18, v12);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v9, (struct DXGCONTEXT *)v8, (struct COREDEVICEACCESS *)v18);
      COREACCESS::~COREACCESS((COREACCESS *)v20);
      COREACCESS::~COREACCESS((COREACCESS *)v19);
      if ( v15 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
      if ( v16[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v9 + 16), (struct DXGDEVICE *)v9);
    }
  }
  operator delete[](*((void **)this + 29));
  operator delete[](*((void **)this + 15));
  *((_QWORD *)this + 2) = 0LL;
}
