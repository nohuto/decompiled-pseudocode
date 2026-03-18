/*
 * XREFs of ?s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z @ 0x1801D5500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801A5068 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall CManipulation::s_ResetDeltaProperties(char *a1)
{
  unsigned int v2; // edi
  char v3; // cl
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( a1 )
  {
    v2 = 0;
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(&v5, (__int64)a1);
    v3 = a1[440];
    if ( (v3 & 1) != 0 )
    {
      v3 &= ~1u;
      *(_QWORD *)(a1 + 268) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a1 + 69) = 0;
      a1[440] = v3;
    }
    if ( (v3 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 292) = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
      *((_DWORD *)a1 + 75) = 1065353216;
      a1[440] = v3 & 0xFD;
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024809, 0x3CBu, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v5);
  return v2;
}
