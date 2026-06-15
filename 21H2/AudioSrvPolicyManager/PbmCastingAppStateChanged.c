/*
 * XREFs of PbmCastingAppStateChanged @ 0x180023D90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800016F0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B7E4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAU_CastingAppStateChangedContext@@@Z0@Z @ 0x18002444C (--$QueueApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmCastingAppStateChanged(void *a1, int a2)
{
  int Process; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rbx
  struct CProcess *v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // r9
  int v9; // edx
  volatile signed __int32 *v10; // rsi
  struct CProcess *v11; // rbx
  struct CProcess *v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  v13 = 0LL;
  Process = 0;
  if ( a2 <= 1 )
  {
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v13);
      if ( Process >= 0 )
      {
        ProcessHeap = GetProcessHeap();
        v5 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
        if ( v5 )
        {
          v6 = v13;
          *(_QWORD *)v5 = v13;
          v5[2] = a2;
          _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
        }
        else
        {
          v5 = 0LL;
        }
        if ( v5 )
        {
          v7 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
          if ( *v7 > 4u )
          {
            v9 = *((_DWORD *)v13 + 48);
            LODWORD(v15) = a2 == 0;
            LODWORD(v16) = v9;
            v14 = *((_QWORD *)v13 + 26);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)v7,
              (unsigned __int8 *)dword_18004649E,
              (__int64)v13,
              v8,
              (void **)&v14,
              (__int64)&v16,
              (__int64)&v15);
          }
          Process = QueueApplicationManagerWorkItem<_CastingAppStateChangedContext>(v7, v5);
          if ( Process >= 0 )
            v5 = 0LL;
        }
        else
        {
          Process = -2147024882;
        }
        if ( v5 )
        {
          v10 = *(volatile signed __int32 **)v5;
          if ( *(_QWORD *)v5 )
          {
            if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 32LL))(v10);
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
            }
            *(_QWORD *)v5 = 0LL;
          }
          operator delete(v5, (const struct std::nothrow_t *)0x10);
        }
      }
      v11 = v13;
      if ( v13 && _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v11 + 32LL))(v11);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)Process;
}
