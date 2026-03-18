/*
 * XREFs of ?vDeleteCache@RFONTOBJ@@QAEXXZ @ 0xD0ABC
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall RFONTOBJ::vDeleteCache(RFONTOBJ *this)
{
  int v2; // ecx
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD *)this;
  v7 = v2;
  v3 = *(_DWORD **)(v2 + 564);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = v3;
      v3 = (_DWORD *)*v3;
      if ( !v3 )
        break;
      Win32FreePool(v4);
    }
    Win32FreePool(*(_DWORD *)(*(_DWORD *)this + 536));
    v2 = v7;
  }
  *(_DWORD *)(v2 + 564) = 0;
  *(_DWORD *)(*(_DWORD *)this + 536) = 0;
  v5 = *(_DWORD **)(v2 + 592);
  if ( v5 )
  {
    do
    {
      v6 = (_DWORD *)*v5;
      Win32FreePool(v5);
      v5 = v6;
    }
    while ( v6 );
    *(_DWORD *)(v7 + 592) = 0;
  }
  if ( *(_DWORD *)(*(_DWORD *)this + 624) )
  {
    Win32FreePool(*(_DWORD *)(*(_DWORD *)this + 624));
    *(_DWORD *)(*(_DWORD *)this + 624) = 0;
    *(_DWORD *)(*(_DWORD *)this + 628) = 0;
  }
}
