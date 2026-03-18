/*
 * XREFs of ?IsSupportedForCpuClipping@CProxyGeometry@@UEBA_NXZ @ 0x180014F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CProxyGeometry::IsSupportedForCpuClipping(CProxyGeometry *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 18);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 208LL))(v1);
  else
    return 1;
}
