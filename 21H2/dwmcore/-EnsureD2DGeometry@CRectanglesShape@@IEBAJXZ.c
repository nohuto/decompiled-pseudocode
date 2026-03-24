/*
 * XREFs of ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x180017874
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180017470 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectanglesShape::EnsureD2DGeometry(CRectanglesShape *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int i; // esi
  int v8; // eax
  unsigned int v9; // ecx
  signed __int64 v10; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  signed __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  signed __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF

  v1 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( *((_QWORD *)this + 8) )
    return v1;
  if ( *((_DWORD *)this + 10) == 1 )
  {
    v17 = *(_OWORD *)*((_QWORD *)this + 2);
    v12 = (*(__int64 (__fastcall **)(void *, __int128 *, signed __int64 *))(*(_QWORD *)g_DeviceManager + 40LL))(
            g_DeviceManager,
            &v17,
            &v16);
    v1 = v12;
    if ( v12 >= 0 )
    {
      v10 = v16;
      v16 = 0LL;
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x14Bu, 0LL);
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(void *, signed __int64 *))(*(_QWORD *)g_DeviceManager + 80LL))(
           g_DeviceManager,
           &v15);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x152u, 0LL);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(signed __int64, __int64 *))(*(_QWORD *)v15 + 136LL))(v15, &v14);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x154u, 0LL);
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)this + 10); ++i )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v14 + 40LL))(
            v14,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 4)).m128_u64[0],
            0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 80LL))(
            v14,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 8),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 4)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 80LL))(
            v14,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 8),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 80LL))(
            v14,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 64LL))(v14, 1LL);
        }
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
        v1 = v8;
        if ( v8 >= 0 )
        {
          v10 = v15;
          v15 = 0LL;
LABEL_9:
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v10, 0LL) && v10 )
            (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v10 + 16LL))(v10);
          goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x168u, 0LL);
      }
    }
  }
LABEL_10:
  if ( v16 )
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v1;
}
