/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x180028E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032A0C (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, int a2, int a3)
{
  volatile signed __int32 *v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r9
  int Process; // eax
  struct CProcess *v11; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  _QWORD *v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct CProcess *v18; // [rsp+98h] [rbp+38h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_4109024a29aa3ddbb06fcdb3e71bfe0c_Traceguids, a2);
    v3 = (volatile signed __int32 *)v18;
  }
  if ( a2 < 2 )
  {
    if ( g_ApplicationManager )
    {
      if ( v3 && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      }
      Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v18);
      v7 = Process;
      if ( Process < 0 )
      {
        v8 = 274LL;
LABEL_17:
        v9 = (unsigned int)Process;
        goto LABEL_18;
      }
      v11 = v18;
      if ( v18 )
        _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
      v13[1] = v11;
      v13[0] = off_1800443A8;
      v14 = a2;
      v15 = a3;
      v16 = v13;
      Process = QueueGenericWorkItem(v13);
      v7 = Process;
      if ( Process < 0 )
      {
        v8 = 279LL;
        goto LABEL_17;
      }
      v3 = (volatile signed __int32 *)v18;
    }
    v7 = 0;
    goto LABEL_21;
  }
  v7 = -2147024809;
  v8 = 270LL;
  v9 = 2147942487LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
    (const char *)v9);
  v3 = (volatile signed __int32 *)v18;
LABEL_21:
  if ( v3 && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
  return v7;
}
