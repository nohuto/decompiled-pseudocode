/*
 * XREFs of _RtlpVerCompare@20 @ 0x4B2B0391
 * Callers:
 *     _RtlSwitchedVVI@16 @ 0x4B2B0060 (_RtlSwitchedVVI@16.c)
 *     _RtlVerifyVersionInfo@16 @ 0x4B363DF0 (_RtlVerifyVersionInfo@16.c)
 * Callees:
 *     _RtlStringCbPrintfA @ 0x4B2AE791 (_RtlStringCbPrintfA.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

bool __fastcall RtlpVerCompare(int a1, int a2, int Format, bool *a4, char a5)
{
  int v6; // ecx
  int v7; // esi
  int v8; // esi
  int v9; // esi
  char *v11; // ecx
  char *v12; // eax
  bool v13; // cf
  unsigned __int8 v14; // bl
  int v15; // esi
  char v16[20]; // [esp+8h] [ebp-2Ch] BYREF
  char Buffer[20]; // [esp+1Ch] [ebp-18h] BYREF

  if ( (a5 & 1) != 0 )
  {
    RtlStringCbPrintfA(Buffer, 20, (int)"%d", a2);
    RtlStringCbPrintfA(v16, 20, (int)"%d", Format);
    v11 = Buffer;
    v12 = v16;
    while ( 1 )
    {
      a2 = 0;
      v13 = (unsigned __int8)*v12 < (unsigned __int8)*v11;
      if ( *v12 != *v11 )
        break;
      if ( !*v12 )
        goto LABEL_12;
      v14 = v12[1];
      v13 = v14 < (unsigned __int8)v11[1];
      if ( v14 != v11[1] )
        break;
      v12 += 2;
      v11 += 2;
      if ( !v14 )
      {
LABEL_12:
        v6 = 0;
        goto LABEL_3;
      }
    }
    v6 = v13 ? -1 : 1;
  }
  else
  {
    v6 = Format;
  }
LABEL_3:
  *a4 = a2 == v6;
  v7 = a1 - 1;
  if ( !v7 )
    return v6 == a2;
  v8 = v7 - 1;
  if ( !v8 )
    return v6 > a2;
  v9 = v8 - 1;
  if ( !v9 )
    return v6 >= a2;
  v15 = v9 - 1;
  if ( !v15 )
    return v6 < a2;
  if ( v15 == 1 )
    return v6 <= a2;
  return 0;
}
