/*
 * XREFs of ObpDestroyTypeArray @ 0x140985120
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1409848D4 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x140984994 (ObGetObjectInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDestroyTypeArray(_QWORD *P)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    {
      v3 = P[i + 1];
      if ( v3 )
        ObfDereferenceObject((PVOID)(v3 + 80));
    }
    ExFreePoolWithTag(P, 0x7241624Fu);
  }
}
