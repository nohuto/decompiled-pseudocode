/*
 * XREFs of MiReferenceFileObjectForMap @ 0x1406FC03C
 * Callers:
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiAllowImageMap @ 0x1406F884C (MiAllowImageMap.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
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
