/*
 * XREFs of ??$?0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAK@Z @ 0x18009094C
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092DF8 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x18009591C (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 */

RawInputProvidersTracing::DeviceAttached *__fastcall RawInputProvidersTracing::DeviceAttached::DeviceAttached(
        RawInputProvidersTracing::DeviceAttached *this,
        __int64 a2,
        unsigned int *a3)
{
  char *v3; // rbx
  _QWORD *v6; // rcx

  *((_QWORD *)this + 2) = this;
  v3 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  v6 = (_QWORD *)((char *)this + 136);
  *((_QWORD *)v3 + 6) = "DeviceAttached";
  *(_DWORD *)v3 = 0;
  v3[4] = 0;
  v3[64] = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v6[18] = 0LL;
  v6[19] = 0LL;
  memset_0(v6, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &RawInputProvidersTracing::DeviceAttached::`vftable';
  RawInputProvidersTracing::DeviceAttached::StartActivity(this, *a3);
  return this;
}
