/*
 * XREFs of _HasRawInputForegroundTarget@4 @ 0xB1EA0
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     ?HandleRawInput@@YG?AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0xB1E22 (-HandleRawInput@@YG-AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUP.c)
 * Callees:
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 */

int __thiscall HasRawInputForegroundTarget(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp-4h]

  v2 = 0;
  this[2] = 0;
  *this = 0;
  this[1] = 0;
  if ( _gpqForeground )
  {
    if ( (*(_DWORD *)(_gpqForeground + 284) & 0x2000000) != 0 )
    {
      v7 = *(_DWORD *)(_gpqForeground + 64);
      v8 = v7 ? *(_DWORD *)(v7 + 8) : 0;
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 688);
        if ( (v9 & 0x40000) != 0 && (((unsigned int)&loc_17FFFE + 2) & v9) == 0 )
        {
          v10 = *(_DWORD *)(v8 + 800);
          if ( v10 )
          {
            v11 = *(_DWORD *)(_gpqForeground + 60);
            v12 = v11 ? *(_DWORD *)(v11 + 8) : 0;
            if ( v12 && (((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(v12 + 688)) != 0 && v12 == *(_DWORD *)(v10 + 8) )
            {
              this[1] = v12;
              v2 = 1;
LABEL_26:
              *this = _gpqForeground;
              this[2] = v10;
              return v2;
            }
          }
        }
      }
    }
    v3 = *(_DWORD *)(_gpqForeground + 64);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 8);
    else
      v4 = *(_DWORD *)(_gpqForeground + 52);
    v14 = v4;
    if ( HasHidTable(v4) )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v14 + 232) + 472);
      if ( (*(_BYTE *)(v5 + 52) & 0x10) != 0 )
      {
        v13 = *(_DWORD *)(v5 + 36);
        v2 = 1;
        this[1] = v14;
        this[2] = v13;
        if ( !v13 )
        {
          v10 = *(_DWORD *)(_gpqForeground + 60);
          goto LABEL_26;
        }
        *this = *(_DWORD *)(*(_DWORD *)(v13 + 8) + 236);
      }
    }
  }
  return v2;
}
