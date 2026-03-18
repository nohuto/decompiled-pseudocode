/*
 * XREFs of ?HeapAlloc@PROXYPORT@@QAEPAXK@Z @ 0x21072B
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

void *__thiscall PROXYPORT::HeapAlloc(PROXYPORT *this, unsigned int a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // edi
  void *result; // eax
  unsigned int v5; // [esp+0h] [ebp-Ch]
  unsigned int *v6; // [esp+4h] [ebp-8h]
  unsigned int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = 0;
  v2 = *(_DWORD **)this;
  v3 = *(_DWORD *)(*(_DWORD *)this + 28);
  if ( (ULongAdd(a2, v3, (int *)&v7, v5, v6) & 0x80000000) != 0 || v7 > v2[4] )
    return 0;
  result = (void *)(v3 + v2[3] + v2[6]);
  v2[7] = v7;
  return result;
}
