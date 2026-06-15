/*
 * XREFs of GetContainerId @ 0x18005E368
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001D7D0 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005E1BC (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     IsInternalFormFactorOf @ 0x1801218A0 (IsInternalFormFactorOf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetContainerId(__int64 a1, __int64 *a2, _OWORD *a3)
{
  __int64 v4; // rax
  int v5; // ebx
  char v6; // bl
  __int64 v8; // rdx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  v4 = *a2;
  *(_OWORD *)pvar = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, const PROPERTYKEY *, PROPVARIANT *))(v4 + 40))(
         a2,
         &PKEY_Device_ContainerId,
         pvar);
  if ( v5 < 0 )
  {
    v8 = 91LL;
  }
  else
  {
    if ( LOWORD(pvar[0]) == 72 )
    {
      v6 = 1;
      *a3 = *(_OWORD *)pvar[1];
    }
    else
    {
      v6 = 0;
    }
    PropVariantClear(pvar);
    if ( v6 )
      return 0LL;
    v5 = -2147024894;
    v8 = 99LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
