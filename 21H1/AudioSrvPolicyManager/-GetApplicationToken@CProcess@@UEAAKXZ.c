/*
 * XREFs of ?GetApplicationToken@CProcess@@UEAAKXZ @ 0x18001F1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetApplicationToken(CProcess *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 30);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 16);
  return result;
}
