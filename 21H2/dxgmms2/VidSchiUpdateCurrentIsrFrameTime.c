/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1C00322C8
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000E2F0 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x1C0015130 (VidSchiExecuteMmIoFlipAtISR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 */

LARGE_INTEGER __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER result; // rax
  BOOL v6; // esi
  LARGE_INTEGER v9; // r9
  signed __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // r8
  LONGLONG v13; // rcx
  __int64 v14; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+50h] [rbp-28h]

  v3 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  result.QuadPart = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 33232), 0);
  v6 = a3 != 0;
  v9.QuadPart = 0LL;
  if ( result.LowPart )
  {
    v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( !*(_QWORD *)(a2 + 33224) )
      *(union _LARGE_INTEGER *)(a2 + 33224) = PerformanceFrequency;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 33248), 0LL, 0LL);
    v11 = *(_QWORD *)(a2 + 33168);
    v12 = v10;
    LODWORD(v13) = v6;
    result.QuadPart = v9.QuadPart - v11;
    if ( v12 )
    {
      if ( result.QuadPart > v12 )
      {
        result.QuadPart /= v12;
        v13 = (v9.QuadPart - v11) / v12;
        if ( !a3 )
        {
          if ( !result.LowPart )
            return result;
          v9.QuadPart = v11 + v12 * result.QuadPart;
        }
      }
    }
  }
  else
  {
    LODWORD(v13) = a3 != 0;
    if ( a3 )
    {
      result = KeQueryPerformanceCounter(&PerformanceFrequency);
      LODWORD(v13) = v6;
      v9 = result;
      if ( !*(_QWORD *)(a2 + 33224) )
      {
        result = PerformanceFrequency;
        *(union _LARGE_INTEGER *)(a2 + 33224) = PerformanceFrequency;
      }
    }
  }
  if ( (_DWORD)v13 )
  {
    result.QuadPart = (unsigned int)v13;
    *(_QWORD *)(a2 + 33176) += (unsigned int)v13;
    *(LARGE_INTEGER *)(a2 + 33168) = v9;
    if ( *(_BYTE *)(a2 + 8) )
    {
      if ( !*(_BYTE *)(a1 + 148) )
      {
        v14 = *(_QWORD *)(a1 + 8);
        v17 = 0LL;
        v18 = 0;
        v16 = 0LL;
        result.QuadPart = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))DxgCoreInterface[60])(
                            v14,
                            0LL,
                            0LL,
                            &v16);
        if ( (result.LowPart & 0x80000000) == 0 )
          v3 = *((_QWORD *)&v16 + 1);
        *(_QWORD *)(a2 + 33184) = v3;
      }
    }
  }
  return result;
}
