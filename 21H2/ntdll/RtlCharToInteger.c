/*
 * XREFs of RtlCharToInteger @ 0x180076B90
 * Callers:
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 *     LdrpParseForwarderDescription @ 0x180076AF4 (LdrpParseForwarderDescription.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value)
{
  ULONG v4; // r10d
  PCSZ v5; // r9
  CHAR i; // r11
  CHAR *v7; // r9
  CHAR v8; // cl
  CHAR *v9; // rax
  int v10; // r8d
  unsigned int v11; // eax
  ULONG v12; // eax
  PCSZ v14; // rax
  CHAR *v15; // r9

  v4 = Base;
  v5 = String;
  for ( i = *String; ; i = *v5 )
  {
    if ( i > 32 )
    {
      v7 = (CHAR *)(v5 + 1);
      goto LABEL_4;
    }
    v14 = v5++;
    if ( !*v5 )
      break;
  }
  v7 = (CHAR *)v14;
LABEL_4:
  v8 = i;
  if ( ((i - 43) & 0xFD) == 0 )
    v8 = *v7++;
  v9 = v7;
  switch ( Base )
  {
    case 0u:
      v4 = 10;
      if ( v8 != 48 )
        break;
      v8 = *v7;
      v15 = v7 + 1;
      switch ( v8 )
      {
        case 'x':
          Base = 4;
          v4 = 16;
          break;
        case 'o':
          Base = 3;
          v4 = 8;
          break;
        case 'b':
          Base = 1;
          v4 = 2;
          break;
        default:
          v15 = v9;
          goto LABEL_34;
      }
      v8 = *v15;
LABEL_34:
      v7 = v15 + 1;
      break;
    case 0xAu:
      Base = 0;
      break;
    case 2u:
      Base = 1;
      break;
    case 8u:
      Base = 3;
      break;
    case 0x10u:
      Base = 4;
      break;
    default:
      return -1073741811;
  }
  v10 = 0;
  while ( v8 )
  {
    if ( (unsigned __int8)(v8 - 48) > 9u )
    {
      if ( (unsigned __int8)(v8 - 65) <= 5u )
      {
        v11 = v8 - 55;
      }
      else
      {
        if ( (unsigned __int8)(v8 - 97) > 5u )
          break;
        v11 = v8 - 87;
      }
    }
    else
    {
      v11 = v8 - 48;
    }
    if ( v11 >= v4 )
      break;
    if ( Base )
      v10 = v11 | (v10 << Base);
    else
      v10 = v11 + v4 * v10;
    v8 = *v7++;
  }
  v12 = -v10;
  if ( i != 45 )
    v12 = v10;
  *Value = v12;
  return 0;
}
