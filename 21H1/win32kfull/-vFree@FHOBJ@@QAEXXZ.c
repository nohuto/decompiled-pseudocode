/*
 * XREFs of ?vFree@FHOBJ@@QAEXXZ @ 0xCD6B8
 * Callers:
 *     ?bCleanupFontHash@@YGHPAPAU_FONTHASH@@@Z @ 0xCD688 (-bCleanupFontHash@@YGHPAPAU_FONTHASH@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall FHOBJ::vFree(FHOBJ *this)
{
  int v2; // eax
  unsigned int v3; // edx
  int v4; // ecx
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // esi
  _DWORD *v10; // [esp+4h] [ebp-Ch]
  int v11; // [esp+8h] [ebp-8h]
  unsigned int v12; // [esp+Ch] [ebp-4h]

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    v3 = 0;
    v12 = 0;
    if ( *(_DWORD *)(v2 + 8) )
    {
      v4 = 28;
      v11 = 28;
      do
      {
        v5 = *(_DWORD **)(v4 + v2);
        if ( v5 )
        {
          do
          {
            v7 = (_DWORD *)v5[1];
            v8 = (_DWORD *)*v5;
            v10 = (_DWORD *)*v5;
            if ( v7 )
            {
              do
              {
                v9 = (_DWORD *)*v7;
                Win32FreePool(v7);
                v7 = v9;
              }
              while ( v9 );
              v8 = v10;
            }
            Win32FreePool(v5);
            v5 = v8;
          }
          while ( v8 );
          v2 = *((_DWORD *)this + 1);
          v4 = v11;
          v3 = v12;
        }
        ++v3;
        v4 += 4;
        v12 = v3;
        v11 = v4;
      }
      while ( v3 < *(_DWORD *)(v2 + 8) );
    }
    Win32FreePool(v2);
  }
  v6 = *(_DWORD **)this;
  *((_DWORD *)this + 1) = 0;
  *v6 = 0;
}
