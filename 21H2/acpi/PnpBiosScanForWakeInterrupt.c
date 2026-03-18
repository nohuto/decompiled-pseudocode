/*
 * XREFs of PnpBiosScanForWakeInterrupt @ 0x1C002995C
 * Callers:
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C00298D0 (PnpBiosSetFlagsForNotableInterrupts.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpBiosScanForWakeInterrupt(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char v4; // dl
  char v5; // r9
  char v6; // di
  char v7; // r11
  unsigned __int8 v8; // r8
  unsigned __int16 v9; // r10
  unsigned __int64 v10; // r10
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  bool v16; // zf

  v3 = a1;
  if ( a2 < 5 )
    return 0;
  v4 = 1;
  v5 = 0;
  v6 = 1;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_BYTE *)a1;
    if ( *(char *)a1 < 0 )
    {
      v9 = *(_WORD *)(a1 + 1) + 3;
    }
    else
    {
      v9 = (v8 & 7) + 1;
      v8 &= 0x78u;
    }
    if ( v8 == 120 )
      break;
    v10 = a1 + v9;
    if ( v10 >= (unsigned __int64)a2 + v3 )
      goto LABEL_15;
    v11 = v8 - 32;
    if ( v11 )
    {
      v12 = v11 - 16;
      if ( !v12 )
      {
        v5 = 0;
        goto LABEL_12;
      }
      v13 = v12 - 8;
      if ( !v13 )
      {
        v6 = 0;
        goto LABEL_12;
      }
      v14 = v13 - 81;
      if ( !v14 )
      {
        v16 = (*(_BYTE *)(a1 + 3) & 0x10) == 0;
        goto LABEL_21;
      }
      if ( v14 == 3 && !*(_BYTE *)(a1 + 4) )
      {
        v16 = (*(_BYTE *)(a1 + 7) & 0x10) == 0;
LABEL_21:
        if ( !v16 )
          v5 = 1;
      }
    }
    else if ( (*(_BYTE *)a1 & 7) == 3 && (*(_BYTE *)(a1 + 3) & 0x20) != 0 )
    {
      v5 = 1;
    }
LABEL_12:
    a1 = v10;
  }
  v7 = 1;
  if ( !v5 )
    return 0;
LABEL_15:
  if ( !v6 || !v7 )
    return 0;
  return v4;
}
