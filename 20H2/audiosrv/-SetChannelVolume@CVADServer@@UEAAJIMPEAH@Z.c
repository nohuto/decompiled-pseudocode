/*
 * XREFs of ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1800DCE30
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x18002EA78 (-ValidateAudioLevel@@YA_NM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qdg @ 0x1800C2474 (WPP_SF_qdg.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800D2C24 (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 */

__int64 __fastcall CVADServer::SetChannelVolume(CVADServer *this, unsigned int a2, float a3, int *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  CAudioStream *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x26u,
      (__int64)&WPP_f0b9241badf93ac226eca421c556eecc_Traceguids,
      this,
      a2,
      a3);
  }
  if ( !ValidateAudioLevel(a3) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v9 = (CAudioStream *)*((_QWORD *)this + 24);
  if ( !v9 || !*((_DWORD *)this + 46) )
  {
    v11 = -2004287487;
    v13 = 2418LL;
    v12 = 2290679809LL;
    goto LABEL_15;
  }
  v10 = CAudioStream::SetStreamChannelVolume(v9, a2, a3, a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 2419LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v12);
    if ( v8 )
      LeaveCriticalSection(v8);
    return v11;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
