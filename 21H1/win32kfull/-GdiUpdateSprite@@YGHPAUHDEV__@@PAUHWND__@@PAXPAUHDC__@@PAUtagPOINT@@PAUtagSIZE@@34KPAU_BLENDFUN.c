/*
 * XREFs of ?GdiUpdateSprite@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@@Z @ 0x9F558
 * Callers:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 * Callees:
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 */

int __userpurge GdiUpdateSprite@<eax>(
        struct _METASPRITE *a1@<edx>,
        int a2@<ecx>,
        struct _SPRITESTATE *a3,
        HWND a4,
        struct SPRITE *a5,
        HDC a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        HDC a9,
        struct _POINTL *a10,
        unsigned int a11,
        struct _BLENDFUNCTION *a12,
        unsigned int a13,
        struct tagRECT *a14)
{
  struct _BLENDFUNCTION *v14; // esi
  int updated; // ebx
  int v16; // edi
  unsigned int v18; // esi
  struct SPRITE *v19; // ecx
  int v20; // eax
  HWND v21; // [esp+0h] [ebp-60h]
  unsigned int v22; // [esp+0h] [ebp-60h]
  unsigned int v23; // [esp+0h] [ebp-60h]
  void *v24; // [esp+4h] [ebp-5Ch]
  struct _RECTL *v25; // [esp+4h] [ebp-5Ch]
  struct _RECTL *v26; // [esp+4h] [ebp-5Ch]
  _BYTE v27[4]; // [esp+10h] [ebp-50h] BYREF
  int v28; // [esp+14h] [ebp-4Ch]
  int v29; // [esp+18h] [ebp-48h] BYREF
  int v30; // [esp+1Ch] [ebp-44h]
  int v31; // [esp+20h] [ebp-40h]
  HWND v32; // [esp+24h] [ebp-3Ch]
  struct SPRITE *v33; // [esp+28h] [ebp-38h]
  HDC v34; // [esp+2Ch] [ebp-34h]
  struct _POINTL *v35; // [esp+30h] [ebp-30h]
  struct tagSIZE *v36; // [esp+34h] [ebp-2Ch]
  struct _POINTL *v37; // [esp+38h] [ebp-28h]
  struct _SPRITESTATE *v38; // [esp+3Ch] [ebp-24h]
  struct _BLENDFUNCTION *v39; // [esp+40h] [ebp-20h]
  struct _METASPRITE *MetaSprite; // [esp+44h] [ebp-1Ch]
  int v41; // [esp+48h] [ebp-18h] BYREF
  _DWORD v42[4]; // [esp+4Ch] [ebp-14h] BYREF

  MetaSprite = a1;
  v41 = a2;
  v38 = a3;
  v32 = a4;
  v33 = a5;
  v34 = a6;
  v35 = a7;
  v36 = a8;
  v14 = a12;
  v37 = a10;
  updated = 0;
  v39 = a12;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( (((unsigned int)&loc_1FFFFC + 4) & a11) == 0 )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreAcquireSemaphore(_ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
    a2 = v41;
    v31 = 1;
  }
  if ( a12 )
  {
    v42[0] = *a12;
    v42[1] = a12[1];
    v42[2] = a12[2];
    v42[3] = a12[3];
    v14 = (struct _BLENDFUNCTION *)v42;
    v39 = (struct _BLENDFUNCTION *)v42;
  }
  v41 = a2;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v27, (struct PDEVOBJ *)&v41);
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v41);
  v16 = v41;
  v28 = *(_DWORD *)(v41 + 104);
  if ( v28 )
  {
    MetaSprite = pSpGetMetaSprite(v38, v21, v24);
    if ( MetaSprite )
    {
      v18 = 0;
      updated = 1;
      if ( v28 )
      {
        do
        {
          v19 = 0;
          v20 = *(_DWORD *)(*(_DWORD *)(v16 + 108) + 4 * v18);
          if ( v33 )
          {
            v29 = *(_DWORD *)v33 - *(_DWORD *)(v20 + 1836);
            v30 = *((_DWORD *)v33 + 1) - *(_DWORD *)(v20 + 1840);
            v19 = (struct SPRITE *)&v29;
          }
          updated &= bSpUpdateSprite(v19, v34, v35, v36, a9, v37, a11, v39, v23, v26);
          ++v18;
        }
        while ( v18 < *(_DWORD *)(v16 + 104) );
      }
    }
  }
  else if ( pSpGetSprite(v38, v21, v24) )
  {
    updated = bSpUpdateSprite(v33, v34, v35, v36, a9, v37, a11, v14, v22, v25);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v27);
  if ( v31 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
    GreReleaseSemaphoreInternal(_ghsemGreLock);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  return updated;
}
