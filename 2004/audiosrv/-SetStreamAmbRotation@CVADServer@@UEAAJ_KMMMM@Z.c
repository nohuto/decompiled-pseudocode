/*
 * XREFs of ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x1800DDF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAmbRotation@CAudioStream@@QEAAJMMMM@Z @ 0x1800D3790 (-SetAmbRotation@CAudioStream@@QEAAJMMMM@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800DE3C0 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamAmbRotation(
        CVADServer *this,
        unsigned __int64 a2,
        float a3,
        float a4,
        float a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( !*((_DWORD *)this + 46) )
  {
    v8 = -2004287487;
    v9 = 2312LL;
    v10 = 2290679809LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v10);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v8 = -2004287487;
    v9 = 2313LL;
    v10 = 2290679809LL;
    goto LABEL_10;
  }
  v11 = CVADServer::ValidateStreamHandle(this, a2);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = CAudioStream::SetAmbRotation(*((CAudioStream **)this + 24), a3, a4, a5);
    v8 = v13;
    if ( v13 < 0 )
    {
      v10 = (unsigned int)v13;
      v9 = 2319LL;
      goto LABEL_10;
    }
    v8 = 0;
  }
  else
  {
    v8 = -2005139336;
    if ( v11 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v11);
      v8 = v12;
    }
  }
LABEL_12:
  if ( v5 )
    LeaveCriticalSection(v5);
  return v8;
}
