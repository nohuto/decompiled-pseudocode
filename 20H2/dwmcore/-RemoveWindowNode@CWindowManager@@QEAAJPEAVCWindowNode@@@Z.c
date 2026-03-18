/*
 * XREFs of ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180041FFC
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x1800426C0 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x18004207C (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800429F4 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BD340 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1801C4010 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  unsigned __int64 v2; // rdx
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v5; // rbp
  CPtrArrayBase *v6; // rsi
  unsigned __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned __int64 i; // rdi
  __int64 v12; // rcx
  CHwndBitmap *v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  struct CWindowAssociationMapEntry *v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 77);
  v16 = 0LL;
  Entry = CWindowManager::FindEntry(this, v2, &v16);
  if ( Entry >= 0 )
  {
    v5 = v16;
    v6 = (struct CWindowAssociationMapEntry *)((char *)v16 + 16);
    if ( CPtrArrayBase::GetCount((struct CWindowAssociationMapEntry *)((char *)v16 + 16)) )
    {
      for ( i = 0LL; i < CPtrArrayBase::GetCount(v6); ++i )
      {
        v13 = (CHwndBitmap *)CPtrArrayBase::operator[](v12, i);
        v14 = CHwndBitmap::SetVisual(v13, 0LL);
        Entry = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x8Bu, 0LL);
          return (unsigned int)Entry;
        }
      }
      *((_QWORD *)v5 + 1) = 0LL;
    }
    else
    {
      v8 = CWindowManager::RemoveEntry(this, v7);
      Entry = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x92u, 0LL);
    }
  }
  return (unsigned int)Entry;
}
