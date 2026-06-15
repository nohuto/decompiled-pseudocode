/*
 * XREFs of ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800113E0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Do_call @ 0x180013870 (std--_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_--_Do_call.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000FF70 (WPP_SF_S.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x180011FF4 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18001497C (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoDuck(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  int v5; // esi
  __int64 v8; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  SIZE_T v12; // r15
  HANDLE ProcessHeap; // rax
  _DWORD *v14; // rax
  void *v15; // rbx
  __int64 (__fastcall ***v16)(); // rdx
  HANDLE v17; // rax
  _DWORD *v18; // [rsp+20h] [rbp-49h] BYREF
  const unsigned __int16 *v19; // [rsp+28h] [rbp-41h]
  __int128 v20; // [rsp+30h] [rbp-39h]
  __int64 (__fastcall **v21)(); // [rsp+40h] [rbp-29h] BYREF
  __int128 v22; // [rsp+48h] [rbp-21h]
  __int64 (__fastcall ***v23)(); // [rsp+78h] [rbp+Fh]

  v19 = a3;
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v8 = *((_QWORD *)this + 15);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( !v8 )
    return 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids, a2);
  }
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  v11 = 2 * v10 + 2;
  v12 = 2 * v10 + 74;
  ProcessHeap = GetProcessHeap();
  v14 = HeapAlloc(ProcessHeap, 0, v12);
  v18 = v14;
  v15 = v14;
  if ( v14 )
  {
    *v14 = v12;
    v18[1] = 512;
    v18[6] = v11;
    *((_BYTE *)v18 + 60) = 1;
    v18[14] = a4;
    StringCbCopyW((unsigned __int16 *)v18 + 36, v11, a2);
    *((_QWORD *)&v20 + 1) = &v18;
    *(_QWORD *)&v20 = this;
    v21 = off_180043C30;
    v23 = &v21;
    v22 = v20;
    v5 = CDuckingManager::ForEachDuckableSession(this, v19, &v21);
    if ( v23 )
    {
      v16 = &v21;
      LOBYTE(v16) = v23 != &v21;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v23)[4])(v23, v16);
    }
    v15 = v18;
  }
  v17 = GetProcessHeap();
  HeapFree(v17, 0, v15);
  v18 = 0LL;
  if ( v5 < 0 )
    AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoDuck", 697, v5);
  return (unsigned int)v5;
}
