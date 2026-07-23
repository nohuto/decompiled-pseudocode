/*
 * XREFs of EmpSearchEntryDatabase @ 0x1403B468C
 * Callers:
 *     EmpProviderRegister @ 0x14079D1E0 (EmpProviderRegister.c)
 *     EmProviderRegisterEntry @ 0x14088A3D0 (EmProviderRegisterEntry.c)
 *     EmpParseEntryTypes @ 0x140A46B7C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140A46CF4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A47580 (EmpParseRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchEntryDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpEntryListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
