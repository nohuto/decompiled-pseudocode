/*
 * XREFs of ?EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z @ 0x18016C020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?UpdateCurrentStart@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAX_J@Z @ 0x18016FAE0 (-UpdateCurrentStart@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAX_J@Z.c)
 *     ?_Push_back_internal@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@AEAAX$$QEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@Z @ 0x1801701E0 (-_Push_back_internal@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Wind.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::EnsurePresent(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2,
        int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r10
  const char *v7; // r9
  __int128 v8; // rax
  __int64 v9; // rdi
  int v10; // edi
  __int64 v11; // r15
  const char *v12; // rdx
  int i; // esi
  __int64 v15; // rax
  const char *v16; // r14
  _QWORD v17[3]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = *((_QWORD *)this + 2);
  if ( a2 >= v4 )
  {
    v6 = *((int *)this + 9);
    v7 = (const char *)*((_QWORD *)this + 1);
    v8 = v6 * (a2 - v4);
    v9 = v8 / (__int64)v7;
    if ( a3 == -1 )
      v10 = v9 - *((_DWORD *)this + 9) + 1;
    else
      v10 = v9 - a3;
    try
    {
      if ( v10 > 0 )
      {
        v11 = (__int64)v7 / v6;
        v12 = &v7[v4];
        for ( i = 0; i < v10; ++i )
        {
          if ( (*((_QWORD *)this + 14))-- == 1LL )
            v15 = 0LL;
          else
            v15 = *((_QWORD *)this + 13) + 1LL;
          *((_QWORD *)this + 13) = v15;
          v16 = &v12[v11];
          v17[0] = v12;
          v17[1] = &v12[v11];
          v17[2] = 0LL;
          std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::_Push_back_internal(
            (char *)this + 80,
            v17);
          v12 = v16;
        }
        *((_QWORD *)this + 2) += v11 * v10;
        v4 = *((_QWORD *)this + 2);
      }
      if ( *((_BYTE *)this + 48) )
        Windows::Internal::SpatialInteractions::AverageHapticsFilter::UpdateCurrentStart(this, v4);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x167,
                             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
                             v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
