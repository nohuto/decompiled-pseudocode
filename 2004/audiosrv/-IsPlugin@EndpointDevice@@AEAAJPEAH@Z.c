/*
 * XREFs of ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x180057C54
 * Callers:
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x18005762C (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180057814 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::IsPlugin(EndpointDevice *this, int *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v8 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 3) + 32LL))(
           *((_QWORD *)this + 3),
           2LL,
           &v8);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
                 v8,
                 &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
                 pvar),
          v4 < 0) )
    {
      v3 = v4;
    }
    else if ( LOWORD(pvar[0]) == 72 )
    {
      *a2 = 1;
    }
  }
  else
  {
    v3 = -2147467261;
  }
  PropVariantClear(pvar);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v3;
}
