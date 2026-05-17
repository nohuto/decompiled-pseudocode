/*
 * XREFs of _LdrpEntrySectionValid@8 @ 0x4B334854
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     <none>
 */

char __thiscall LdrpEntrySectionValid(int this)
{
  _DWORD *v1; // edx
  char v2; // bl
  int v3; // esi
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v8; // [esp+Ch] [ebp-4h]

  v1 = (_DWORD *)(*(unsigned __int16 *)(this + 20) + this + 24);
  v2 = 0;
  v8 = *(unsigned __int16 *)(this + 6);
  v3 = 0;
  v4 = *(_DWORD *)(this + 40);
  if ( *(_WORD *)(this + 6) )
  {
    while ( 1 )
    {
      v5 = v1[2];
      if ( v5 )
      {
        v6 = v1[3];
        if ( v4 >= v6 && v4 < v6 + v5 )
          break;
      }
      v1 += 10;
      if ( ++v3 >= v8 )
        return v2;
    }
    if ( (v1[9] & 0x20000000) != 0 )
      return 1;
  }
  return v2;
}
