/*
 * XREFs of ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004390
 * Callers:
 *     <none>
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140001388 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     WPP_SF_DDD @ 0x140044800 (WPP_SF_DDD.c)
 *     WPP_SF_q @ 0x140044908 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStarted(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // r9
  int v6; // eax
  char *v7; // rdi
  int v8; // ebx
  int v9; // r15d
  unsigned int v11; // edx
  int v12; // [rsp+20h] [rbp-88h]
  __int128 v13; // [rsp+40h] [rbp-68h] BYREF
  __int128 v14; // [rsp+50h] [rbp-58h]
  __int128 v15; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v14 = *(_OWORD *)((char *)this - 56);
  v15 = v14;
  EtwEventActivityIdControl(4LL, &v15);
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 128LL))(a2)
    && !*((_DWORD *)this + 12) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids, a2);
    }
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 120);
  EnterCriticalSection((LPCRITICAL_SECTION)this - 3);
  v5 = (unsigned int)(*((_DWORD *)this + 11) + 1);
  *((_DWORD *)this + 11) = v5;
  v6 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids, v5);
    v6 = *((_DWORD *)this + 11);
  }
  if ( v6 != 1 )
    goto LABEL_12;
  v7 = (char *)this - 304;
  if ( *((_DWORD *)this + 8) )
  {
    v8 = CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)this - 304, 2);
  }
  else
  {
    v13 = *(_OWORD *)(v7 + 248);
    EtwEventActivityIdControl(4LL, &v13);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 41) + 112LL))(
           *((_QWORD *)v7 + 41),
           (unsigned __int64)(v7 + 296) & ((unsigned __int128)-(__int128)(unsigned __int64)v7 >> 64));
    v9 = 3;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
    {
      v11 = 2;
      if ( v8 >= 0 )
        v11 = 4;
      if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v11 )
        WPP_SF_DDD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          33LL,
          &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids,
          *((unsigned int *)v7 + 84),
          3,
          v8);
    }
    if ( v8 < 0 )
      v9 = *((_DWORD *)v7 + 84);
    *((_DWORD *)v7 + 84) = v9;
    EtwEventActivityIdControl(4LL, &v13);
  }
  if ( v8 >= 0 )
  {
LABEL_12:
    if ( v4 )
      LeaveCriticalSection(v4);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31F,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v8,
    v12);
  if ( v4 )
    LeaveCriticalSection(v4);
LABEL_15:
  EtwEventActivityIdControl(4LL, &v15);
  return (unsigned int)v8;
}
