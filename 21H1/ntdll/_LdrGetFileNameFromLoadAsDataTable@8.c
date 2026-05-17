/*
 * XREFs of _LdrGetFileNameFromLoadAsDataTable@8 @ 0x4B33F280
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA (_LdrpGetLoadAsEntry@8.c)
 */

int __stdcall LdrGetFileNameFromLoadAsDataTable(int a1, _DWORD *a2)
{
  int result; // eax
  _BYTE v3[4]; // [esp+8h] [ebp-18h] BYREF
  int v4; // [esp+Ch] [ebp-14h]

  if ( !a1 || !a2 )
    return -1073741811;
  result = LdrpGetLoadAsEntry(a1, v3);
  if ( result >= 0 )
  {
    if ( v4 )
      *a2 = v4;
    else
      return -1073741823;
  }
  return result;
}
