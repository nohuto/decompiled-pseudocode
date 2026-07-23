/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x140880220
 * Callers:
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpKeyEnumStackCleanup @ 0x1405F8CE0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackInitialize @ 0x1405F8E7C (CmpKeyEnumStackInitialize.c)
 *     CmpHashUnicodeComponent @ 0x14065F044 (CmpHashUnicodeComponent.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406DF2A4 (CmpFindKcbInHashEntryByName.c)
 *     CmpStartKcbStack @ 0x140712760 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1407128D0 (CmpPopulateKcbStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140729FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpHashCompressedComponent @ 0x1407668C4 (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x14086F090 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x14087AD3C (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14087ADD8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408806DC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140880878 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 */

__int64 __fastcall CmpPartialPromoteSubkeys(__int64 a1)
{
  __int16 v2; // dx
  __int64 KcbAtLayerHeight; // rsi
  __int16 v4; // dx
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  int started; // ebx
  __int16 v8; // r8
  __int64 v9; // r9
  __int16 v10; // dx
  __int64 EntryAtLayerHeight; // rax
  __int64 v12; // rax
  int v13; // ebx
  unsigned __int8 *v14; // r14
  int v15; // eax
  __int64 KcbInHashEntryByCompressedName; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __m128i v21; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-B0h]
  __int16 v24[176]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v24, 0, sizeof(v24));
  v21 = 0LL;
  CmpKeyEnumStackInitialize((char *)v24);
  v2 = *(_WORD *)(a1 + 2);
  v22 = 0LL;
  WORD1(v22) = -1;
  *(_OWORD *)Privileges = 0LL;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
  started = CmpStartKcbStack((__int64)&v22, v4, v5, v6);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKcbStack((__int64)v24, a1, 0LL, 0LL);
    if ( started >= 0 )
    {
      while ( 1 )
      {
        v19 = CmpKeyEnumStackAdvance(v24);
        started = v19;
        if ( v19 < 0 )
          break;
        v8 = *(_WORD *)(KcbAtLayerHeight + 66);
        v9 = 0LL;
        v10 = v8;
        if ( v8 >= 0 )
        {
          while ( 1 )
          {
            EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)&v24[4], v10);
            if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
              break;
            if ( --v10 < 0 )
              goto LABEL_9;
          }
          v9 = EntryAtLayerHeight;
        }
LABEL_9:
        if ( v10 != v8 )
        {
          v12 = *(_QWORD *)(v9 + 16);
          v13 = *(unsigned __int16 *)(v12 + 72);
          v14 = (unsigned __int8 *)(v12 + 76);
          LOBYTE(v12) = *(_BYTE *)(v12 + 2);
          v21.m128i_i64[1] = (__int64)v14;
          v21.m128i_i16[0] = v13;
          v21.m128i_i16[1] = v13;
          if ( (v12 & 0x20) != 0 )
          {
            v15 = CmpHashCompressedComponent(v14, v13);
            KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByCompressedName(
                                               *(_QWORD *)(KcbAtLayerHeight + 32),
                                               v15 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                               KcbAtLayerHeight,
                                               v14,
                                               v13);
          }
          else
          {
            v17 = CmpHashUnicodeComponent(&v21);
            KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByName(
                                               *(_QWORD *)(KcbAtLayerHeight + 32),
                                               v17 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                               KcbAtLayerHeight,
                                               (__int64)&v21);
          }
          if ( KcbInHashEntryByCompressedName )
          {
            CmpPopulateKcbStack((__int64)&v22, KcbInHashEntryByCompressedName);
            v18 = CmpPromoteSingleKeyFromKcbStacks(a1, &v22, 0LL);
          }
          else
          {
            v18 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(a1, &v24[4], 0LL);
          }
          started = v18;
          if ( v18 < 0 )
            goto LABEL_21;
          CmpKeyEnumStackNotifyPromotion(v24);
        }
      }
      if ( v19 == -2147483622 )
        started = 0;
    }
  }
LABEL_21:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpKeyEnumStackCleanup((__int64)v24);
  return (unsigned int)started;
}
