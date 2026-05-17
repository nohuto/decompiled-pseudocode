/*
 * XREFs of _RtlStackDbContextCleanup@4 @ 0x4B389E9A
 * Callers:
 *     _RtlpHpStackTraceDisable@0 @ 0x4B36E2C6 (_RtlpHpStackTraceDisable@0.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

unsigned int __thiscall RtlStackDbContextCleanup(_DWORD *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ebx
  _DWORD *v4; // ecx
  _DWORD *j; // edx
  _DWORD *v6; // edx
  _DWORD *k; // ecx
  _DWORD *v8; // edx
  _DWORD *v9; // ebx
  _DWORD *v10; // ecx
  unsigned int result; // eax
  _DWORD *v12; // esi
  _DWORD *n; // ecx
  int v14; // ebx
  _DWORD *i; // [esp+Ch] [ebp-4h]
  _DWORD *m; // [esp+Ch] [ebp-4h]

  v2 = (_DWORD *)this[5];
  v3 = v2;
  for ( i = v2; ; v2 = i )
  {
    if ( !v3 )
      goto LABEL_7;
    v4 = (_DWORD *)*v3;
    if ( (*v3 & 0x80000002) == 0x80000002 )
      v4 = (_DWORD *)*v3;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
LABEL_7:
      for ( j = v2 + 1; ; ++j )
      {
        if ( (unsigned int)j >= this[5] + 4 * (this[4] >> 5) )
        {
          v4 = 0;
          goto LABEL_12;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v3 = (_DWORD *)*j;
      v2 = j;
      i = j;
      v4 = (_DWORD *)*j;
    }
    else
    {
      v3 = v4;
    }
LABEL_12:
    if ( !v4 )
      break;
    v6 = v3;
    for ( k = v2; (*k & 1) == 0; k = (_DWORD *)*k )
    {
      if ( (_DWORD *)*k == v3 )
      {
        *k = *v3;
        --this[3];
        *v3 |= 0x80000002;
        v3 = k;
        goto LABEL_20;
      }
    }
    v6 = 0;
LABEL_20:
    ((void (__thiscall *)(_DWORD, _DWORD *, _DWORD))this[9])(this[9], v6, this[10]);
  }
  v8 = (_DWORD *)this[2];
  v9 = v8;
  for ( m = v8; ; v8 = m )
  {
    if ( !v9 )
      goto LABEL_27;
    v10 = (_DWORD *)*v9;
    result = *v9 & 0x80000002;
    if ( result == -2147483646 )
    {
      result = MEMORY[0];
      v10 = (_DWORD *)*v9;
    }
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
LABEL_27:
      ++v8;
      result = this[2] + 4 * (this[1] >> 5);
      while ( 1 )
      {
        if ( (unsigned int)v8 >= result )
        {
          v8 = m;
          result = 0;
          v10 = 0;
          goto LABEL_32;
        }
        if ( (*v8 & 1) == 0 )
          break;
        ++v8;
      }
      v9 = (_DWORD *)*v8;
      v10 = (_DWORD *)*v8;
      m = v8;
    }
    else
    {
      v9 = v10;
    }
LABEL_32:
    if ( !v10 )
      break;
    v12 = v9;
    for ( n = v8; (*n & 1) == 0; n = (_DWORD *)*n )
    {
      if ( (_DWORD *)*n == v9 )
      {
        *n = *v9;
        --*this;
        *v9 |= 0x80000002;
        v9 = n;
        goto LABEL_40;
      }
    }
    v12 = 0;
LABEL_40:
    ((void (__thiscall *)(_DWORD, _DWORD *, _DWORD))this[9])(this[9], v12, this[10]);
  }
  v14 = this[5];
  if ( this[2] )
    result = ((int (__thiscall *)(_DWORD, _DWORD, _DWORD))this[9])(this[9], this[2], this[10]);
  if ( v14 )
    return ((int (__thiscall *)(_DWORD, int, _DWORD))this[9])(this[9], v14, this[10]);
  return result;
}
