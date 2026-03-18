/*
 * XREFs of ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0056A98
 * Callers:
 *     FreeWindowStation @ 0x1C00568C0 (FreeWindowStation.c)
 *     xxxCloseClipboard @ 0x1C0059F90 (xxxCloseClipboard.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseClipboardToken(struct tagWINDOWSTATION *a1)
{
  void *v2; // rcx
  int v3; // eax

  v2 = (void *)*((_QWORD *)a1 + 20);
  if ( v2 )
  {
    v3 = *((_DWORD *)a1 + 16);
    if ( (v3 & 0x400) != 0 )
      *((_DWORD *)a1 + 16) = v3 & 0xFFFFFBFF;
    ObfDereferenceObject(v2);
    *((_QWORD *)a1 + 20) = 0LL;
  }
}
