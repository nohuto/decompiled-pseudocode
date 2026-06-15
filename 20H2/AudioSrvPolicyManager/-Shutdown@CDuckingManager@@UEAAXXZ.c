/*
 * XREFs of ?Shutdown@CDuckingManager@@UEAAXXZ @ 0x18000AB40
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180005E00 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDuckingManager::Shutdown(CDuckingManager *this)
{
  struct _Mtx_internal_imp_t *v2; // rsi
  int v3; // eax
  int v4; // eax

  *((_DWORD *)this + 120) = 1;
  v2 = (CDuckingManager *)((char *)this + 360);
  v3 = _Mtx_lock((CDuckingManager *)((char *)this + 360));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  *((_BYTE *)this + 352) = 1;
  v4 = _Mtx_unlock(v2);
  if ( v4 )
    std::_Throw_C_error(v4);
}
