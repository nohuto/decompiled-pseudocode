/*
 * XREFs of ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x1800DD400
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x1800D2B98 (-SetSampleRate@CAudioStream@@QEAAJM@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800DD730 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamSampleRate(CVADServer *this, unsigned __int64 a2, float a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( !*((_DWORD *)this + 46) )
  {
    v6 = -2004287487;
    v7 = 2224LL;
    v8 = 2290679809LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v8);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v6 = -2004287487;
    v7 = 2225LL;
    v8 = 2290679809LL;
    goto LABEL_10;
  }
  v9 = CVADServer::ValidateStreamHandle(this, a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = CAudioStream::SetSampleRate(*((CAudioStream **)this + 24), a3);
    v6 = v11;
    if ( v11 < 0 )
    {
      v8 = (unsigned int)v11;
      v7 = 2232LL;
      goto LABEL_10;
    }
    v6 = 0;
  }
  else
  {
    v6 = -2005139336;
    if ( v9 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B2,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v9);
      v6 = v10;
    }
  }
LABEL_12:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v6;
}
