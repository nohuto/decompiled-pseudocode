/*
 * XREFs of _HandleAsyncResizeComplete@4 @ 0x17649B
 * Callers:
 *     _NtUserLayoutCompleted@4 @ 0xA8C00 (_NtUserLayoutCompleted@4.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

int __thiscall HandleAsyncResizeComplete(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // esi

  result = this[2];
  v2 = *(_DWORD **)(result + 368);
  if ( v2 )
  {
    if ( (_DWORD *)v2[2] == this )
    {
      result = FindTimer((unsigned int)this, 65522, 2u, 1, 0);
      if ( (v2[46] & 0x100000) != 0 )
      {
        result = v2[47];
        if ( (result & 1) != 0 )
        {
          v2[47] = result & 0xFFFFFFFE;
          return GenerateMouseMove(0);
        }
      }
    }
  }
  return result;
}
