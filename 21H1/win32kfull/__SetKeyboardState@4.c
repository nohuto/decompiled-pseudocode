/*
 * XREFs of __SetKeyboardState@4 @ 0x15EA90
 * Callers:
 *     _NtUserSetKeyboardState@4 @ 0x169768 (_NtUserSetKeyboardState@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall _SetKeyboardState(char *this)
{
  char *v1; // edx
  int v2; // ebx
  int v3; // ecx
  _BYTE *v4; // edi
  int v5; // ecx
  char v6; // al
  int v7; // ecx
  char v8; // si
  int v9; // eax
  int v11; // [esp+1Ch] [ebp-24h]

  v1 = this;
  v2 = 0;
  v3 = *(_DWORD *)(_gptiCurrent + 236);
  v11 = v3;
  while ( v2 < 256 )
  {
    v4 = (_BYTE *)(((unsigned __int8)v2 >> 2) + v3 + 152);
    v5 = (unsigned __int8)*v4;
    v6 = 2 * (v2 & 3);
    if ( *v1 >= 0 )
      v7 = v5 & ~(1 << v6);
    else
      v7 = v5 | (1 << v6);
    *v4 = v7;
    v8 = 2 * (v2 & 3) + 1;
    if ( (*v1 & 1) != 0 )
      v9 = (unsigned __int8)v7 | (1 << v8);
    else
      v9 = (unsigned __int8)v7 & ~(1 << v8);
    *v4 = v9;
    ++v2;
    ++v1;
    v3 = v11;
  }
  if ( v1 != this )
    ++*(_DWORD *)(_gpsi + 6228);
  return 1;
}
