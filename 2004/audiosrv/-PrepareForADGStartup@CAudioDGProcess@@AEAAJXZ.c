/*
 * XREFs of ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x1800458A0
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180010F60 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800523DC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180052B54 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B58FC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18012E7D0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CAudioDGProcess::PrepareForADGStartup(CAudioDGProcess *this, void *a2)
{
  void *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  HANDLE v6; // rbp
  void *v7; // rdx
  wil::details *v8; // rsi
  int LastErrorFailHr; // ebx
  wil::details *v10; // rcx
  wil::details *v11; // rcx
  HANDLE v12; // rbp
  wil::details *v13; // rsi
  DWORD LastError; // ebx
  void *v16; // rdx
  __int64 v17; // rdx
  DWORD v18; // ebx
  void *v19; // rdx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 88,
      0LL);
    *((_DWORD *)this + 24) = 0;
  }
  EventAttributes.lpSecurityDescriptor = 0LL;
  v4 = (wil::details *)*((_QWORD *)this + 14);
  EventAttributes.nLength = 24;
  EventAttributes.bInheritHandle = 1;
  if ( v4 )
  {
    wil::details::ResetEvent(v4, a2);
  }
  else
  {
    v6 = CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
    if ( v6 )
    {
      GetLastError();
      v8 = (wil::details *)*((_QWORD *)this + 14);
      if ( v8 )
      {
        LastError = GetLastError();
        wil::details::CloseHandle(v8, v16);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 14) = v6;
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
    }
    if ( LastErrorFailHr < 0 )
    {
      v17 = 148LL;
      goto LABEL_22;
    }
  }
  v10 = (wil::details *)*((_QWORD *)this + 15);
  if ( v10 )
  {
    wil::details::ResetEvent(v10, v7);
    return 0LL;
  }
  v12 = CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
  if ( v12 )
  {
    GetLastError();
    v13 = (wil::details *)*((_QWORD *)this + 15);
    if ( v13 )
    {
      v18 = GetLastError();
      wil::details::CloseHandle(v13, v19);
      SetLastError(v18);
    }
    *((_QWORD *)this + 15) = v12;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v11);
  }
  if ( LastErrorFailHr >= 0 )
    return 0LL;
  v17 = 157LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
    (const char *)(unsigned int)LastErrorFailHr,
    EventAttributes.nLength);
  return (unsigned int)LastErrorFailHr;
}
