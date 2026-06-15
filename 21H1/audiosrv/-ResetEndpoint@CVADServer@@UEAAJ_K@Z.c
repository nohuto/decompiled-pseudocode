/*
 * XREFs of ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x1800DD7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800DE300 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CVADServer::ResetEndpoint(CVADServer *this, unsigned __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( !*((_DWORD *)this + 46) )
  {
    v5 = -2004287487;
    v6 = 2136LL;
    v7 = 2290679809LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v7);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v5 = -2004287487;
    v6 = 2137LL;
    v7 = 2290679809LL;
    goto LABEL_10;
  }
  v8 = CVADServer::ValidateStreamHandle(this, a2);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 88LL))(*((_QWORD *)this + 24));
    v5 = v10;
    if ( v10 < 0 )
    {
      v7 = (unsigned int)v10;
      v6 = 2141LL;
      goto LABEL_10;
    }
    v5 = 0;
  }
  else
  {
    v5 = -2005139336;
    if ( v8 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v8);
      v5 = v9;
    }
  }
LABEL_12:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
