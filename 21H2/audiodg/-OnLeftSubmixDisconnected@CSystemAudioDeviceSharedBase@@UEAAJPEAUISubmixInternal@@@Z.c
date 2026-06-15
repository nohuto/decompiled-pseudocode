/*
 * XREFs of ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140019740
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400447C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_DDD @ 0x140044800 (WPP_SF_DDD.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  __int64 v4; // r9
  int DebugInfo; // eax
  int v6; // edi
  int SpinCount; // eax
  unsigned int v9; // edx
  int v10; // [rsp+20h] [rbp-78h]
  __int128 v11; // [rsp+40h] [rbp-58h] BYREF
  __int128 v12; // [rsp+50h] [rbp-48h]
  __int128 v13; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v12 = *(_OWORD *)&this[-2].LockSemaphore;
  v13 = v12;
  EtwEventActivityIdControl(4LL, &v13);
  EnterCriticalSection(this - 3);
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, struct ISubmixInternal *))this->DebugInfo[2].CriticalSection)(
      this,
      a2);
  v4 = (unsigned int)(LODWORD(this[1].DebugInfo) - 1);
  LODWORD(this[1].DebugInfo) = v4;
  DebugInfo = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids, v4);
    DebugInfo = (int)this[1].DebugInfo;
  }
  if ( !DebugInfo && LODWORD(this->SpinCount) )
  {
    v11 = *(_OWORD *)&this[-2].LockSemaphore;
    EtwEventActivityIdControl(4LL, &v11);
    v6 = (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)this->LockSemaphore + 120LL))(this->LockSemaphore);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
    {
      v9 = 2;
      if ( v6 >= 0 )
        v9 = 4;
      if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v9 )
        WPP_SF_DDD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          33LL,
          &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids,
          LODWORD(this->SpinCount),
          0,
          v6);
    }
    if ( v6 < 0 )
      SpinCount = this->SpinCount;
    else
      SpinCount = 0;
    LODWORD(this->SpinCount) = SpinCount;
    EtwEventActivityIdControl(4LL, &v11);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x363,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
        (const char *)(unsigned int)v6,
        v10);
  }
  if ( this != (struct _RTL_CRITICAL_SECTION *)120 )
    LeaveCriticalSection(this - 3);
  EtwEventActivityIdControl(4LL, &v13);
  return 0LL;
}
