/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800C2AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005DA6C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     pow @ 0x18006B66C (pow.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072424 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800BFCDC (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVolumeSoftware::UpdateMasterVolumeLevel(CVolumeSoftware *this)
{
  int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  float *v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  float v8; // xmm1_4
  int v9; // eax
  void *Block; // [rsp+80h] [rbp+8h] BYREF
  __int64 v12; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 256);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  v13 = v3;
  if ( *((_QWORD *)this + 31) )
  {
    Block = 0LL;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 31));
    v4 = (float *)Block;
    if ( !Block )
    {
      v2 = -2147024882;
      free(0LL);
      Block = 0LL;
LABEL_10:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::UpdateMasterVolumeLevel", 2048, v2);
      goto LABEL_17;
    }
    v5 = 0LL;
    v6 = *((unsigned int *)this + 31);
    if ( (_DWORD)v6 )
    {
      do
      {
        v7 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
               (_QWORD *)this + 11,
               (unsigned int)v5);
        v8 = pow(10.0, *(float *)(v7 + 4) / 20.0);
        v4[v5] = v8;
        v5 = (unsigned int)(v5 + 1);
        v6 = *((unsigned int *)this + 31);
      }
      while ( (unsigned int)v5 < (unsigned int)v6 );
    }
    v12 = 50000LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, float *, _QWORD, int, __int64 *))(**((_QWORD **)this + 31) + 32LL))(
           *((_QWORD *)this + 31),
           v6,
           v4,
           0LL,
           1,
           &v12);
    v2 = v9;
    if ( v9 == -2147417848 || v9 == -2147023174 )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 248));
      v2 = 0;
    }
    free(v4);
    Block = 0LL;
    if ( v2 < 0 )
      goto LABEL_10;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x36u,
      (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
      this);
  }
  *((_BYTE *)this + 300) = 1;
  Block = (void *)-10000000LL;
  if ( ThreadPool )
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, void **, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 38),
      &Block,
      0LL,
      0);
LABEL_17:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v2;
}
