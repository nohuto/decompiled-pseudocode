/*
 * XREFs of ?MsgLookupTableCleanUp@@YGXPAPAX@Z @ 0x9D804
 * Callers:
 *     _FreeWindowMessageFilter@4 @ 0x71856 (_FreeWindowMessageFilter@4.c)
 *     _FreeProcessMessageFilter@4 @ 0x9D7E4 (_FreeProcessMessageFilter@4.c)
 * Callees:
 *     <none>
 */

void __thiscall MsgLookupTableCleanUp(_DWORD *this)
{
  unsigned int i; // esi
  int v3; // eax
  unsigned int j; // ebx
  int v5; // [esp+4h] [ebp-4h]

  if ( this )
  {
    for ( i = 0; i < 8; ++i )
    {
      v3 = this[i];
      v5 = v3;
      if ( v3 )
      {
        for ( j = 0; j < 0x10; ++j )
        {
          if ( *(_DWORD *)(v3 + 4 * j) )
          {
            Win32FreePool(*(_DWORD *)(v3 + 4 * j));
            v3 = v5;
          }
        }
        Win32FreePool(v3);
      }
    }
    Win32FreePool(this);
  }
}
