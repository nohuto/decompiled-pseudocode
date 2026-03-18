/*
 * XREFs of ?MsgLookupTableAlloc@@YGPAXI@Z @ 0x80126
 * Callers:
 *     ?AddMessageToFilter@@YGHPAPAPAXIPAH@Z @ 0x80026 (-AddMessageToFilter@@YGHPAPAPAXIPAH@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall MsgLookupTableAlloc(char *this)
{
  int v1; // eax
  int v2; // esi

  if ( this )
  {
    if ( (unsigned int)(this - 1) > 1 )
      return 0;
    v1 = Win32AllocPoolZInit(64, 1819112277);
  }
  else
  {
    v1 = Win32AllocPoolZInit(32, 1819112277);
  }
  v2 = v1;
  if ( !v1 )
    UserSetLastError(14);
  return v2;
}
