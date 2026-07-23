/*
 * XREFs of BiFreeIdentifierList @ 0x1409721B0
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x140970A68 (BiBindEfiNamespaceObjects.c)
 *     BiBuildIdentifierList @ 0x140970B08 (BiBuildIdentifierList.c)
 *     BiExportStoreAlterationsToEfi @ 0x140972110 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall BiFreeIdentifierList(_QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  void *v6; // rcx

  v1 = *a1;
  while ( v1 != a1 )
  {
    v3 = (_QWORD *)*v1;
    v4 = v1;
    v1 = v3;
    if ( (_QWORD *)v3[1] != v4 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    *v5 = v3;
    v3[1] = v5;
    if ( (v4[6] & 1) != 0 )
    {
      v6 = (void *)v4[5];
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
}
