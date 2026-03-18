/*
 * XREFs of ?CheckTransferState@@YGKPAUtagTHREADINFO@@PAUtagQ@@JH@Z @ 0xC7F9A
 * Callers:
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 * Callees:
 *     <none>
 */

unsigned int __userpurge CheckTransferState@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagQ *a4,
        int a5,
        int a6)
{
  int v6; // esi
  int v8; // eax

  v6 = *(_DWORD *)((char *)a3 + *(_DWORD *)(a2 + 236));
  if ( !v6 || *(_DWORD *)(v6 + 8) != a2 )
    return 0;
  if ( *(_DWORD *)((char *)a3 + a1) )
    return 1;
  if ( _gpqForeground )
  {
    if ( a4 )
    {
      v8 = *(_DWORD *)((char *)a3 + _gpqForeground);
      if ( v8 )
      {
        if ( v6 != v8 )
          return 1;
      }
    }
  }
  return 2;
}
