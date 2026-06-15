/*
 * XREFs of ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x1800DC940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x1800D2CE0 (-GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800DE3C0 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamLatency(CVADServer *this, unsigned __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // edi
  int StreamLatency; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( !a3 )
  {
    v7 = -2147467261;
    v8 = 2201LL;
    v9 = 2147500035LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v9);
    goto LABEL_14;
  }
  if ( !*((_DWORD *)this + 46) )
  {
    v7 = -2004287487;
    v8 = 2202LL;
    v9 = 2290679809LL;
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v7 = -2004287487;
    v8 = 2203LL;
    v9 = 2290679809LL;
    goto LABEL_12;
  }
  v10 = CVADServer::ValidateStreamHandle(this, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    StreamLatency = CAudioStream::GetStreamLatency(*((CAudioStream **)this + 24), a3);
    v7 = StreamLatency;
    if ( StreamLatency < 0 )
    {
      v9 = (unsigned int)StreamLatency;
      v8 = 2209LL;
      goto LABEL_12;
    }
    v7 = 0;
  }
  else
  {
    v7 = -2005139336;
    if ( v10 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v10);
      v7 = v11;
    }
  }
LABEL_14:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
