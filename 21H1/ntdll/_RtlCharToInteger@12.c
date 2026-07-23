/*
 * XREFs of _RtlCharToInteger@12 @ 0x4B2A8E10
 * Callers:
 *     _LdrpParseForwarderDescription@16 @ 0x4B2E5D96 (_LdrpParseForwarderDescription@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __stdcall RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value)
{
  PCSZ v3; // edx
  CHAR i; // bl
  CHAR *v5; // edx
  CHAR v6; // cl
  CHAR *v7; // esi
  int v8; // edi
  ULONG v9; // esi
  ULONG v10; // eax
  CHAR *v12; // edx
  PCSZ v13; // ecx
  int v14; // [esp-4h] [ebp-30h]
  int v15; // [esp-4h] [ebp-30h]

  v3 = String;
  for ( i = *String; ; i = *v3 )
  {
    if ( i > 32 )
    {
      v5 = (CHAR *)(v3 + 1);
      goto LABEL_4;
    }
    v13 = v3++;
    if ( !*v3 )
      break;
  }
  v5 = (CHAR *)v13;
LABEL_4:
  v6 = i;
  if ( i == 45 || i == 43 )
    v6 = *v5++;
  v7 = v5;
  switch ( Base )
  {
    case 0u:
      Base = 10;
      v8 = 0;
      if ( v6 != 48 )
        break;
      v6 = *v5;
      v12 = v5 + 1;
      switch ( v6 )
      {
        case 'x':
          Base = 16;
          v14 = 4;
          break;
        case 'o':
          Base = 8;
          v14 = 3;
          break;
        case 'b':
          Base = 2;
          v8 = 1;
LABEL_33:
          v6 = *v12;
          goto LABEL_23;
        default:
          v12 = v7;
LABEL_23:
          v5 = v12 + 1;
          goto LABEL_8;
      }
      v8 = v14;
      goto LABEL_33;
    case 2u:
      v8 = 1;
      break;
    case 8u:
      v15 = 3;
LABEL_41:
      v8 = v15;
      break;
    case 0xAu:
      v8 = 0;
      break;
    case 0x10u:
      v15 = 4;
      goto LABEL_41;
    default:
      return -1073741811;
  }
LABEL_8:
  v9 = 0;
  while ( v6 )
  {
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      if ( (unsigned __int8)(v6 - 65) > 5u )
      {
        if ( (unsigned __int8)(v6 - 97) > 5u )
          break;
        v10 = v6 - 87;
      }
      else
      {
        v10 = v6 - 55;
      }
    }
    else
    {
      v10 = v6 - 48;
    }
    if ( v10 >= Base )
      break;
    if ( v8 )
      v9 = v10 | (v9 << v8);
    else
      v9 = v10 + Base * v9;
    v6 = *v5++;
  }
  if ( i == 45 )
    v9 = -v9;
  *Value = v9;
  return 0;
}
