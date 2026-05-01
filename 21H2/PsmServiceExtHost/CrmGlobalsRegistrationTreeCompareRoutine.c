/*
 * XREFs of CrmGlobalsRegistrationTreeCompareRoutine @ 0x180036A88
 * Callers:
 *     CrmGlobalsRegistrationAdd @ 0x180034360 (CrmGlobalsRegistrationAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsRegistrationTreeCompareRoutine(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 - 16);
  if ( *a1 <= v2 )
    return (unsigned int)-(*a1 < v2);
  else
    return 1LL;
}
