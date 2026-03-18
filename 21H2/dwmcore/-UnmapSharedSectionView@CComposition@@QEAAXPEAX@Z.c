/*
 * XREFs of ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x1800EAAE4
 * Callers:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x1800EAA90 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CComposition::UnmapSharedSectionView(CComposition *this, void *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  int v4; // eax
  __int64 v5; // rcx
  LPCVOID lpBaseAddress; // [rsp+48h] [rbp+10h] BYREF

  lpBaseAddress = a2;
  v2 = *((_DWORD *)this + 208);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_8;
  }
  if ( v3 <= *((_DWORD *)this + 207) )
  {
    *(_QWORD *)(*((_QWORD *)this + 101) + 8LL * v2) = a2;
    *((_DWORD *)this + 208) = v3;
    return;
  }
  v4 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 808, 8u, 1, &lpBaseAddress);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0xC0u);
LABEL_8:
    UnmapViewOfFile(lpBaseAddress);
  }
}
