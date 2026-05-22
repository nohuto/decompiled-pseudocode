/*
 * XREFs of ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801387A0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrincipal@@@Z @ 0x1800146EC (--R-$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrin.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceRemoval(DWMInputRouter *this, struct DeviceInfo *a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  unsigned __int64 v6; // rsi

  v2 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 85);
  v6 = (unsigned __int64)(*((_QWORD *)this + 86) - (_QWORD)v3 + 7LL) >> 3;
  if ( (unsigned __int64)v3 > *((_QWORD *)this + 86) )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      std::_Func_class<bool,ActivatableEntityBamoPrincipal *>::operator()(*v3, (__int64)a2);
      ++v2;
      ++v3;
    }
    while ( v2 != v6 );
  }
  return DWMInputRouter::OnDeviceChange(this, a2, 0);
}
