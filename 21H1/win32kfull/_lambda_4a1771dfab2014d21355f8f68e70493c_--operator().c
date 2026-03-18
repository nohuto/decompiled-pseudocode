/*
 * XREFs of _lambda_4a1771dfab2014d21355f8f68e70493c_::operator() @ 0x19E9CD
 * Callers:
 *     _NtUserDeleteWindowGroup@4 @ 0x160AA9 (_NtUserDeleteWindowGroup@4.c)
 * Callees:
 *     ?RemoveAll@CWindowGroup@@QAEXXZ @ 0x19F3A8 (-RemoveAll@CWindowGroup@@QAEXXZ.c)
 */

int __thiscall lambda_4a1771dfab2014d21355f8f68e70493c_::operator()(int *this, CWindowGroup *a2)
{
  int v2; // ebx
  CWindowGroup *i; // ecx
  CWindowGroup *v6; // [esp+14h] [ebp+8h]

  v2 = *this;
  v6 = (CWindowGroup *)(*((_DWORD *)a2 + 1) & (-1 << (*(_DWORD *)(*this + 12) & 0x1F)));
  for ( i = (CWindowGroup *)(*(_DWORD *)(*this + 16)
                           + 4
                           * ((HIBYTE(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))) & ((*(_DWORD *)(*this + 12) >> 5) - 1)));
        (*(_DWORD *)i & 1) == 0;
        i = *(CWindowGroup **)i )
  {
    if ( *(CWindowGroup **)i == a2 )
    {
      *(_DWORD *)i = *(_DWORD *)a2;
      --*(_DWORD *)(v2 + 8);
      *(_DWORD *)a2 |= 0x80000002;
      break;
    }
  }
  CWindowGroup::RemoveAll(a2);
  if ( *((_DWORD *)a2 + 6) )
    Win32FreePool(*((_DWORD *)a2 + 6));
  Win32FreePool(a2);
  return 0;
}
