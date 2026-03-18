/*
 * XREFs of ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800384CC
 * Callers:
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x180036FE0 (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800B5BC8 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180038BCC (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CResourceTable::HANDLE_ENTRY *__fastcall CResourceTable::GetEntry(CResourceTable *this, unsigned int a2)
{
  __int64 v2; // r8
  int v3; // r9d

  if ( (unsigned int)HANDLE_TABLE::ValidEntry((CResourceTable *)((char *)this + 16), a2) )
    return (struct CResourceTable::HANDLE_ENTRY *)(*(_QWORD *)(v2 + 40) + (unsigned int)(v3 * *(_DWORD *)(v2 + 24)));
  else
    return 0LL;
}
