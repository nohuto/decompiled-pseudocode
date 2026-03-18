/*
 * XREFs of ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C0051F48
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0053E48 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0054860 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C00523EC (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 */

MIRACAST_CHUNK_LIST *__fastcall MIRACAST_CHUNK_LIST::`scalar deleting destructor'(MIRACAST_CHUNK_LIST *this)
{
  struct MIRACAST_CHUNK *v2; // rax

  while ( 1 )
  {
    v2 = MIRACAST_CHUNK_LIST::RemoveHead(this);
    if ( !v2 )
      break;
    ExFreePoolWithTag(v2, 0);
  }
  if ( this )
    ExFreePoolWithTag(this, 0);
  return this;
}
