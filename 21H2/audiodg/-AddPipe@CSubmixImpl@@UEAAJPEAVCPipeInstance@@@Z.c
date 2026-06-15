/*
 * XREFs of ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400190B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSubmixImpl::AddPipe(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( !v5 )
    goto LABEL_2;
  v13 = 0LL;
  v8 = (**v5)(v5, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v13);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 1281LL;
LABEL_12:
    v10 = (unsigned int)v8;
    goto LABEL_13;
  }
  if ( !*((_DWORD *)this + 64) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v13 + 24LL))(v13, a2);
    v6 = v8;
    if ( v8 >= 0 )
    {
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v13);
LABEL_2:
      v6 = 0;
      goto LABEL_3;
    }
    v9 = 1286LL;
    goto LABEL_12;
  }
  v6 = -2147418113;
  v9 = 1285LL;
  v10 = 2147549183LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v10,
    v11);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v13);
LABEL_3:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v6;
}
