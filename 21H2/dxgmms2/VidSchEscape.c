/*
 * XREFs of VidSchEscape @ 0x1C00D13A0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiForceTdr @ 0x1C003CF2C (VidSchiForceTdr.c)
 */

__int64 __fastcall VidSchEscape(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // r9

  v3 = -1073741811;
  switch ( *a2 )
  {
    case 0:
      v4 = a2[1] != 0;
      v5 = *(_DWORD *)(a1 + 2448) & 0xFFFFFFFE;
      goto LABEL_23;
    case 2:
      v6 = a2[1];
      switch ( v6 )
      {
        case 4:
          _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
          return 0;
        case 5:
          _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFF8);
          return 0;
        case 8:
          v7 = (unsigned int)a2[2];
          if ( (unsigned int)v7 < *(_DWORD *)(a1 + 72) )
          {
            v8 = *(__int64 **)(a1 + 624);
            if ( (unsigned int)v7 < *(_DWORD *)(a1 + 696) )
              v8 += v7;
            v9 = *v8;
            if ( (*(_DWORD *)(*v8 + 12) & 2) == 0 )
            {
              RtlSetBitEx(a1 + 576);
              return 0;
            }
            *(_DWORD *)(v9 + 2020) = 1;
            *(_BYTE *)(v9 + 2018) = 1;
            *(_QWORD *)(a1 + 1208) = MEMORY[0xFFFFF78000000320];
            KeSetEvent((PRKEVENT)(a1 + 1176), 0, 0);
          }
          break;
      }
      return v3;
    case 4:
      v4 = a2[1] != 0 ? 0x200 : 0;
      v5 = *(_DWORD *)(a1 + 2448) & 0xFFFFFDFF;
LABEL_23:
      *(_DWORD *)(a1 + 2448) = v5 | v4;
      return 0;
    case 5:
      g_TdrConfig[6] = a2[1];
      g_TdrConfig[7] = a2[2];
      return 0;
    case 6:
      VidSchiForceTdr(a1);
      return 0;
    case 7:
      *(_DWORD *)(a1 + 224) = a2[1];
      return 0;
  }
  return v3;
}
