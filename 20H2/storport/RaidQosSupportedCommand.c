/*
 * XREFs of RaidQosSupportedCommand @ 0x1C0036504
 * Callers:
 *     StorpTelemetryCollectPerfData @ 0x1C00090D0 (StorpTelemetryCollectPerfData.c)
 *     RaidStartIoPacket @ 0x1C0009FE0 (RaidStartIoPacket.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidQosSupportedCommand(__int64 a1)
{
  char v1; // al
  int v3; // ecx
  _BYTE *v4; // r9
  char v5; // bl
  unsigned int v6; // edi
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r11
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  _BYTE *v13; // rcx
  unsigned __int64 v14; // rcx
  char v15; // cl

  v1 = *(_BYTE *)(a1 + 2);
  if ( v1 == 40 )
    v3 = *(_DWORD *)(a1 + 20);
  else
    v3 = *(unsigned __int8 *)(a1 + 2);
  if ( v3 )
    return 0;
  if ( v1 != 40 )
  {
    v4 = (_BYTE *)(a1 + 72);
    goto LABEL_26;
  }
  v4 = 0LL;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    v6 = *(_DWORD *)(a1 + 56);
    v7 = 0LL;
    if ( v6 )
    {
      while ( 1 )
      {
        v8 = *(unsigned int *)(a1 + 4 * v7 + 120);
        if ( (unsigned int)v8 >= 0x80 )
        {
          v9 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v8 < (unsigned int)v9 )
            break;
        }
LABEL_23:
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          goto LABEL_26;
      }
      v10 = (unsigned int)v8;
      v11 = *(_DWORD *)(v8 + a1) - 64;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 && v10 + 40 <= v9 )
          {
            v13 = (_BYTE *)(v10 + a1 + 32);
            if ( !*(_DWORD *)(v10 + a1 + 12) )
              v13 = v4;
            v4 = v13;
            goto LABEL_26;
          }
          goto LABEL_22;
        }
        v14 = v10 + 56;
      }
      else
      {
        v14 = v10 + 40;
      }
      if ( v14 <= v9 )
      {
        v5 = 1;
        if ( !*(_BYTE *)(v10 + a1 + 10) )
          goto LABEL_26;
        v4 = (_BYTE *)(v10 + a1 + 24);
      }
LABEL_22:
      if ( v5 )
        goto LABEL_26;
      goto LABEL_23;
    }
  }
LABEL_26:
  if ( v4 && ((v15 = *v4, ((*v4 - 8) & 0x5D) == 0) || v15 == 37 || v15 == -98 || (unsigned __int8)(v15 - 94) <= 1u) )
    return 1;
  else
    return 0;
}
