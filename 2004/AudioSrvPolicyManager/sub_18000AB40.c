/*
 * XREFs of sub_18000AB40 @ 0x18000AB40
 * Callers:
 *     sub_180005E00 @ 0x180005E00 (sub_180005E00.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18000AB40(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rsi
  int v3; // eax
  int v4; // eax

  *(_DWORD *)(a1 + 480) = 1;
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 360);
  v3 = Mtx_lock((_Mtx_t)(a1 + 360));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  *(_BYTE *)(a1 + 352) = 1;
  v4 = Mtx_unlock(v2);
  if ( v4 )
    std::_Throw_C_error(v4);
}
