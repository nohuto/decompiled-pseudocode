/*
 * XREFs of ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C004DFA8
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C000F13C (GreTransferDwmStateToSpriteState.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C007C1E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 * Callees:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C004F24C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C004FA50 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0282784 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiUpdateSprite(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct _POINTL *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct _POINTL *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  unsigned int updated; // ebx
  struct _RECTL *v16; // rsi
  HDEV v17; // rdi
  const struct _SPRITESTATE *v18; // rcx
  struct SPRITE *Sprite; // rcx
  int v21; // r9d
  struct _METASPRITE *MetaSprite; // r13
  __int64 v23; // r14
  struct _POINTL *v24; // r8
  __int64 v25; // rax
  int v26; // [rsp+50h] [rbp-59h]
  HDEV v27; // [rsp+58h] [rbp-51h] BYREF
  struct _POINTL v28; // [rsp+60h] [rbp-49h] BYREF
  struct _BLENDFUNCTION *v29; // [rsp+68h] [rbp-41h]
  struct _POINTL *v30; // [rsp+70h] [rbp-39h]
  HDC v31; // [rsp+78h] [rbp-31h]
  struct tagSIZE *v32; // [rsp+80h] [rbp-29h]
  HDC v33; // [rsp+88h] [rbp-21h]
  _BYTE v34[8]; // [rsp+90h] [rbp-19h] BYREF
  struct _RECTL v35; // [rsp+98h] [rbp-11h] BYREF

  updated = 0;
  v28 = 0LL;
  v26 = 0;
  v16 = (struct _RECTL *)a12;
  v32 = a6;
  v31 = a7;
  v30 = a8;
  v29 = a10;
  v33 = a4;
  if ( (a11 & 0x200000) == 0 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, a2, a3, a4);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v26 = 1;
  }
  if ( a12 )
  {
    v16 = &v35;
    v35 = (struct _RECTL)*a12;
  }
  v27 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v34, (struct PDEVOBJ *)&v27);
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27);
  v17 = v27;
  v18 = (const struct _SPRITESTATE *)(v27 + 22);
  if ( *((_DWORD *)v27 + 37) )
  {
    MetaSprite = pSpGetMetaSprite(v18, a2, a3);
    if ( MetaSprite )
    {
      v23 = 0LL;
      updated = 1;
      if ( v21 )
      {
        do
        {
          v24 = 0LL;
          v25 = *(_QWORD *)(*((_QWORD *)v17 + 19) + 8 * v23);
          if ( a5 )
          {
            v24 = &v28;
            v28.x = a5->x - *(_DWORD *)(v25 + 2584);
            v28.y = a5->y - *(_DWORD *)(v25 + 2588);
          }
          updated &= bSpUpdateSprite(
                       *((struct SPRITE **)MetaSprite + v23 + 3),
                       v33,
                       v24,
                       v32,
                       v31,
                       v30,
                       a9,
                       v29,
                       a11,
                       v16);
          v23 = (unsigned int)(v23 + 1);
        }
        while ( (unsigned int)v23 < *((_DWORD *)v17 + 37) );
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v18, a2, a3);
    if ( Sprite )
      updated = bSpUpdateSprite(Sprite, v33, a5, v32, v31, v30, a9, v29, a11, v16);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v34);
  if ( v26 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return updated;
}
