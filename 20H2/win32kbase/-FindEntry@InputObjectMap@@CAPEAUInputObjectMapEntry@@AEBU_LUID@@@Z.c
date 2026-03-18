/*
 * XREFs of ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1C01F5890
 * Callers:
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01F54A4 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01F5A0C (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C01F5AB0 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 * Callees:
 *     <none>
 */

struct InputObjectMapEntry *__fastcall InputObjectMap::FindEntry(const struct _LUID *a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  __int64 v3; // r11
  __int64 v4; // rbx
  char *v5; // rdx
  __int64 v7; // [rsp+8h] [rbp+8h]

  v1 = 0LL;
  v2 = HIBYTE(a1->HighPart)
     + 37
     * (BYTE2(a1->HighPart)
      + 37
      * (BYTE1(a1->HighPart)
       + 37
       * (LOBYTE(a1->HighPart)
        + 37
        * (HIBYTE(a1->LowPart)
         + 37 * (BYTE2(a1->LowPart) + 37 * (BYTE1(a1->LowPart) + 37 * (LOBYTE(a1->LowPart) + 11623883LL)))))));
  v3 = -1LL << (dword_1C024E464 & 0x1F);
  v4 = v3 & v2;
  if ( (unsigned int)dword_1C024E464 >> 5 )
  {
    v7 = v3 & v2;
    v5 = (char *)Buffer
       + 8
       * ((37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v4 + 11623883)))))))
         + HIBYTE(v7)) & (((unsigned int)dword_1C024E464 >> 5) - 1));
    while ( 1 )
    {
      v5 = *(char **)v5;
      if ( ((unsigned __int8)v5 & 1) != 0 )
        break;
      if ( v4 == (v3 & *((_QWORD *)v5 + 1)) )
        goto LABEL_7;
    }
    v5 = 0LL;
LABEL_7:
    if ( v5 )
    {
      while ( *((_DWORD *)v5 + 4) != a1->LowPart || *((_DWORD *)v5 + 5) != a1->HighPart )
      {
        while ( 1 )
        {
          v5 = *(char **)v5;
          if ( ((unsigned __int8)v5 & 1) != 0 )
            break;
          if ( (v2 & v3) == (v3 & *((_QWORD *)v5 + 1)) )
            goto LABEL_14;
        }
        v5 = 0LL;
LABEL_14:
        if ( !v5 )
          return (struct InputObjectMapEntry *)v1;
      }
      return (struct InputObjectMapEntry *)v5;
    }
  }
  return (struct InputObjectMapEntry *)v1;
}
