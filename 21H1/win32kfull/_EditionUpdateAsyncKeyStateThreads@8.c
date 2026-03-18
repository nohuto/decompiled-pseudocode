/*
 * XREFs of _EditionUpdateAsyncKeyStateThreads@8 @ 0x947AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionUpdateAsyncKeyStateThreads(int a1, unsigned __int8 a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // esi
  int i; // ecx
  int result; // eax
  char v8; // [esp+0h] [ebp-4h]
  int v9; // [esp+10h] [ebp+Ch]

  if ( a2 < 0x20u )
    ++*(_DWORD *)(_gpsi + 6232);
  v3 = *(_DWORD **)(_grpdeskRitInput + 92);
  if ( v3 != (_DWORD *)(_grpdeskRitInput + 92) )
  {
    v9 = a2 >> 3;
    v8 = a2 & 7;
    do
    {
      v4 = *(v3 - 42);
      v5 = v4;
      for ( i = 3; i; --i )
        v5 += 4;
      *(_BYTE *)(v9 + v4 + 120) |= 1 << v8;
      if ( v4 != a1 )
        *(_DWORD *)(v4 + 284) |= 1u;
      v3 = (_DWORD *)*v3;
    }
    while ( v3 != (_DWORD *)(_grpdeskRitInput + 92) );
  }
  result = _gpsi;
  ++*(_DWORD *)(_gpsi + 6228);
  return result;
}
