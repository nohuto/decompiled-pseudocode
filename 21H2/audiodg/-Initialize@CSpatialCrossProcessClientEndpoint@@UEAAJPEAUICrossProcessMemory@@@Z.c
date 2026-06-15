/*
 * XREFs of ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14006BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessMemory@@@Z @ 0x14001AF30 (--4-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProc.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x1400686E0 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14006AB98 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14006B87C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14006C0A4 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::Initialize(
        CSpatialCrossProcessClientEndpoint *this,
        struct ICrossProcessMemory *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ICrossProcessMemory *v15; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 1280);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessClientEndpoint::Initialize", 136, v4, v5);
  if ( *((_BYTE *)this - 1216) )
  {
    v6 = -2005139440;
    v7 = 138LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpclientendpoint.cpp",
      (const char *)v6);
    goto LABEL_13;
  }
  if ( !a2 )
  {
    v6 = -2147024809;
    v7 = 139LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)a2;
  v15 = a2;
  (*(void (__fastcall **)(struct ICrossProcessMemory *))(v8 + 8))(a2);
  v9 = CSpatialCrossProcessBaseEndpoint::MapCPMemory((CSpatialCrossProcessClientEndpoint *)((char *)this - 1312), a2);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v9 = CSparseIndexMapRT::SetMapSize(
           (CSpatialCrossProcessClientEndpoint *)((char *)this + 24),
           *((_DWORD *)this - 255) + *((_DWORD *)this - 256));
    v6 = v9;
    if ( v9 >= 0 )
    {
      *((_QWORD *)this - 147) = 0LL;
      *((_QWORD *)this - 149) = 0LL;
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 3) + 64LL), 1u);
      _InterlockedExchange((volatile __int32 *)this - 304, 1);
      wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=((__int64 *)this - 153, (__int64)a2);
      v6 = 0;
      goto LABEL_12;
    }
    v10 = 150LL;
  }
  else
  {
    v10 = 144LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpclientendpoint.cpp",
    (const char *)(unsigned int)v9);
LABEL_12:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v15);
LABEL_13:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
