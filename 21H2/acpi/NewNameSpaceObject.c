/*
 * XREFs of NewNameSpaceObject @ 0x1C0028388
 * Callers:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     InitializeNativeNamespace @ 0x1C0027E90 (InitializeNativeNamespace.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     memset @ 0x1C0030080 (memset.c)
 */

_SLIST_ENTRY *__fastcall NewNameSpaceObject(struct _SLIST_ENTRY *a1)
{
  _SLIST_ENTRY *v1; // rax
  _SLIST_ENTRY *v2; // rbx

  v1 = HeapAlloc(a1, 1330859592, 0xA0u);
  v2 = v1;
  if ( v1 )
  {
    memset(v1, 0, 0xA0uLL);
    v2[9].Next = 0LL;
    *((_QWORD *)&v2[9].Next + 1) = -1LL;
    v2[2].Next = (_SLIST_ENTRY *)((char *)v2 + 24);
    *((_QWORD *)&v2[1].Next + 1) = (char *)v2 + 24;
    LODWORD(v2[7].Next) = 2;
    LODWORD(v2[8].Next) = 1;
    *((_QWORD *)&v2[7].Next + 1) = v2;
  }
  return v2;
}
