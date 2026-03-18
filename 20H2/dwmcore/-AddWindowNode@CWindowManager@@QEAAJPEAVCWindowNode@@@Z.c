/*
 * XREFs of ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800428EC
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x1800426C0 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x1800429D0 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800429F4 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B5304 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BD340 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180178D1C (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1801C4010 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  unsigned __int64 v4; // rcx
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v6; // rax
  unsigned int v7; // ecx
  struct CWindowAssociationMapEntry *v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int v12; // eax
  unsigned int v13; // ecx
  struct CWindowAssociationMapEntry *v14; // rbp
  unsigned __int64 i; // rdi
  CHwndBitmap *v16; // rax
  int v17; // eax
  unsigned int v18; // ecx
  struct CWindowAssociationMapEntry *v19; // [rsp+58h] [rbp+10h] BYREF
  struct CWindowAssociationMapEntry *v20; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  Entry = CWindowManager::FindEntry(this, *((_QWORD *)a2 + 77), &v19);
  if ( Entry >= 0 )
  {
    v14 = v19;
    for ( i = 0LL; i < CPtrArrayBase::GetCount((struct CWindowAssociationMapEntry *)((char *)v14 + 16)); ++i )
    {
      v16 = (CHwndBitmap *)CPtrArrayBase::operator[]((char *)v14 + 16, i);
      v17 = CHwndBitmap::SetVisual(v16, a2);
      Entry = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x56u, 0LL);
        return (unsigned int)Entry;
      }
    }
    *((_QWORD *)v14 + 1) = a2;
  }
  else
  {
    v6 = (struct CWindowAssociationMapEntry *)CWindowAssociationMapEntry::operator new(v4);
    v8 = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      *((_QWORD *)v6 + 1) = 0LL;
      *((_QWORD *)v6 + 2) = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    v19 = v8;
    if ( !v8 )
    {
      Entry = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x5Eu, 0LL);
      return (unsigned int)Entry;
    }
    *(_QWORD *)v8 = *((_QWORD *)a2 + 77);
    *((_QWORD *)v8 + 1) = a2;
    v9 = *((_DWORD *)this + 10);
    v20 = v8;
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      Entry = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v10 <= *((_DWORD *)this + 9) )
      {
        Entry = 0;
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v9) = v8;
        *((_DWORD *)this + 10) = v10;
        return (unsigned int)Entry;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 8LL, 1LL, &v20);
      Entry = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
    }
    if ( Entry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Entry, 0x63u, 0LL);
      SAFE_DELETE<CWindowAssociationMapEntry>(&v19);
    }
  }
  return (unsigned int)Entry;
}
