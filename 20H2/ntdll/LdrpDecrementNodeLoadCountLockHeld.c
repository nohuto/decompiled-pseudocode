/*
 * XREFs of LdrpDecrementNodeLoadCountLockHeld @ 0x18000FD28
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x18006A4F8 (LdrpUnloadNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpDecrementNodeLoadCountLockHeld(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  int v7; // eax

  v3 = 0;
  *a3 = 0;
  v4 = *(_DWORD *)(a1 + 24);
  if ( v4 != -1 && (*(_BYTE *)(*(_QWORD *)a1 - 56LL) & 0x20) == 0 )
  {
    if ( v4 < (unsigned int)(*(_QWORD *)(a1 + 48) != 0LL) + 1 )
    {
      if ( !v4 && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v7 = *(_DWORD *)(a1 + 28);
        if ( v7 )
          *(_DWORD *)(a1 + 28) = v7 - 1;
      }
    }
    else if ( v4 <= 1 && a2 )
    {
      return (unsigned int)-1073741267;
    }
    else
    {
      *(_DWORD *)(a1 + 24) = v4 - 1;
      *a3 = v4 == 1;
    }
  }
  return v3;
}
