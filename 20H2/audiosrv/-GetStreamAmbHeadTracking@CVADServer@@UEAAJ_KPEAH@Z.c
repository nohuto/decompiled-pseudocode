/*
 * XREFs of ?GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z @ 0x1800DBAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800DD730 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamAmbHeadTracking(CVADServer *this, unsigned __int64 a2, int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( !*((_DWORD *)this + 46) )
  {
    v7 = -2004287487;
    v8 = 2289LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_19;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v7 = -2004287487;
    v8 = 2290LL;
    goto LABEL_17;
  }
  v9 = CVADServer::ValidateStreamHandle(this, a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 24) + 216LL);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 40LL))(v11, a3);
      if ( v12 == -2005139384 )
        v12 = -2147024809;
      v7 = v12;
      if ( v12 >= 0 )
        v7 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x216,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v12);
      if ( v7 >= 0 )
      {
        v7 = 0;
        goto LABEL_19;
      }
    }
    else
    {
      v7 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)0x80070057LL);
    }
    v8 = 2296LL;
    goto LABEL_17;
  }
  v7 = -2005139336;
  if ( v9 != -2005139336 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v9);
    v7 = v10;
  }
LABEL_19:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
