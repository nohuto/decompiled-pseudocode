/*
 * XREFs of ?ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z @ 0x1C0202D48
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C0202BC4 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParseAndCompareHexValue(const unsigned __int16 *a1, int a2, unsigned __int8 *a3, unsigned int *a4)
{
  __int64 v4; // r11
  int v5; // ebx
  char v6; // di
  int v7; // esi
  unsigned __int16 v8; // r10
  int v9; // eax
  unsigned __int8 v10; // al
  bool v12; // zf

  v4 = *a4;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = a1[v4];
    if ( v8 == 35 || !v8 )
      break;
    if ( v8 == 44 )
    {
      v12 = v5 == a2;
      v5 = 0;
      v7 = 0;
      if ( v12 )
        v6 = 1;
      v4 = (unsigned int)(v4 + 1);
    }
    else
    {
      if ( (unsigned __int16)(v8 - 48) > 9u && (unsigned __int16)((v8 | 0x20) - 97) > 5u )
        goto LABEL_19;
      v9 = (unsigned __int16)(v8 - 48) > 9u ? ((_BYTE)v8 - 7) & 0xF : v8 - 48;
      v4 = (unsigned int)(v4 + 1);
      v5 = v9 + 16 * v5;
      if ( (unsigned int)++v7 > 4 )
        goto LABEL_19;
    }
  }
  if ( a1[v4] != 35 )
  {
LABEL_19:
    WdLogSingleEntry1(3LL, a1);
    return 3221225485LL;
  }
  v10 = v6;
  *a4 = v4 + 1;
  if ( v5 == a2 )
    v10 = 1;
  *a3 = v10;
  return 0LL;
}
