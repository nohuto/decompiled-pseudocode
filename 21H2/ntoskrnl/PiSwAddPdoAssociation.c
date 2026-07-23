/*
 * XREFs of PiSwAddPdoAssociation @ 0x140770D50
 * Callers:
 *     PiSwGetChildPdo @ 0x140770AFC (PiSwGetChildPdo.c)
 * Callees:
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiSwAddPdoAssociation(__int64 a1, void *a2, void *a3)
{
  unsigned int v3; // edi
  _QWORD *PoolWithTag; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx

  v3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x57706E50u);
  if ( PoolWithTag )
  {
    ObfReferenceObject(a2);
    ObfReferenceObject(a3);
    PoolWithTag[4] = a2;
    PoolWithTag[5] = a3;
    v8 = *(_QWORD **)(a1 + 136);
    if ( *v8 != a1 + 128
      || (*PoolWithTag = a1 + 128,
          PoolWithTag[1] = v8,
          *v8 = PoolWithTag,
          *(_QWORD *)(a1 + 136) = PoolWithTag,
          v9 = PoolWithTag + 2,
          v10 = (_QWORD *)qword_140C433F8,
          *(__int64 **)qword_140C433F8 != &PiSwGlobalPdoAssociationList) )
    {
      __fastfail(3u);
    }
    *v9 = &PiSwGlobalPdoAssociationList;
    v9[1] = v10;
    *v10 = v9;
    qword_140C433F8 = (__int64)v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
