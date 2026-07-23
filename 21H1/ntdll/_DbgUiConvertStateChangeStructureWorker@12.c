/*
 * XREFs of _DbgUiConvertStateChangeStructureWorker@12 @ 0x4B32D8B6
 * Callers:
 *     _DbgUiConvertStateChangeStructure@8 @ 0x4B32D880 (_DbgUiConvertStateChangeStructure@8.c)
 *     _DbgUiConvertStateChangeStructureEx@8 @ 0x4B32D8A0 (_DbgUiConvertStateChangeStructureEx@8.c)
 * Callees:
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 */

int __fastcall DbgUiConvertStateChangeStructureWorker(int a1, int a2, char a3)
{
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  __int16 v7; // cx
  __int16 v8; // ax
  int result; // eax
  _BYTE ThreadInformation[4]; // [esp+Ch] [ebp-1Ch] BYREF
  int v11; // [esp+10h] [ebp-18h]

  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      *(_DWORD *)a2 = 2;
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 20);
      if ( NtQueryInformationThread(*(HANDLE *)(a1 + 12), ThreadBasicInformation, ThreadInformation, 0x1Cu, 0) >= 0 )
        *(_DWORD *)(a2 + 16) = v11;
      else
        *(_DWORD *)(a2 + 16) = 0;
      goto LABEL_24;
    case 3:
      *(_DWORD *)a2 = 3;
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 36);
      *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 44);
      if ( NtQueryInformationThread(*(HANDLE *)(a1 + 16), ThreadBasicInformation, ThreadInformation, 0x1Cu, 0) >= 0 )
        *(_DWORD *)(a2 + 36) = v11;
      else
        *(_DWORD *)(a2 + 36) = 0;
      *(_DWORD *)(a2 + 44) = 0;
      *(_WORD *)(a2 + 48) = 1;
      goto LABEL_24;
    case 4:
      *(_DWORD *)a2 = 4;
      goto LABEL_23;
    case 5:
      *(_DWORD *)a2 = 5;
      goto LABEL_23;
    case 6:
    case 7:
    case 8:
      v5 = (_DWORD *)(a1 + 12);
      v6 = (_DWORD *)(a2 + 12);
      if ( *(_DWORD *)(a1 + 12) == 1073807370 )
      {
        *(_DWORD *)a2 = 8;
        v7 = 0;
        if ( a3 )
        {
          v7 = 1;
          *v6 = *(_DWORD *)(a1 + 36);
          v8 = 2 * *(_WORD *)(a1 + 32);
        }
        else
        {
          *v6 = *(_DWORD *)(a1 + 44);
          v8 = *(_WORD *)(a1 + 40);
        }
        *(_WORD *)(a2 + 18) = v8;
        *(_WORD *)(a2 + 16) = v7;
      }
      else if ( *v5 == 1073807366 )
      {
        *(_DWORD *)a2 = 8;
        *v6 = *(_DWORD *)(a1 + 36);
        *(_WORD *)(a2 + 18) = *(_WORD *)(a1 + 32);
        *(_WORD *)(a2 + 16) = 0;
      }
      else if ( *v5 == 1073807367 )
      {
        *(_DWORD *)a2 = 9;
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 36);
        *v6 = *(_DWORD *)(a1 + 32);
      }
      else
      {
        *(_DWORD *)a2 = 1;
        qmemcpy(v6, v5, 0x50u);
        *(_DWORD *)(a2 + 92) = *(_DWORD *)(a1 + 92);
      }
      goto LABEL_24;
    case 9:
      *(_DWORD *)a2 = 6;
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 28);
      *(_WORD *)(a2 + 32) = 1;
      goto LABEL_24;
    case 0xA:
      *(_DWORD *)a2 = 7;
LABEL_23:
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
LABEL_24:
      result = 0;
      break;
    default:
      result = -1073741823;
      break;
  }
  return result;
}
