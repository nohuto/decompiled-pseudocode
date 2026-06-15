/*
 * XREFs of ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     WPP_SF_DDD @ 0x140044800 (WPP_SF_DDD.c)
 *     WPP_SF_q @ 0x140044908 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  int v4; // r15d
  __int64 v5; // r9
  int v6; // eax
  int v7; // ebx
  unsigned int v9; // edx
  int v10; // [rsp+20h] [rbp-88h]
  __int128 v11; // [rsp+40h] [rbp-68h] BYREF
  __int128 v12; // [rsp+50h] [rbp-58h]
  __int128 v13; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v12 = *(_OWORD *)((char *)this - 56);
  v13 = v12;
  EtwEventActivityIdControl(4LL, &v13);
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 128LL))(a2)
    && !*((_DWORD *)this + 12) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids, a2);
    }
LABEL_12:
    v7 = 0;
    goto LABEL_13;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this - 3);
  v4 = 1;
  v5 = (unsigned int)(*((_DWORD *)this + 11) - 1);
  *((_DWORD *)this + 11) = v5;
  v6 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids, v5);
    v6 = *((_DWORD *)this + 11);
  }
  if ( v6 )
    goto LABEL_10;
  v11 = *(_OWORD *)((char *)this - 56);
  EtwEventActivityIdControl(4LL, &v11);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 128LL))(*((_QWORD *)this + 3));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
  {
    v9 = 2;
    if ( v7 >= 0 )
      v9 = 4;
    if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v9 )
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        33LL,
        &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids,
        *((unsigned int *)this + 8),
        1,
        v7);
  }
  if ( v7 < 0 )
    v4 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v4;
  EtwEventActivityIdControl(4LL, &v11);
  if ( v7 >= 0 )
  {
LABEL_10:
    if ( this != (CSystemAudioDeviceSharedBase *)120 )
      LeaveCriticalSection((LPCRITICAL_SECTION)this - 3);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x340,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v7,
    v10);
  if ( this != (CSystemAudioDeviceSharedBase *)120 )
    LeaveCriticalSection((LPCRITICAL_SECTION)this - 3);
LABEL_13:
  EtwEventActivityIdControl(4LL, &v13);
  return (unsigned int)v7;
}
