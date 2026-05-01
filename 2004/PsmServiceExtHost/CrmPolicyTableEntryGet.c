/*
 * XREFs of CrmPolicyTableEntryGet @ 0x180030444
 * Callers:
 *     CrmActivityStart @ 0x180030020 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

char *__fastcall CrmPolicyTableEntryGet(int a1)
{
  const void *v1; // rdx
  size_t v2; // r8
  char *v3; // rbx
  void *v5; // rax
  int Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v1 = 0LL;
  v2 = 0LL;
  v3 = (char *)&CrmPolicyTable + 568 * a1;
  if ( dword_1800B3EF8 == 14 )
  {
    v1 = &CrmPolicyTable8828080Override;
    v2 = 1LL;
  }
  if ( dword_1800B3EF8 == 5 || dword_1800B3EF8 == 11 || dword_1800B3EF8 == 12 )
  {
    v1 = &CrmPolicyTableXboxOverride;
    v2 = 3LL;
  }
  if ( v1 )
  {
    v5 = bsearch(&Key, v1, v2, 0x238uLL, CrmPolicyTableCompare);
    if ( v5 )
      return (char *)v5;
  }
  return v3;
}
