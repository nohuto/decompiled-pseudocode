/*
 * XREFs of ??1?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x180137A44
 * Callers:
 *     _DWMInputRouter::Initialize_::_1_::dtor$25 @ 0x180050C4B (_DWMInputRouter--Initialize_--_1_--dtor$25.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<GameInputProcessor>::~ComPtr<GameInputProcessor>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<GameInputProcessor>::InternalRelease(a1);
}
