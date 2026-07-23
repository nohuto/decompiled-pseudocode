/*
 * XREFs of EmpProviderDeregisterEntry @ 0x1404EEEF0
 * Callers:
 *     EmProviderDeregister @ 0x14088A1C0 (EmProviderDeregister.c)
 *     EmProviderDeregisterEntry @ 0x14088A370 (EmProviderDeregisterEntry.c)
 * Callees:
 *     EmpQueueRuleUpdateState @ 0x1403B4338 (EmpQueueRuleUpdateState.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EmpProviderDeregisterEntry(char *P)
{
  char *v1; // rax
  __int64 v3; // rcx
  char **v4; // rdx
  _QWORD **v5; // rdx
  PVOID *v6; // rcx
  _QWORD *i; // rdi

  if ( P )
  {
    v1 = P + 24;
    v3 = *((_QWORD *)P + 3);
    if ( *(char **)(v3 + 8) != v1
      || (v4 = (char **)*((_QWORD *)v1 + 1), *v4 != v1)
      || (*v4 = (char *)v3, *(_QWORD *)(v3 + 8) = v4, v5 = (_QWORD **)*((_QWORD *)P + 5), v5[1] != (_QWORD *)(P + 40))
      || (v6 = (PVOID *)*((_QWORD *)P + 6), *v6 != P + 40) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    v5[1] = v6;
    for ( i = *(_QWORD **)(*(_QWORD *)P + 72LL); i; i = (_QWORD *)*i )
      EmpQueueRuleUpdateState(*(i - 1), 0LL);
    ExFreePoolWithTag(P, 0x72704D45u);
  }
}
