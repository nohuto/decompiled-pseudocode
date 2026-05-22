/*
 * XREFs of _DWMInputRouter::Initialize_::_1_::dtor$44 @ 0x180050174
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICursor@@@WRL@Microsoft@@QEAA@XZ @ 0x180063F8C (--1-$ComPtr@UICursor@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall DWMInputRouter::Initialize_::_1_::dtor_44(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 680) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 680) &= ~1u;
    return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>(a2 + 336);
  }
  return result;
}
