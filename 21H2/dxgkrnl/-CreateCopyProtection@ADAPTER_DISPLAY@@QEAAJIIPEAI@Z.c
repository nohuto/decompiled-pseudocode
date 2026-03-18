/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C02BF554
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0384354 (DxgkHandleVideoParameters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000A6A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0045684 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0045734 (-AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01BC490 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD **Current; // r14
  NTSTATUS v13; // eax
  __int64 v14; // r9
  unsigned int Data1; // ebp
  char *v16; // rdi
  DXGADAPTER *v17; // r8
  unsigned int v18; // r11d
  int v19; // edx
  unsigned int v20; // eax
  char v21; // cl
  int v22; // edi
  __int64 v23; // rax
  struct DXGCOPYPROTECTION *v24; // rbx
  __int64 v25; // rax
  struct DXGCOPYPROTECTION *v26; // rax
  struct DXGCOPYPROTECTION **v27; // rcx
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v30[16]; // [rsp+58h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 5422LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 5422LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 5423LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProtectionKey != NULL", 5423LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 5426LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 5426LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( Current[50] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5427LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pProcess->IsCopyProtectionMutexOwner()",
      5427LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  Uuid = 0LL;
  while ( 1 )
  {
    v13 = ExUuidCreate(&Uuid);
    if ( v13 >= 0 )
      break;
    if ( v13 != -1073741267 )
    {
      v22 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ExUuidCreate failed, returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_33;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v16 = (char *)(this + 10);
  do
  {
    LOBYTE(v14) = 1;
    v17 = this[10];
    while ( 1 )
    {
      v18 = Data1;
      if ( v17 == (DXGADAPTER *)v16 || !v17 )
        break;
      v19 = *((_DWORD *)v17 + 12);
      v20 = Data1 + 1;
      v17 = *(DXGADAPTER **)v17;
      if ( v19 != Data1 )
        v20 = Data1;
      v21 = 0;
      Data1 = v20;
      if ( v19 != v18 )
        v21 = v14;
      LOBYTE(v14) = v21;
    }
  }
  while ( !(_BYTE)v14 );
  v23 = operator new[](0x40uLL, 0x4B677844u, 256LL, v14);
  v24 = (struct DXGCOPYPROTECTION *)v23;
  if ( v23 )
  {
    *(_QWORD *)(v23 + 16) = this;
    *(_OWORD *)v23 = 0LL;
    *(_QWORD *)(v23 + 40) = Current;
    *(_OWORD *)(v23 + 24) = 0LL;
    *(_DWORD *)(v23 + 48) = Data1;
    *(_DWORD *)(v23 + 52) = a2;
    *(_DWORD *)(v23 + 56) = a3;
    v25 = *(_QWORD *)v16;
    if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
      goto LABEL_31;
    *(_QWORD *)v24 = v25;
    *((_QWORD *)v24 + 1) = v16;
    *(_QWORD *)(v25 + 8) = v24;
    *(_QWORD *)v16 = v24;
    v22 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
    if ( v22 >= 0 )
    {
      DXGPROCESS::AddCopyProtection(Current, v24);
      *a4 = Data1;
      goto LABEL_34;
    }
    v26 = *(struct DXGCOPYPROTECTION **)v24;
    if ( *(struct DXGCOPYPROTECTION **)(*(_QWORD *)v24 + 8LL) != v24
      || (v27 = (struct DXGCOPYPROTECTION **)*((_QWORD *)v24 + 1), *v27 != v24) )
    {
LABEL_31:
      __fastfail(3u);
    }
    *v27 = v26;
    *((_QWORD *)v26 + 1) = v27;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v24);
  }
  else
  {
    v22 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGCOPYPROTECTION class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_33:
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_34:
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  return (unsigned int)v22;
}
