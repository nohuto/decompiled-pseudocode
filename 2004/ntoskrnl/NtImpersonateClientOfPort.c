/*
 * XREFs of NtImpersonateClientOfPort @ 0x1408BEA70
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcImpersonateClientOfPort @ 0x140687FF0 (NtAlpcImpersonateClientOfPort.c)
 */

__int64 __fastcall NtImpersonateClientOfPort(void *a1, __int64 a2)
{
  __int64 result; // rax

  result = NtAlpcImpersonateClientOfPort(a1, a2, 0LL);
  if ( (_DWORD)result == -1073740030 )
    return 3221226015LL;
  return result;
}
