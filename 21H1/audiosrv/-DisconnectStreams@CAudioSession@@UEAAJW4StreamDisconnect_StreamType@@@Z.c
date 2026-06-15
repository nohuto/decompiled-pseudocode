/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C7DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800BF494 (WPP_SF_Sd.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800C7134 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800C7AE4 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800CB020 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  int v2; // r13d
  __int64 v3; // rsi
  unsigned int v4; // r12d
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r14
  _BYTE *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // r15
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+58h] [rbp-50h]
  ATL::CAtlException *v17; // [rsp+68h] [rbp-40h] BYREF
  int v20; // [rsp+C0h] [rbp+18h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  v15 = a1 + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  lpCriticalSection = v5;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x66u, (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, 0LL);
  }
  v6 = *(_QWORD *)(v3 + 88);
  while ( 1 )
  {
    LODWORD(v6) = v6 - 1;
    v20 = v6;
    if ( (int)v6 < 0 )
      break;
    v7 = (int)v6;
    v12 = (int)v6;
    if ( (unsigned __int64)(int)v6 >= *(_QWORD *)(v3 + 88) )
      ATL::AtlThrowImpl(-2147024809);
    v8 = *(_BYTE **)(*(_QWORD *)(v3 + 80) + 8LL * (int)v6);
    if ( !v8[128] )
    {
      if ( v2 == -1 )
        goto LABEL_15;
      if ( v2 == 1 )
      {
        if ( v8[52] )
          goto LABEL_15;
      }
      else if ( !v2 && v8[53] )
      {
LABEL_15:
        v9 = (struct _RTL_CRITICAL_SECTION *)(v3 + 112);
        v14 = v3 + 112;
        EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 112));
        try
        {
          v4 = 0;
          v13 = v3 + 80;
          if ( (unsigned __int64)(int)v6 >= *(_QWORD *)(v3 + 88) )
            ATL::AtlThrowImpl(-2147024809);
          ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
            (_QWORD *)(v3 + 152),
            (_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v6));
        }
        catch ( ATL::CAtlException *v17 )
        {
          v11 = v17;
          if ( *(_DWORD *)v17 == -1073741571 )
            _o__resetstkoflw();
          v4 = *(_DWORD *)v11;
          if ( *(int *)v11 < 0
            && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x67u,
              (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
              0LL);
          }
          v7 = v12;
          v9 = (struct _RTL_CRITICAL_SECTION *)(v3 + 112);
          LODWORD(v6) = v20;
          v2 = a2;
          v3 = a1;
        }
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(v13, v7);
        if ( v14 )
          LeaveCriticalSection(v9);
      }
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  CAudioSession::DisconnectStreamList((CAudioSession *)(v3 - 16));
  return v4;
}
