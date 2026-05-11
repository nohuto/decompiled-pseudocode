/*
 * XREFs of USBMidiOutCreateFirstByte @ 0x1C0033B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall USBMidiOutCreateFirstByte(__int64 a1, char *a2, char a3)
{
  char v3; // r9
  char v4; // r8
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // cl
  char v10; // cl

  v3 = 0;
  if ( a3 >= 0 )
  {
    v8 = *(_BYTE *)(a1 + 69);
    if ( v8 )
    {
      a2[1] = v8;
      v9 = *a2 & 0xF0 | (*(_BYTE *)(a1 + 69) >> 4);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 68) )
        return v3;
      v10 = *a2 & 0xF4;
      a2[1] = a3;
      v9 = v10 | 4;
    }
    *a2 = v9;
    return v3;
  }
  a2[1] = a3;
  *(_BYTE *)(a1 + 69) = 0;
  if ( (a3 & 0xF8) == 0xF8 )
  {
    v4 = *(_BYTE *)(a1 + 68);
    v5 = *a2;
    if ( v4 )
      v6 = v5 & 0xF0 | 4;
    else
      v6 = v5 | 0xF;
    *a2 = v6;
    return v4 == 0;
  }
  if ( a3 == -16 )
  {
    *a2 = *a2 & 0xF0 | 4;
    *(_BYTE *)(a1 + 68) = 1;
    return v3;
  }
  *(_BYTE *)(a1 + 68) = 0;
  if ( (unsigned __int8)(a3 + 0x80) <= 0x6Fu )
  {
    *(_BYTE *)(a1 + 69) = a3;
    v7 = ((unsigned __int8)a3 >> 4) | *a2 & 0xF0;
LABEL_19:
    *a2 = v7;
    return v3;
  }
  if ( (a3 & 0xF0) != 0xF0 )
    return v3;
  switch ( a3 )
  {
    case -15:
      goto LABEL_18;
    case -14:
      v7 = *a2 & 0xF0 | 3;
      goto LABEL_19;
    case -13:
LABEL_18:
      v7 = *a2 & 0xF0 | 2;
      goto LABEL_19;
    case -10:
    case -9:
      v3 = 1;
      *a2 = *a2 & 0xF0 | 5;
      break;
  }
  return v3;
}
