/*
 * XREFs of ?GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x18010FC30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x180110148 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::GetCallState(
        PhoneCallAudio *this,
        struct _TelephonyInstanceData *a2,
        enum TelephonyState *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
  if ( a2 && a3 )
  {
    if ( (unsigned int)PhoneCallAudio::IsInCall((PhoneCallAudio *)((char *)this - 8)) )
    {
      *(_DWORD *)a3 = 1;
      v7 = *((_QWORD *)this + 4);
      if ( v7 )
      {
        v13 = 0;
        v8 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *, int *))(*(_QWORD *)v7 + 96LL))(
               v7,
               a2,
               &v13);
        if ( v8 >= 0 )
          *(_DWORD *)a3 = v13 == 0;
        else
          v6 = v8;
      }
      else
      {
        v6 = -2147019873;
      }
    }
    else
    {
      v6 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)0x8000FFFFLL);
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
