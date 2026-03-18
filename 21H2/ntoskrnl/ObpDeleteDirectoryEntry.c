/*
 * XREFs of ObpDeleteDirectoryEntry @ 0x140668C60
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObpUnlockDirectory @ 0x14066960C (ObpUnlockDirectory.c)
 *     ObpDeleteDirectoryName @ 0x1406B9464 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall ObpDeleteDirectoryEntry(_QWORD *P, void **a2)
{
  char *v2; // rsi
  void *v4; // rdi

  v2 = (char *)P[1];
  v4 = *a2;
  ObpUnlockDirectory(a2);
  ExFreePoolWithTag(P, 0);
  ObfDereferenceObjectWithTag(v4, 0x6944624Fu);
  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v2 - 24) ^ ((unsigned __int16)((_WORD)v2 - 48) >> 8))) == ObpDirectoryObjectType->Index )
    return ObpDeleteDirectoryName(v2);
  else
    return ObfDereferenceObjectWithTag(v2, 0x6944624Fu);
}
