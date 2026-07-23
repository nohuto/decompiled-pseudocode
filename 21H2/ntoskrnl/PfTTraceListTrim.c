/*
 * XREFs of PfTTraceListTrim @ 0x1408E075C
 * Callers:
 *     PfTTraceListAdd @ 0x14067C39C (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 * Callees:
 *     <none>
 */

void ***__fastcall PfTTraceListTrim(int a1, unsigned int a2, void ***a3)
{
  int *v4; // r10
  int *v5; // r9
  void **v6; // rdx
  void ***result; // rax
  void **v8; // rcx
  int v9; // ecx
  void **v10; // rcx

  v4 = &dword_140C4FF24;
  if ( a1 != 1 )
    v4 = (int *)&unk_140C4FF20;
  v5 = &dword_140C4FE20;
  if ( a1 != 1 )
    v5 = &dword_140C4FE18;
  v6 = (void **)&unk_140C4FE08;
  result = (void ***)&unk_140C4FDF8;
  if ( a1 != 1 )
    v6 = (void **)&unk_140C4FDF8;
  while ( *v5 > a2 )
  {
    result = (void ***)*v6;
    if ( *v6 == v6 )
      break;
    if ( result[1] != v6
      || (v8 = *result, (*result)[1] != result)
      || ((*v6 = v8, v8[1] = v6, *((_DWORD *)result + 7))
        ? (v9 = *((_DWORD *)result + 12))
        : (v9 = *((_DWORD *)result + 9)),
          --*v5,
          *v4 += v9,
          v10 = a3[1],
          *v10 != a3) )
    {
      __fastfail(3u);
    }
    *result = (void **)a3;
    result[1] = v10;
    *v10 = result;
    a3[1] = (void **)result;
  }
  return result;
}
