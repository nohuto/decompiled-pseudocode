/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1408C0344
 * Callers:
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1408C01CC (AlpcpReferenceMessageByWaitingThreadPort.c)
 * Callees:
 *     AlpcpReferenceBlob @ 0x1406888F0 (AlpcpReferenceBlob.c)
 */

_QWORD *__fastcall AlpcpReferenceMessageByWaitingThreadPortQueue(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbx

  v2 = *a2;
  if ( *a2 == a2 )
    return 0LL;
  while ( v2[4] != a1 || !AlpcpReferenceBlob((ULONG_PTR)v2) )
  {
    v2 = (_QWORD *)*v2;
    if ( v2 == a2 )
      return 0LL;
  }
  return v2;
}
