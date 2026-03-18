/*
 * XREFs of ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800D83FC
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800A6E30 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x180044098 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B5304 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  SIZE_T v3; // rcx
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v13; // eax
  __int64 v14; // rcx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF

  lpMem = 0LL;
  v3 = *((unsigned int *)a2 + 1);
  v15 = 0LL;
  v5 = HrAlloc(v3, &lpMem);
  v7 = lpMem;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3Bu, 0LL);
  }
  else
  {
    memcpy_0(lpMem, a2, *((unsigned int *)a2 + 1));
    v10 = *((_DWORD *)this + 32);
    *((_QWORD *)&v15 + 1) = v7;
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v11 <= *((_DWORD *)this + 31) )
      {
        v8 = 0;
        *(_OWORD *)(*((_QWORD *)this + 13) + 16LL * v10) = v15;
        *((_DWORD *)this + 32) = v11;
        return v8;
      }
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 16, 1, &v15);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u, 0LL);
    }
    if ( (v8 & 0x80000000) == 0 )
      return v8;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v8, 0x40u, 0LL);
  }
  if ( v7 )
    operator delete(v7);
  return v8;
}
