/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0211080
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0294798 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007384 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0039DBC (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C013FEE8 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int Data1; // r14d
  char *v23; // rsi
  char v24; // r9
  DXGADAPTER *v25; // r8
  unsigned int v26; // r11d
  int v27; // edx
  unsigned int v28; // eax
  char v29; // cl
  __int64 v30; // rax
  unsigned int v31; // ebx
  char *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // esi
  __int64 v42; // rcx
  _QWORD *v43; // rdx
  struct _KTHREAD *v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v51[16]; // [rsp+28h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 5191LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = 5192LL;
    WdLogEvent5_WdAssertion(v11);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8);
  if ( !Current )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v15 + 24) = 5195LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  v17 = *((_QWORD *)Current + 42);
  if ( *(struct _KTHREAD **)(v17 + 16) != CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, CurrentThread);
    *(_QWORD *)(v18 + 24) = 5196LL;
    WdLogEvent5_WdAssertion(v18);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v51, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  Uuid = 0LL;
  while ( 1 )
  {
    v19 = ExUuidCreate(&Uuid);
    if ( v19 >= 0 )
      break;
    if ( v19 != -1073741267 )
    {
      v30 = WdLogNewEntry5_WdError(v21, v20);
      v31 = -1073741801;
      *(_QWORD *)(v30 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v30);
      goto LABEL_29;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v23 = (char *)(this + 8);
  do
  {
    v24 = 1;
    v25 = this[8];
    while ( 1 )
    {
      v26 = Data1;
      if ( v25 == (DXGADAPTER *)v23 || !v25 )
        break;
      v27 = *((_DWORD *)v25 + 12);
      v28 = Data1 + 1;
      v25 = *(DXGADAPTER **)v25;
      if ( v27 != Data1 )
        v28 = Data1;
      v29 = 0;
      Data1 = v28;
      if ( v27 != v26 )
        v29 = v24;
      v24 = v29;
    }
  }
  while ( !v24 );
  v32 = (char *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
  v37 = v32;
  if ( v32 )
  {
    *((_QWORD *)v32 + 2) = this;
    *(_OWORD *)v32 = 0LL;
    *((_QWORD *)v32 + 5) = Current;
    *(_OWORD *)(v32 + 24) = 0LL;
    *((_DWORD *)v32 + 12) = Data1;
    *((_DWORD *)v32 + 13) = a2;
    *((_DWORD *)v32 + 14) = a3;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v37 )
  {
    v40 = *(_QWORD *)v23;
    if ( *(char **)(*(_QWORD *)v23 + 8LL) == v23 )
    {
      *v37 = v40;
      v37[1] = v23;
      *(_QWORD *)(v40 + 8) = v37;
      *(_QWORD *)v23 = v37;
      v41 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
      if ( v41 >= 0 )
      {
        v44 = KeGetCurrentThread();
        if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 42) + 16LL) != v44 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v44, v39);
          *(_QWORD *)(v45 + 24) = 679LL;
          WdLogEvent5_WdAssertion(v45);
        }
        v46 = (_QWORD *)((char *)Current + 304);
        v47 = v37 + 3;
        v48 = *((_QWORD *)Current + 38);
        if ( *(struct DXGPROCESS **)(v48 + 8) == (struct DXGPROCESS *)((char *)Current + 304) )
        {
          *v47 = v48;
          v47[1] = v46;
          *(_QWORD *)(v48 + 8) = v47;
          *v46 = v47;
          *a4 = Data1;
          goto LABEL_39;
        }
      }
      else
      {
        v42 = *v37;
        if ( *(_QWORD **)(*v37 + 8LL) == v37 )
        {
          v43 = (_QWORD *)v37[1];
          if ( (_QWORD *)*v43 == v37 )
          {
            *v43 = v42;
            *(_QWORD *)(v42 + 8) = v43;
            DXGCOPYPROTECTION::`scalar deleting destructor'((DXGCOPYPROTECTION *)v37);
            DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_39:
            v31 = v41;
            goto LABEL_40;
          }
        }
      }
    }
    __fastfail(3u);
  }
  v38 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
  v31 = -1073741801;
  *(_QWORD *)(v38 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v38);
LABEL_29:
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_40:
  if ( v51[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v51, v39);
  return v31;
}
