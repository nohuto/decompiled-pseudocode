/*
 * XREFs of ndisUnicodeStringToPointer @ 0x1C00B7E80
 * Callers:
 *     NdisClGetProtocolVcContextFromTapiCallId @ 0x1C00B7F80 (NdisClGetProtocolVcContextFromTapiCallId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisUnicodeStringToPointer(unsigned __int16 *a1, __int64 *a2)
{
  unsigned __int16 v3; // r10
  unsigned __int16 *v4; // r9
  int v5; // r8d
  unsigned __int16 v6; // cx
  __int64 i; // rdx
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = 0;
  v4 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v5 = *a1 >> 1;
  if ( v5 )
  {
    while ( 1 )
    {
      --v5;
      v3 = *v4++;
      if ( v3 > 0x20u )
        break;
      if ( !v5 )
      {
        v3 = 0;
        break;
      }
    }
  }
  else
  {
    v5 = -1;
  }
  v6 = v3;
  if ( ((v3 - 43) & 0xFFFD) == 0 )
  {
    if ( v5 )
    {
      --v5;
      v6 = *v4++;
    }
    else
    {
      v6 = 0;
    }
  }
  for ( i = 0LL; v6; ++v4 )
  {
    if ( (unsigned __int16)(v6 - 48) > 9u )
    {
      if ( (unsigned __int16)(v6 - 65) > 5u )
      {
        if ( (unsigned __int16)(v6 - 97) > 5u )
          break;
        v8 = (unsigned int)v6 - 87;
      }
      else
      {
        v8 = (unsigned int)v6 - 55;
      }
    }
    else
    {
      v8 = (unsigned int)v6 - 48;
    }
    if ( (unsigned int)v8 >= 0x10 )
      break;
    i = v8 | (16 * i);
    if ( !v5 )
      break;
    --v5;
    v6 = *v4;
  }
  v9 = -i;
  if ( v3 != 45 )
    v9 = i;
  *a2 = v9;
  return 0LL;
}
