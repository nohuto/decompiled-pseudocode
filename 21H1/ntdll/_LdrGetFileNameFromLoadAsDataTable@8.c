/*
 * XREFs of _LdrGetFileNameFromLoadAsDataTable@8 @ 0x4B33F280
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA (_LdrpGetLoadAsEntry@8.c)
 */

NTSTATUS __cdecl LdrGetFileNameFromLoadAsDataTable(PVOID Module, PVOID *pFileNamePrt)
{
  NTSTATUS result; // eax
  char v3[4]; // [esp+8h] [ebp-18h] BYREF
  void *v4; // [esp+Ch] [ebp-14h]

  if ( !Module || !pFileNamePrt )
    return -1073741811;
  result = LdrpGetLoadAsEntry((int)Module, v3);
  if ( result >= 0 )
  {
    if ( v4 )
      *pFileNamePrt = v4;
    else
      return -1073741823;
  }
  return result;
}
