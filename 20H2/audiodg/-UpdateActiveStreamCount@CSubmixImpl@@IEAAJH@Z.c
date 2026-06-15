/*
 * XREFs of ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000FBC0
 * Callers:
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004240 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400042F0 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140004890 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140004940 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::UpdateActiveStreamCount(CSubmixImpl *this, int a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 42);
  *((_DWORD *)this + 42) = v3 + a2;
  v4 = *((_QWORD *)this + 38);
  if ( v4 )
  {
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v4)(v4, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v11);
    v4 = v11;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v4 )
    goto LABEL_9;
  if ( v3 )
  {
    if ( v3 != 1 || *((_DWORD *)this + 42) )
      goto LABEL_9;
    v5 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v4 + 104LL))(v4, this);
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_8;
    v8 = 769LL;
  }
  else
  {
    if ( *((_DWORD *)this + 42) != 1 )
      goto LABEL_9;
    v5 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v4 + 96LL))(v4, this);
    v6 = v5;
    if ( v5 >= 0 )
    {
LABEL_8:
      v4 = v11;
LABEL_9:
      v6 = 0;
      goto LABEL_10;
    }
    v8 = 764LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v5,
    v9);
  v4 = v11;
LABEL_10:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
