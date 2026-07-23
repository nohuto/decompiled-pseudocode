/*
 * XREFs of CmpGetValueCountForKeyNodeStack @ 0x1404ED0C8
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EDC9C (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BF08 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackAdvance @ 0x14072A104 (CmpValueEnumStackAdvance.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14072A3C0 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpValueEnumStackCleanup @ 0x14072A3E0 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x14072A6EC (CmpValueEnumStackInitialize.c)
 *     CmpSortedValueEnumStackAdvance @ 0x14087B690 (CmpSortedValueEnumStackAdvance.c)
 *     CmpSortedValueEnumStackCleanup @ 0x14087B7CC (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackInitialize @ 0x14087BA24 (CmpSortedValueEnumStackInitialize.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087BA5C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpGetValueCountForKeyNodeStack(__int16 *a1, _DWORD *a2)
{
  _QWORD *EntryAtLayerHeight; // rax
  char v5; // r8
  __int16 v6; // r9
  __int16 v7; // r10
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int j; // eax
  int i; // eax
  _BYTE v14[96]; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v15[96]; // [rsp+80h] [rbp-39h] BYREF

  memset(v14, 0, 0x58uLL);
  memset(v15, 0, 0x58uLL);
  CmpSortedValueEnumStackInitialize(v14);
  CmpValueEnumStackInitialize(v15);
  if ( *a1 < 0 )
    goto LABEL_23;
  do
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1);
  while ( (!EntryAtLayerHeight[2] || !(unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight))
       && (__int16)(v6 - 1) >= 0 );
  if ( !v7 )
  {
LABEL_23:
    *a2 = 0;
    goto LABEL_24;
  }
  if ( !v5 )
  {
    *a2 = *(_DWORD *)(*(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1) + 16) + 36LL);
LABEL_24:
    v9 = 0;
    goto LABEL_25;
  }
  if ( v7 <= 1 )
  {
LABEL_17:
    v9 = CmpValueEnumStackStartFromKeyNodeStack((__int64)v15, a1);
    if ( v9 >= 0 )
    {
      v10 = 0;
      for ( i = CmpValueEnumStackAdvance(v15); ; i = CmpValueEnumStackAdvance(v15) )
      {
        v9 = i;
        if ( i == -2147483622 )
          break;
        if ( i < 0 )
          goto LABEL_25;
        ++v10;
      }
      goto LABEL_14;
    }
    goto LABEL_25;
  }
  v8 = CmpSortedValueEnumStackStartFromKeyNodeStack(v14, a1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = 0;
    for ( j = CmpSortedValueEnumStackAdvance(v14); ; j = CmpSortedValueEnumStackAdvance(v14) )
    {
      v9 = j;
      if ( j == -2147483622 )
        break;
      if ( j < 0 )
        goto LABEL_25;
      ++v10;
    }
LABEL_14:
    *a2 = v10;
    goto LABEL_24;
  }
  if ( v8 == -1073741670 )
  {
    CmpSortedValueEnumStackCleanup(v14);
    CmpSortedValueEnumStackInitialize(v14);
    goto LABEL_17;
  }
LABEL_25:
  CmpValueEnumStackCleanup(v15);
  CmpSortedValueEnumStackCleanup(v14);
  return (unsigned int)v9;
}
