/*
 * XREFs of EmProviderRegister @ 0x14079D170
 * Callers:
 *     <none>
 * Callees:
 *     EmpProviderRegister @ 0x14079D1E0 (EmpProviderRegister.c)
 */

__int64 __fastcall EmProviderRegister(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  if ( a1 )
    return EmpProviderRegister(a1, a5, a6);
  else
    return 3221225485LL;
}
