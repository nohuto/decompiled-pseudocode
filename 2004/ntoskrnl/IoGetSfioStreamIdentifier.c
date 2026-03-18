/*
 * XREFs of IoGetSfioStreamIdentifier @ 0x1405007C0
 * Callers:
 *     <none>
 * Callees:
 *     IopGetSetStreamIdentifier @ 0x1405013CC (IopGetSetStreamIdentifier.c)
 */

PVOID __stdcall IoGetSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  void *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( !FileObject || !Signature )
    return 0LL;
  IopGetSetStreamIdentifier((_DWORD)FileObject, 0, (_DWORD)Signature, (unsigned int)&v3, 0);
  return v3;
}
