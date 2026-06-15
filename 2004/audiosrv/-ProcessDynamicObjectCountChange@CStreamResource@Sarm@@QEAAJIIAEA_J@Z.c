/*
 * XREFs of ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x18010C344
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180107AE8 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18010ACB0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18010B92C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlg.c)
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x18010B9DC (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x18010C5E0 (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x18010C764 (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::ProcessDynamicObjectCountChange(
        Sarm::CStreamResource *this,
        unsigned int a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // edi
  bool v11; // cf
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r12d
  double v20; // xmm0_8
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  bool v24[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-1Ch] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  int v28[2]; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v7 = a3;
  SarmTraceLoggingTracer("Sarm::CStreamResource::ProcessDynamicObjectCountChange", 409, a3, (__int64)a4);
  *a4 = 0LL;
  v8 = Sarm::CStreamResource::ValidateDynamicObjectRequest(this, a2, v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v7 < *((_DWORD *)this + 17);
    v12 = v7;
    *((_DWORD *)this + 16) = a2;
    if ( !v11 )
      v12 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 18) = v12;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v19 = Sarm::CStreamResource::CalculateDynamicObjectGrantCount(this, v7);
    if ( v19 < *((_DWORD *)this + 20) )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v20 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
            + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
      else
        v20 = (double)(int)g_u64QPCFrequency;
      v16 = *(__int64 **)(*((_QWORD *)this + 1) + 16LL);
      if ( *v16 >= 0 )
        v13 = *v16;
      if ( v16[1] >= 0 )
        v14 = v16[1];
      v15 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v20);
    }
    if ( (unsigned int)dword_18019D350 > 5 )
    {
      v11 = v19 < *((_DWORD *)this + 20);
      v27 = (__int64)this + 16;
      v21 = *((_QWORD *)this + 5);
      v24[0] = v11;
      *(_QWORD *)v28 = v21;
      v25 = v7;
      PerformanceCount.LowPart = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v16,
        byte_18016A55A,
        v17,
        v18,
        (__int64)v28,
        &v27,
        (__int64)&PerformanceCount,
        (__int64)&v25,
        (__int64)v24);
    }
    v22 = Sarm::CStreamResource::SetDynamicObjects(this, v19, v15 + v13);
    v23 = v22;
    if ( v22 >= 0 )
    {
      *a4 = v13 + v15 + v14;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BA,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        (const char *)(unsigned int)v22);
      return v23;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
