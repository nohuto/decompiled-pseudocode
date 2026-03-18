/*
 * XREFs of PnpBiosScanForWakeInterrupt @ 0x1C002AA5C
 * Callers:
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C002A9D0 (PnpBiosSetFlagsForNotableInterrupts.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpBiosScanForWakeInterrupt(char *a1, unsigned int a2)
{
  char v4; // dl
  char v5; // r8
  char *v6; // r9
  char v7; // r11
  char v8; // cl
  char v9; // bl
  unsigned __int16 v10; // r10
  char *v11; // r10
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  bool v17; // zf

  if ( a2 < 5 )
    return 0;
  v4 = 1;
  v5 = 0;
  v6 = a1;
  v7 = 1;
  v8 = *a1;
  v9 = 0;
  while ( 1 )
  {
    if ( v8 < 0 )
    {
      v10 = *(_WORD *)(v6 + 1) + 3;
    }
    else
    {
      v10 = (v8 & 7) + 1;
      v8 &= 0x78u;
    }
    if ( v8 == 120 )
      break;
    v11 = &v6[v10];
    if ( v11 >= &a1[a2] )
      goto LABEL_15;
    v12 = (unsigned __int8)v8 - 32;
    if ( v12 )
    {
      v13 = v12 - 16;
      if ( !v13 )
      {
        v5 = 0;
        goto LABEL_12;
      }
      v14 = v13 - 8;
      if ( !v14 )
      {
        v7 = 0;
        goto LABEL_12;
      }
      v15 = v14 - 81;
      if ( !v15 )
      {
        v17 = (v6[3] & 0x10) == 0;
LABEL_28:
        if ( !v17 )
          v5 = 1;
        goto LABEL_12;
      }
      if ( v15 == 3 && !v6[4] )
      {
        v17 = (v6[7] & 0x10) == 0;
        goto LABEL_28;
      }
    }
    else if ( (*v6 & 7) == 3 && (v6[3] & 0x20) != 0 )
    {
      v5 = 1;
    }
LABEL_12:
    v8 = *v11;
    v6 = v11;
  }
  v9 = 1;
  v7 = v5 != 0 ? v7 : 0;
LABEL_15:
  if ( !v7 || !v9 )
    return 0;
  return v4;
}
