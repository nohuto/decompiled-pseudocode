/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180007244
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180005A78 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18000E030 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002420 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x1800031C0 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180004628 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800053B0 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180005470 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180005820 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800059C8 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(_QWORD *lpMem)
{
  int v2; // eax
  void *v3; // rbx
  DWORD v4; // eax
  void *v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  bool v8; // zf
  DWORD LastError; // eax
  DWORD v10; // ebx
  HANDLE ProcessHeap; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  const struct wil::details_abi::RawUsageIndex *v14; // r9
  void (__fastcall *v15)(wil::details *, void *); // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h] BYREF
  void (__fastcall *v17)(wil::details *, void *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  void (__fastcall *v19)(wil::details *, void *); // [rsp+40h] [rbp-C0h] BYREF
  void *v20; // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall *v21[2])(wil::details *, void *); // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[64]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v24[96]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  void *v26; // [rsp+158h] [rbp+58h] BYREF
  void (__fastcall *v27)(wil::details *, void *); // [rsp+160h] [rbp+60h] BYREF
  __int64 v28; // [rsp+168h] [rbp+68h] BYREF

  if ( !wil::details::g_processShutdownInProgress )
  {
    v2 = (int)wil::details::g_pfnDllShutdownInProgress;
    if ( wil::details::g_pfnDllShutdownInProgress )
      v2 = wil::details::g_pfnDllShutdownInProgress();
    if ( !v2 )
    {
      v3 = (void *)lpMem[1];
      v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
      if ( v4 != 258 )
      {
        if ( !v4 )
        {
LABEL_10:
          v8 = (*(_DWORD *)lpMem)-- == 1;
          if ( v8 )
          {
            wil::details_abi::SemaphoreValue::Destroy((wil::details_abi::SemaphoreValue *)(lpMem + 2));
            if ( v3 )
            {
              v26 = v3;
              LastError = GetLastError();
              v27 = wil::details::ReleaseMutex;
              v10 = LastError;
              wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v27, &v26);
              SetLastError(v10);
            }
            v3 = 0LL;
            wil::details_abi::FeatureStateData::~FeatureStateData((wil::details_abi::FeatureStateData *)(lpMem + 4));
            if ( lpMem[3] )
            {
              v28 = lpMem[3];
              v15 = wil::details::CloseHandle;
              wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v15, &v28);
            }
            if ( lpMem[2] )
            {
              v16 = lpMem[2];
              v17 = wil::details::CloseHandle;
              wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v17, &v16);
            }
            if ( lpMem[1] )
            {
              v18 = lpMem[1];
              v19 = wil::details::CloseHandle;
              wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v19, &v18);
            }
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, lpMem);
          }
          if ( v3 )
          {
            v20 = v3;
            v21[0] = wil::details::ReleaseMutex;
            wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(v21, &v20);
          }
          return;
        }
        if ( v4 != 128 )
        {
          wil::details::in1diag3::FailFast_Unexpected(retaddr, v5, v6, v7);
          JUMPOUT(0x180007459LL);
        }
      }
      if ( (v4 & 0xFFFFFF7F) != 0 )
        v3 = 0LL;
      goto LABEL_10;
    }
  }
  v8 = (*(_DWORD *)lpMem)-- == 1;
  if ( v8 )
  {
    wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v22);
    if ( *((_BYTE *)lpMem + 96) )
      wil::details_abi::RawUsageIndex::Swap(
        (wil::details_abi::RawUsageIndex *)v22,
        (struct wil::details_abi::RawUsageIndex *)(lpMem + 5));
    if ( *((_BYTE *)lpMem + 160) )
      wil::details_abi::RawUsageIndex::Swap(
        (wil::details_abi::RawUsageIndex *)v23,
        (struct wil::details_abi::RawUsageIndex *)(lpMem + 13));
    if ( *((_BYTE *)lpMem + 224) )
      wil::details_abi::RawUsageIndex::Swap(
        (wil::details_abi::RawUsageIndex *)v24,
        (struct wil::details_abi::RawUsageIndex *)(lpMem + 21));
    wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v22, v12, v13, v14);
    wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v22);
  }
}
