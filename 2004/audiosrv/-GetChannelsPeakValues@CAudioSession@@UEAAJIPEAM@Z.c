/*
 * XREFs of ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C8460
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x1800BC0A0 (WPP_SF_S.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800BFCDC (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     WPP_SF_dd @ 0x1800C301C (WPP_SF_dd.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800D27EC (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 */

__int64 __fastcall CAudioSession::GetChannelsPeakValues(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  int v6; // edi
  unsigned __int64 v7; // rbp
  _BYTE *v8; // rbx
  float *v9; // rax
  __int64 v10; // r8
  float v11; // xmm0_4
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF
  void *Block; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, 0LL);
  }
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_30:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelsPeakValues", 1502, v6);
    return (unsigned int)v6;
  }
  if ( (_DWORD)v4 )
    memset_0(a3, 0, 4 * v4);
  v6 = (*(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)this + 432LL))(this, &v13);
  if ( v6 < 0 )
    goto LABEL_30;
  if ( (_DWORD)v4 != v13 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
        v4);
    }
    v6 = -2147024809;
    goto LABEL_30;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v7 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    while ( 1 )
    {
      Block = 0LL;
      if ( v7 >= *((_QWORD *)this + 13) )
LABEL_34:
        ATL::AtlThrowImpl(-2147024809);
      v6 = 0;
      v13 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v7) + 96LL);
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, v13);
      v8 = Block;
      if ( !Block )
        break;
      if ( v7 >= *((_QWORD *)this + 13) )
        goto LABEL_34;
      if ( CAudioStream::GetChannelPeakValues(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v7), v13, (float *)Block) >= 0
        && v13 )
      {
        v9 = a3;
        v10 = v13;
        do
        {
          v11 = *(float *)((char *)v9 + v8 - (_BYTE *)a3);
          if ( v11 > *v9 )
            *v9 = v11;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
      free(v8);
      if ( ++v7 >= *((_QWORD *)this + 13) )
        goto LABEL_27;
    }
    v6 = -2147024882;
    free(0LL);
    if ( this != (CAudioSession *)-48LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    goto LABEL_30;
  }
LABEL_27:
  if ( this != (CAudioSession *)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  return (unsigned int)v6;
}
