/*
 * XREFs of ?vReverseConcatenate@WIDEPATHOBJ@@QAEXAAV1@@Z @ 0x2374F2
 * Callers:
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x236568 (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z.c)
 */

void __thiscall WIDEPATHOBJ::vReverseConcatenate(WIDEPATHOBJ *this, struct WIDEPATHOBJ *a2)
{
  struct WIDEPATHOBJ *v2; // esi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  struct _POINTFIX *v6; // edi
  int v7; // edx
  _DWORD *v8; // [esp-Ch] [ebp-18h]
  int v9; // [esp+4h] [ebp-8h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 2);
  v4 = *(_DWORD *)(v3 + 24);
  if ( v4 )
  {
    do
    {
      v5 = v4 + 16;
      v9 = *(_DWORD *)(v4 + 4);
      v6 = (struct _POINTFIX *)(v4 + 8 * (*(_DWORD *)(v4 + 12) + 2));
      if ( (unsigned int)v6 > v4 + 16 )
      {
        do
          WIDEPATHOBJ::vAddPoint(this, --v6, (int)this);
        while ( (unsigned int)v6 > v5 );
        v2 = a2;
      }
      v7 = *((_DWORD *)v2 + 2);
      v8 = *(_DWORD **)(v7 + 16);
      *(_DWORD *)(v7 + 16) = *v8;
      freepathalloc(v8);
      v4 = v9;
    }
    while ( v9 );
    v3 = *((_DWORD *)v2 + 2);
  }
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(*((_DWORD *)v2 + 2) + 24) = 0;
  *(_DWORD *)(*((_DWORD *)v2 + 2) + 20) = 0;
}
