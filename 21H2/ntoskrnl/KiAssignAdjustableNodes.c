/*
 * XREFs of KiAssignAdjustableNodes @ 0x140A9291C
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140A4EDCC (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAssignAdjustableNodes(__int64 *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v6; // r8
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned __int16 v9; // cx
  unsigned int v10; // r9d

  v6 = 0;
  if ( a2 )
  {
    v7 = a2;
    do
    {
      v8 = *a1;
      if ( (*(_BYTE *)(*a1 + 181) & 8) == 0 )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = *(_DWORD *)(a4 + 4LL * v9);
          if ( v10 >= *(unsigned __int8 *)(v8 + 180) )
            break;
          if ( ++v9 >= 0x14u )
            goto LABEL_10;
        }
        *(_WORD *)(v8 + 144) = v9;
        *(_BYTE *)(v8 + 181) |= 2u;
        *(_DWORD *)(a4 + 4LL * v9) = v10 - *(unsigned __int8 *)(v8 + 180);
        if ( v6 <= v9 )
          v6 = v9 + 1;
      }
LABEL_10:
      ++a1;
      --v7;
    }
    while ( v7 );
  }
  return v6;
}
