/*
 * XREFs of _LdrpDecrementNodeLoadCountLockHeld@12 @ 0x4B2CD933
 * Callers:
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrpDecrementModuleLoadCountEx@8 @ 0x4B2D9697 (_LdrpDecrementModuleLoadCountEx@8.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __fastcall LdrpDecrementNodeLoadCountLockHeld(_DWORD *a1, int a2, _DWORD *a3)
{
  unsigned int v3; // esi
  char v4; // al
  int v6; // eax
  int v7; // [esp+10h] [ebp-1Ch]

  v7 = 0;
  *a3 = 0;
  v3 = a1[3];
  if ( v3 == -1 || (v4 = 0, (*(_BYTE *)(*a1 - 32) & 0x20) != 0) )
    v4 = 1;
  if ( !v4 )
  {
    if ( v3 < (unsigned int)(a1[7] != 0) + 1 )
    {
      if ( !v3 && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v6 = a1[4];
        if ( v6 )
          a1[4] = v6 - 1;
      }
    }
    else if ( v3 <= 1 && a2 )
    {
      return -1073741267;
    }
    else
    {
      a1[3] = v3 - 1;
      if ( v3 == 1 )
        *a3 = 1;
    }
  }
  return v7;
}
