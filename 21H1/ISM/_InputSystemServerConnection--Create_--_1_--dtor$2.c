/*
 * XREFs of _InputSystemServerConnection::Create_::_1_::dtor$2 @ 0x18005142C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BC00C (--1-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall InputSystemServerConnection::Create_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<InputSystemServerConnection>::~ComPtr<InputSystemServerConnection>(*(_QWORD *)(a2 + 112));
  }
  return result;
}
