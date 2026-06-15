/*
 * XREFs of ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x140039190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetClientReleaseEvent(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        struct CP_EVENT_METADATA_BLOB *a3,
        struct CP_EVENT_METADATA_BLOB *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // r14
  int v9; // eax
  unsigned int v10; // ebx
  __int128 v12; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v12);
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CP_EVENT_METADATA_BLOB *, struct CP_EVENT_METADATA_BLOB *))(**((_QWORD **)this + 41) + 32LL))(
         *((_QWORD *)this + 41),
         a2,
         a3,
         a4);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      (const char *)(unsigned int)v9);
  if ( v8 )
    LeaveCriticalSection(v8);
  EtwEventActivityIdControl(4LL, &v12);
  return v10;
}
