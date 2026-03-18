/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00E28D8
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00E2C5C (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006954 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E4130 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllContexts(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  volatile signed __int64 **v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  volatile signed __int64 *i; // rbx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  char *v23; // rdx
  _BYTE v24[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h]
  char v26; // [rsp+48h] [rbp-B8h]
  _QWORD v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v31[88]; // [rsp+C8h] [rbp-38h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v12 + 24) = 2352LL;
    WdLogEvent5_WdAssertion(v12);
  }
  Current = DXGPROCESS::GetCurrent();
  v7 = (volatile signed __int64 **)((char *)this + 464);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v13 + 24) = 2364LL;
    WdLogEvent5_WdAssertion(v13);
  }
  for ( i = *v7; ; i = (volatile signed __int64 *)*i )
  {
    v11 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v7 )
      v11 = 0LL;
    if ( !v11 )
      break;
    v14 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v7 )
      v14 = 0LL;
    v15 = *((_DWORD *)v14 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v28,
      (struct _KTHREAD **)Current);
    v16 = (v15 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *((_DWORD *)Current + 64) )
    {
      v17 = *((_QWORD *)Current + 30);
      v18 = *(unsigned int *)(v17 + 16 * v16 + 8);
      if ( ((v15 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
      {
        if ( (v18 & 0x1F) == 7 )
        {
          if ( *(_QWORD *)(v17 + 16LL * (unsigned int)v16) )
          {
            if ( i == (volatile signed __int64 *)v7 )
              i = 0LL;
            if ( ((v15 >> 25) & 0x60) == (v18 & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
              *(_DWORD *)(v17 + 16 * (((unsigned __int64)v15 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
            if ( i )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
              if ( _InterlockedExchangeAdd64(i + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              {
                v20 = *((_QWORD *)i + 2);
                DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                  (DXGDEVICEACCESSLOCKEXCLUSIVE *)v27,
                  (struct DXGDEVICE *)v20);
                v21 = *((_QWORD *)i + 2);
                v26 = 0;
                v25 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
                COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, v20, 2, v22, 0);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v29, v23);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 200LL) != 4 )
                  DXGDEVICE::DestroyContext((DXGDEVICE *)v20, (struct DXGCONTEXT *)i, (struct COREDEVICEACCESS *)v29);
                COREACCESS::~COREACCESS((COREACCESS *)v31);
                COREACCESS::~COREACCESS((COREACCESS *)v30);
                if ( v26 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
                if ( v27[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v20 + 16), (struct DXGDEVICE *)v20);
              }
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
              goto LABEL_5;
            }
            return;
          }
        }
        else
        {
          v19 = WdLogNewEntry5_WdError((v15 >> 25) & 0x60, v18);
          *(_QWORD *)(v19 + 24) = 267LL;
          WdLogEvent5_WdError(v19);
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  }
}
