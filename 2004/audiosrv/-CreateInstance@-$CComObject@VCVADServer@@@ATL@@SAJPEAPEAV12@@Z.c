/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800111C0
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18000FE40 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18006DF04 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800DCB34 (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(_QWORD *a1)
{
  _QWORD *v1; // r14
  unsigned int v3; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  volatile int *v6; // rdx
  _DWORD *v7; // rbx
  int v8; // eax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp+18h]

  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v3 = -2147024882;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x230uLL);
  try
  {
    v7 = v5;
    if ( v5 )
    {
      v5[2] = 0;
      *((_OWORD *)v5 + 1) = 0LL;
      *((_OWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 6) = 0LL;
      *((_BYTE *)v5 + 56) = 0;
      v5[16] = 0;
      *((_QWORD *)v5 + 9) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 10) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 11) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 14) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((GUID *)v7 + 6) = GUID_00000000_0000_0000_0000_000000000000;
      v7[30] = 0;
      v7[33] = -1;
      v7[32] = 0;
      v7[34] = 0;
      *((_QWORD *)v7 + 18) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 19) = 0LL;
      *((_QWORD *)v7 + 20) = 0LL;
      *((_QWORD *)v7 + 21) = 0LL;
      *((_QWORD *)v7 + 22) = 0LL;
      v7[46] = 0;
      *((_BYTE *)v7 + 188) = 0;
      *((_QWORD *)v7 + 24) = 0LL;
      *((_BYTE *)v7 + 200) = 1;
      *((_QWORD *)v7 + 26) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 27) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v7 + 56), 0, 0);
      v7[68] = 0;
      *(GUID *)(v7 + 110) = GUID_00000000_0000_0000_0000_000000000000;
      *((_QWORD *)v7 + 57) = 0LL;
      *((_QWORD *)v7 + 58) = 0LL;
      *((_QWORD *)v7 + 59) = 0LL;
      *((_QWORD *)v7 + 60) = 0LL;
      *((_BYTE *)v7 + 488) = 0;
      *((_QWORD *)v7 + 62) = 0LL;
      *((_QWORD *)v7 + 64) = 0LL;
      *((_QWORD *)v7 + 63) = 0LL;
      QueryPerformanceFrequency((LARGE_INTEGER *)v7 + 65);
      *((_QWORD *)v7 + 66) = 0LL;
      *((_QWORD *)v7 + 67) = 0LL;
      *((_QWORD *)v7 + 68) = 0LL;
      v7[138] = 0;
      memset_0(v7 + 70, 0, 0xA0uLL);
      *(_QWORD *)(v7 + 83) = 0LL;
      v7[82] = 0;
      v7[102] = 0;
      *(_QWORD *)v7 = &ATL::CComObject<CVADServer>::`vftable';
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
    v11 = v7;
  }
  catch ( ... )
  {
    v6 = (volatile int *)&v9;
    v1 = a1;
    v3 = -2147024882;
    v7 = v11;
  }
  if ( v7 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 2), v6);
    v8 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 4));
    if ( v8 >= 0 )
    {
      *((_BYTE *)v7 + 56) = 1;
      v8 = 0;
    }
    v3 = 0;
    if ( v8 < 0 )
      v3 = v8;
    CVADServer::InternalFinalConstructRelease((CVADServer *)v7);
    if ( v3 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v7 + 216LL))(v7, 1LL);
      v7 = 0LL;
    }
  }
  *v1 = v7;
  return v3;
}
