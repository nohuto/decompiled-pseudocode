/*
 * XREFs of ?RemoteDisconnect@CAudioStream@@UEAAJXZ @ 0x1800D30C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B5534 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800BD18C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CAudioStream::RemoteDisconnect(HANDLE *this)
{
  DWORD v2; // eax
  __int64 v3; // r8
  const char *v4; // r9
  int v5; // eax
  unsigned int v6; // edi
  DWORD v8; // edi
  HANDLE v9; // rcx
  DWORD v10; // eax
  const char *v11; // rax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = WaitForSingleObjectEx(this[39], 0x3E8u, 0);
  if ( v2 == 258 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x550,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL);
  }
  else
  {
    if ( v2 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, 2569LL, v3, v4);
      __debugbreak();
    }
    (*((void (__fastcall **)(char *))*(this - 1) + 20))((char *)this - 8);
    if ( !this[8] )
      return 0LL;
    v5 = (*((__int64 (__fastcall **)(HANDLE *))*this + 22))(this);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    v8 = 1;
    v9 = this[9];
    Handles[0] = this[38];
    if ( (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)v9 + 176LL))(v9) )
    {
      Handles[1] = (HANDLE)(*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)this[9] + 176LL))(this[9]);
      v8 = 2;
    }
    v10 = WaitForMultipleObjects(v8, Handles, 0, 0x3E8u);
    if ( v10 != -1 && v10 != 258 )
      return 0LL;
    v11 = (const char *)(*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)this[9] + 72LL))(this[9]);
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x56F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL,
      (int)"Application Id: %ws",
      v11);
  }
  return 2147500037LL;
}
