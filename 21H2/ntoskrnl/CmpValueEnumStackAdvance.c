/*
 * XREFs of CmpValueEnumStackAdvance @ 0x14072A104
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404ED0C8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140729760 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086C3C0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpIsValueTombstone @ 0x140611F60 (CmpIsValueTombstone.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14072A440 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14087BC34 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  __int16 v2; // cx
  unsigned int v3; // r8d
  __int64 *EntryAtLayerHeight; // r14
  __int16 v5; // ax
  int v6; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  char v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0xFFFFFFFFLL;
  v12 = 0;
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)a1 == -1 )
      return (unsigned int)-2147483622;
    ++*(_DWORD *)(a1 + 8);
    v2 = *(_WORD *)(a1 + 6);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 4) = 1;
    v2 = *(_WORD *)(a1 + 12);
    *(_WORD *)(a1 + 6) = v2;
  }
  *(_DWORD *)a1 = -1;
  if ( v2 >= 0 )
  {
    do
    {
      EntryAtLayerHeight = (__int64 *)CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v2);
      while ( v3 < *((_DWORD *)EntryAtLayerHeight + 6) )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*EntryAtLayerHeight + 8))(
               *EntryAtLayerHeight,
               *(unsigned int *)(EntryAtLayerHeight[1] + 4LL * v3),
               &v13);
        if ( CmpIsValueTombstone(*EntryAtLayerHeight, v8) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(v10 + 16))(v10, &v13);
          v3 = ++*(_DWORD *)(a1 + 8);
        }
        else
        {
          v6 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), v9, &v12);
          (*(void (__fastcall **)(__int64, __int64 *))(*EntryAtLayerHeight + 16))(*EntryAtLayerHeight, &v13);
          if ( v6 < 0 )
            return (unsigned int)v6;
          v11 = *(_DWORD *)(a1 + 8);
          if ( !v12 )
          {
            v6 = 0;
            *(_DWORD *)a1 = *(_DWORD *)(EntryAtLayerHeight[1] + 4LL * *(unsigned int *)(a1 + 8));
            return (unsigned int)v6;
          }
          v3 = v11 + 1;
          *(_DWORD *)(a1 + 8) = v11 + 1;
        }
      }
      v5 = *(_WORD *)(a1 + 6) - 1;
      *(_DWORD *)(a1 + 8) = 0;
      v2 = v5;
      *(_WORD *)(a1 + 6) = v5;
    }
    while ( v5 >= 0 );
  }
  return (unsigned int)-2147483622;
}
