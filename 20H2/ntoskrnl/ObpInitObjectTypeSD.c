/*
 * XREFs of ObpInitObjectTypeSD @ 0x14078B9DC
 * Callers:
 *     ObCreateObjectTypeEx @ 0x14078B3D0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x1405F6110 (ObLogSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14078BA70 (ObpCreateDefaultObjectTypeSD.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpInitObjectTypeSD(__int64 a1, void *a2)
{
  char *v4; // rbx
  int v5; // eax
  int v6; // edi
  PVOID P; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  P = a2;
  v4 = (char *)a2;
  if ( a2 || (v5 = ObpCreateDefaultObjectTypeSD(&P), v4 = (char *)P, v6 = v5, v5 >= 0) )
  {
    v6 = ObLogSecurityDescriptor(v4, &v9, 0x10u);
    if ( v6 >= 0 )
    {
      if ( v9 )
        *(_QWORD *)(a1 - 8) = v9 + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
  }
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
