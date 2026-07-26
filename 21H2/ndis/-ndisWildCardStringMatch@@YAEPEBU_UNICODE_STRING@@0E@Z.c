/*
 * XREFs of ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00FED5C
 * Callers:
 *     ?ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C007DC00 (-ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 *     ?ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C007DDE0 (-ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 *     ndisNdkPcwAddCounter @ 0x1C009907C (ndisNdkPcwAddCounter.c)
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C00FECC8 (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C0120C48 (ndisNdkPcwRemoveCounter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisWildCardStringMatch(const struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, char a3)
{
  wchar_t *Buffer; // r13
  wchar_t *v4; // r8
  unsigned __int16 v5; // r14
  unsigned __int16 v6; // si
  unsigned __int16 v7; // di
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // r15
  unsigned __int16 v10; // r12
  char v11; // bp
  wchar_t v12; // dx
  bool result; // al
  WCHAR String1; // [rsp+70h] [rbp+8h] BYREF
  wchar_t *v15; // [rsp+78h] [rbp+10h]
  WCHAR String2; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(String2) = a3;
  Buffer = a1->Buffer;
  v4 = a2->Buffer;
  v5 = a1->Length >> 1;
  v6 = a2->Length >> 1;
  v15 = v4;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( 2 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
      {
        result = v8 == v6;
        goto LABEL_8;
      }
      v12 = Buffer[v7];
      if ( v12 == 42 )
      {
        v11 = 1;
        v9 = v7;
        v10 = v8;
        goto LABEL_6;
      }
      if ( v12 == 63 )
      {
        if ( v8 == v6 )
          goto LABEL_16;
        goto LABEL_20;
      }
      if ( v8 == v6 )
      {
LABEL_16:
        result = 0;
        goto LABEL_10;
      }
      String1 = Buffer[v7];
      String2 = v4[v8];
      if ( RtlCompareUnicodeStrings(&String1, 1uLL, &String2, 1uLL, 1u) )
        break;
      v4 = v15;
LABEL_20:
      ++v8;
LABEL_6:
      ++v7;
    }
    result = 0;
LABEL_8:
    if ( result )
      return result;
    v4 = v15;
LABEL_10:
    if ( v11 && v8 < v6 )
    {
      v7 = v9;
      v8 = v10 + 1;
      continue;
    }
    return result;
  }
}
