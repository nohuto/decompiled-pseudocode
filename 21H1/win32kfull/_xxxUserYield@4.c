/*
 * XREFs of _xxxUserYield@4 @ 0x9875A
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _NtUserYieldTask@0 @ 0x16B3E0 (_NtUserYieldTask@0.c)
 * Callees:
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _InsertTask@8 @ 0x155B50 (_InsertTask@8.c)
 */

int __thiscall xxxUserYield(int this)
{
  int v2; // edi
  int v4; // edx

  v2 = *(_DWORD *)(this + 232);
  if ( (*(_BYTE *)(this + 264) & 2) != 0 )
  {
    if ( this == *(_DWORD *)(*(_DWORD *)(v2 + 200) + 4) )
    {
      while ( (*(_BYTE *)(*(_DWORD *)(this + 244) + 6) & 0x40) != 0 )
        xxxReceiveMessage((_DWORD *)this);
    }
  }
  else
  {
    while ( (*(_BYTE *)(*(_DWORD *)(this + 244) + 6) & 0x40) != 0 )
      xxxReceiveMessage((_DWORD *)this);
  }
  if ( (*(_BYTE *)(this + 264) & 2) != 0 )
  {
    v4 = *(_DWORD *)(this + 332);
    if ( v4 )
    {
      if ( !*(_DWORD *)(v4 + 4) )
      {
        *(_DWORD *)(v4 + 4) = 1;
        ++*(_DWORD *)(_gpsi + 4440);
        v4 = *(_DWORD *)(this + 332);
      }
      InsertTask(v2, v4);
      xxxSleepTask(1, 0);
      while ( (*(_BYTE *)(*(_DWORD *)(this + 244) + 6) & 0x40) != 0 )
        xxxReceiveMessage((_DWORD *)this);
    }
  }
  return 1;
}
