/*
 * XREFs of ?OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x18016D5F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?_Push_back_internal@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@AEAAX$$QEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@Z @ 0x180170690 (-_Push_back_internal@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Wind.c)
 *     ?_Tidy@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x180170734 (-_Tidy@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$alloca.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnInit(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2)
{
  int v4; // ebx
  const char *v5; // r9
  __int64 v6; // r12
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = 0;
  *((_BYTE *)this + 48) = 0;
  std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::_Tidy((char *)this + 80);
  v6 = *((_QWORD *)this + 1) / *((int *)this + 9);
  try
  {
    while ( v4 < *((_DWORD *)this + 9) )
    {
      v8[0] = a2;
      v8[1] = v6 + a2;
      v8[2] = 0LL;
      std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::_Push_back_internal(
        (char *)this + 80,
        v8);
      a2 += v6;
      ++v4;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE9,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
                           v5);
  }
  return result;
}
