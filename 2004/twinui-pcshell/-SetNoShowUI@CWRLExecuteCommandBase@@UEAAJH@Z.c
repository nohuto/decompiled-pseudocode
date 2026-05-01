/*
 * XREFs of ?SetNoShowUI@CWRLExecuteCommandBase@@UEAAJH@Z @ 0x18008B560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWRLExecuteCommandBase::SetNoShowUI(CWRLExecuteCommandBase *this, int a2)
{
  __int64 result; // rax

  *((_DWORD *)this + 14) |= 0x100u;
  result = 0LL;
  *((_DWORD *)this + 19) = a2;
  return result;
}
