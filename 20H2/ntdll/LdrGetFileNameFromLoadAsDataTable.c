/*
 * XREFs of LdrGetFileNameFromLoadAsDataTable @ 0x1800E1210
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x18006A28C (LdrpGetLoadAsEntry.c)
 */

NTSTATUS __cdecl LdrGetFileNameFromLoadAsDataTable(PVOID Module, PVOID *pFileNamePrt)
{
  NTSTATUS result; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF

  if ( !Module || !pFileNamePrt )
    return -1073741811;
  result = LdrpGetLoadAsEntry((__int64)Module, &v4);
  if ( result >= 0 )
  {
    if ( *((_QWORD *)&v4 + 1) )
      *pFileNamePrt = (PVOID)*((_QWORD *)&v4 + 1);
    else
      return -1073741823;
  }
  return result;
}
