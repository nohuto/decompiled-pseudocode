/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x1800B68A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::Initialize(CDesktopThumbnailBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CDesktopManager *v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v8; // eax
  CDesktopThumbnailBase *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x28u);
    return v3;
  }
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v9 = this;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 194);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x29u);
    return v3;
  }
  if ( v6 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 193) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 752, 8u, 1, &v9);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC0u);
    if ( (v3 & 0x80000000) != 0 )
      goto LABEL_13;
  }
  else
  {
    v3 = 0;
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 94)
              + 8LL * *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 194)) = this;
    *((_DWORD *)v4 + 194) = v6;
  }
  *((_BYTE *)this + 84) |= 8u;
  return v3;
}
