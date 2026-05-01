/*
 * XREFs of ?FindMonitor@@YAPEAUHMONITOR__@@$$QEAV?$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z @ 0x1801C02C0
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x1801BF918 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1801C1F70 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@XZ @ 0x18017D8F4 (--1-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
LPARAM __fastcall FindMonitor(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  LPARAM v4; // rbx
  __int64 v5; // rdx
  LPARAM dwData; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[56]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]

  dwData = 0LL;
  v9 = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    if ( v2 == a1 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v2 + 8LL))(v2, v8);
      std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>(a1, v3);
    }
    else
    {
      v9 = v2;
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  EnumDisplayMonitors(
    0LL,
    0LL,
    (MONITORENUMPROC)lambda_9901e7d903e4130fca893991dae3b45b_::_lambda_invoker_cdecl_,
    (LPARAM)&dwData);
  v4 = dwData;
  std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>((__int64)v8, v5);
  return v4;
}
