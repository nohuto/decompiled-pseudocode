/*
 * XREFs of ?CompleteOffTheadPreComputeRequests@CComposition@@IEAAXPEAU_SLIST_ENTRY@@@Z @ 0x180156F90
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801572A4 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CComposition::CompleteOffTheadPreComputeRequests(CComposition *this, struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *v2; // rdi
  struct _SLIST_ENTRY *v3; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = v2;
      SetEvent(*((HANDLE *)&v2[1].Next + 1));
      v2 = v2->Next;
      operator delete(v3);
    }
    while ( v2 );
  }
}
