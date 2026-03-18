/*
 * XREFs of ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017D650
 * Callers:
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_HWNDBITMAP@@@Z @ 0x1801C87A0 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_HWNDBITMAP@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18007B290 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x180092B24 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180092B48 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18017D570 (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1801C8810 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddHwndBitmap(CWindowManager *this, struct CHwndBitmap *a2)
{
  __int64 v3; // rdx
  struct CWindowAssociationMapEntry *v5; // rdi
  unsigned __int64 v6; // rax
  CPtrArrayBase *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  unsigned __int64 Count; // rax
  CPtrArrayBase *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-28h]
  unsigned int v24; // [rsp+20h] [rbp-28h]
  struct CWindowAssociationMapEntry *v25; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v26; // [rsp+60h] [rbp+18h] BYREF

  v3 = *((_QWORD *)a2 + 10);
  v25 = 0LL;
  if ( (int)CWindowManager::FindEntry(this, v3, &v25) < 0 )
  {
    v11 = CWindowAssociationMapEntry::operator new();
    v13 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v25 = (struct CWindowAssociationMapEntry *)v13;
    if ( !v13 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0xB6u, 0LL);
      return v10;
    }
    *v13 = *((_QWORD *)a2 + 10);
    Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v13 + 2));
    v16 = CPtrArrayBase::InsertAt(v15, (unsigned __int64)a2, Count);
    v10 = v16;
    if ( v16 < 0 )
    {
      v24 = 185;
    }
    else
    {
      v16 = CHwndBitmap::SetVisual(a2, 0LL);
      v10 = v16;
      if ( v16 >= 0 )
      {
        v18 = *((unsigned int *)this + 10);
        v26 = v13;
        v19 = v18 + 1;
        if ( (int)v18 + 1 >= (unsigned int)v18 )
        {
          if ( v19 <= *((_DWORD *)this + 9) )
          {
            v10 = 0;
            *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v18) = v13;
            *((_DWORD *)this + 10) = v19;
            return v10;
          }
          v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, &v26);
          v10 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v21, 0xC0u, 0LL);
        }
        else
        {
          v10 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        if ( (v10 & 0x80000000) == 0 )
          return v10;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v10, 0xBCu, 0LL);
LABEL_26:
        SAFE_DELETE<CWindowAssociationMapEntry>(&v25);
        return v10;
      }
      v24 = 186;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, v24, 0LL);
    goto LABEL_26;
  }
  v5 = v25;
  v6 = CPtrArrayBase::GetCount((struct CWindowAssociationMapEntry *)((char *)v25 + 16));
  v8 = CPtrArrayBase::InsertAt(v7, (unsigned __int64)a2, v6);
  v10 = v8;
  if ( v8 < 0 )
  {
    v23 = 176;
    goto LABEL_6;
  }
  v8 = CHwndBitmap::SetVisual(a2, *((struct CVisual **)v5 + 1));
  v10 = v8;
  if ( v8 < 0 )
  {
    v23 = 177;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v23, 0LL);
  }
  return v10;
}
