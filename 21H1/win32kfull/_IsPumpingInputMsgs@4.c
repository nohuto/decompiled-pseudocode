/*
 * XREFs of _IsPumpingInputMsgs@4 @ 0x7393E
 * Callers:
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 * Callees:
 *     <none>
 */

int __thiscall IsPumpingInputMsgs(_DWORD *this)
{
  int v1; // esi
  _DWORD *v2; // ebx
  int v3; // edi
  int v4; // esi
  _DWORD *v6; // edx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax

  v1 = MEMORY[0xFFDF0004];
  v2 = (_DWORD *)this[2];
  v3 = 0;
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v7 = MEMORY[0xFFDF0324];
    if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
    {
      v8 = MEMORY[0xFFDF0320];
    }
    else
    {
      do
      {
        _mm_pause();
        v8 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v3 = 0;
      v1 = MEMORY[0xFFDF0004];
      v7 = MEMORY[0xFFDF0324];
    }
    v4 = MEMORY[0xFFDF0004] * (v7 << 8) + (((unsigned int)v1 * (unsigned __int64)v8) >> 24);
  }
  else
  {
    v4 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  if ( !v2[165] || (unsigned int)(v4 - v2[165]) <= _gdwHungAppTimeout || PsGetThreadFreezeCount(*v2) )
    return 1;
  v6 = (_DWORD *)v2[163];
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = v6[2];
      if ( (_DWORD *)v6[1] == this )
        break;
      if ( !v9 || (unsigned int)(v4 - v9) <= _gdwHungAppTimeout )
      {
        v6 = (_DWORD *)*v6;
        if ( v6 )
          continue;
      }
      return v3;
    }
    if ( !v9 || (unsigned int)(v4 - v9) <= _gdwHungAppTimeout )
      return 1;
  }
  return v3;
}
