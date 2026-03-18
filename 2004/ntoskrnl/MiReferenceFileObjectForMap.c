/*
 * XREFs of MiReferenceFileObjectForMap @ 0x1405FE028
 * Callers:
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 */

void *__fastcall MiReferenceFileObjectForMap(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 3) == 0 )
    return 0LL;
  v2 = (void *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  ObfReferenceObject(v2);
  return v2;
}
