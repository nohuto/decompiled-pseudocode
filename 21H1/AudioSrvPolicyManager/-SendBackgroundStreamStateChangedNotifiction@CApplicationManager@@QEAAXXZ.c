/*
 * XREFs of ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x1800264D0
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180031430 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x1800319E0 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180016D30 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180018120 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::SendBackgroundStreamStateChangedNotifiction(CApplicationManager *this)
{
  CApplicationManager *v1; // rdi
  GUID *v2; // r14
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v4; // r15d
  SIZE_T v5; // rbx
  HANDLE ProcessHeap; // rax
  GUID *v7; // rax
  _QWORD *v8; // rdi
  GUID *v9; // r13
  __int64 v10; // rbx
  GUID v11; // xmm6
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  GUID v14; // xmm0
  HANDLE v15; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-11h] BYREF
  char v17; // [rsp+48h] [rbp-9h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+7h]
  GUID v19; // [rsp+60h] [rbp+Fh]
  GUID v20; // [rsp+70h] [rbp+1Fh]

  v1 = g_ApplicationManager;
  v2 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v18 = v3;
  if ( *((_QWORD *)v1 + 11) )
  {
    v4 = 0;
    v5 = 20LL * *((_QWORD *)v1 + 11);
    if ( !is_mul_ok(*((_QWORD *)v1 + 11), 0x14uLL) )
      v5 = -1LL;
    ProcessHeap = GetProcessHeap();
    v7 = (GUID *)HeapAlloc(ProcessHeap, 0, v5);
    v2 = v7;
    if ( v7 )
    {
      v8 = (_QWORD *)*((_QWORD *)v1 + 9);
      if ( v8 )
      {
        v9 = v7;
        do
        {
          v10 = v8[2];
          v8 = (_QWORD *)*v8;
          if ( v10 )
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v10) )
          {
            v11 = GUID_00000000_0000_0000_0000_000000000000;
            v19 = GUID_00000000_0000_0000_0000_000000000000;
            lpCriticalSection = (LPCRITICAL_SECTION)(v10 + 32);
            v17 = 0;
            ATL::CCritSecLock::Lock(&lpCriticalSection);
            v12 = *(_QWORD **)(v10 + 72);
            if ( v12 )
            {
              while ( 1 )
              {
                v13 = v12[2];
                v12 = (_QWORD *)*v12;
                if ( !*(_DWORD *)(v13 + 448) )
                {
                  v14 = *(GUID *)(v13 + 552);
                  v20 = v14;
                  if ( *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 != *(_OWORD *)&v14 )
                    break;
                }
                if ( !v12 )
                  goto LABEL_16;
              }
              v11 = v14;
              v19 = v14;
            }
LABEL_16:
            if ( v17 )
            {
              LeaveCriticalSection(lpCriticalSection);
              v17 = 0;
            }
            *v9 = v11;
            LOBYTE(v9[1].Data1) = (unsigned int)CApplication::GetTotalActiveRenderStreamCount((CApplication *)v10) != 0;
            ++v4;
            v9 = (GUID *)((char *)v9 + 20);
          }
          if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL);
          }
        }
        while ( v8 );
        if ( v4 )
          RtlPublishWnfStateData(WNF_BMP_BG_PLAYSTATE_CHANGED, 0LL, v2, (unsigned int)(20 * v4), 0LL);
      }
    }
  }
  v15 = GetProcessHeap();
  HeapFree(v15, 0, v2);
  if ( v3 )
    LeaveCriticalSection(v3);
}
