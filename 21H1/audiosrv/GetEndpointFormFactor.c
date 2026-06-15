/*
 * XREFs of GetEndpointFormFactor @ 0x18005E6C0
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001DE50 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005E85C (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     IsInternalFormFactorOf @ 0x180122520 (IsInternalFormFactorOf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetEndpointFormFactor(__int64 a1)
{
  HRESULT v2; // edi
  ULONG v3; // ebx
  PROPERTYKEY v5; // [rsp+20h] [rbp-40h] BYREF
  PROPVARIANT propvarIn[4]; // [rsp+40h] [rbp-20h] BYREF
  ULONG pulRet; // [rsp+80h] [rbp+20h] BYREF
  __int64 v8; // [rsp+88h] [rbp+28h]

  v8 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  pulRet = 0;
  LOWORD(propvarIn[0]) = 0;
  v5 = PKEY_AudioEndpoint_FormFactor;
  v2 = (*(__int64 (__fastcall **)(__int64, PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, &v5, propvarIn);
  if ( v2 >= 0 )
  {
    if ( !LOWORD(propvarIn[0]) )
      v2 = -2147023728;
    if ( v2 >= 0 )
    {
      if ( LOWORD(propvarIn[0]) )
        v2 = PropVariantToUInt32(propvarIn, &pulRet);
      else
        v2 = -2147023728;
    }
  }
  PropVariantClear(propvarIn);
  v3 = pulRet;
  if ( v2 == -2147023728 )
    v3 = 10;
  pulRet = v3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v3;
}
