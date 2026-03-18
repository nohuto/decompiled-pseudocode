/*
 * XREFs of ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800F5600
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800819E0 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x180044330 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  SIZE_T v3; // rcx
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v13; // edi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF
  void *v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0LL;
  v3 = *((unsigned int *)a2 + 1);
  v17 = 0LL;
  v5 = HrAlloc(v3, &v18);
  v7 = v18;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x3Bu);
  }
  else
  {
    memcpy_0(v18, a2, *((unsigned int *)a2 + 1));
    v10 = *((_DWORD *)this + 32);
    *((_QWORD *)&v17 + 1) = v7;
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v8 = -2147024362;
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      if ( v11 <= *((_DWORD *)this + 31) )
      {
        v8 = 0;
        *(_OWORD *)(*((_QWORD *)this + 13) + 16LL * v10) = v17;
        *((_DWORD *)this + 32) = v11;
        return v8;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 104, 0x10u, 1, &v17);
      v13 = v15;
      v8 = v15;
      if ( v15 >= 0 )
        return v8;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0xC0u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x40u);
  }
  if ( v7 )
    DefaultHeap::Free(v7);
  return v8;
}
