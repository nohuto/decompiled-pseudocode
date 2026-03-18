/*
 * XREFs of ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C002A9BC
 * Callers:
 *     _InitPwSB @ 0x1C0027658 (_InitPwSB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *(a1 - 14);
  v3 = 0LL;
  if ( a2 )
    v3 = a2 + *(a1 - 13) - v2;
  *(_QWORD *)(v2 + 144) = v3;
  result = a2;
  *a1 = a2;
  return result;
}
