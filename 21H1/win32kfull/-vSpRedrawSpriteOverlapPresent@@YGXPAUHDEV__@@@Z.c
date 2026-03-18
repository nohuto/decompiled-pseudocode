/*
 * XREFs of ?vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z @ 0x3046E
 * Callers:
 *     _GreRedrawSpriteOverlapPresent@4 @ 0x303E4 (_GreRedrawSpriteOverlapPresent@4.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ @ 0xAED46 (-vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1DFB7F (-vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 */

void __thiscall vSpRedrawSpriteOverlapPresent(char *this)
{
  char *v1; // ebx
  struct REGION *v2; // eax
  struct REGION *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  int v14; // ecx
  char *v15; // esi
  int v16; // eax
  _DWORD *v17; // esi
  unsigned int v18; // edi
  struct _RECTL *v19; // esi
  struct _SPRITESTATE *v20; // [esp+0h] [ebp-4C8h]
  struct _RECTL *v21; // [esp+0h] [ebp-4C8h]
  int v22; // [esp+4h] [ebp-4C4h]
  _BYTE v23[112]; // [esp+10h] [ebp-4B8h] BYREF
  char *v24; // [esp+80h] [ebp-448h] BYREF
  _DWORD v25[2]; // [esp+84h] [ebp-444h] BYREF
  struct REGION *v26[2]; // [esp+8Ch] [ebp-43Ch] BYREF
  int v27; // [esp+94h] [ebp-434h]
  int v28; // [esp+98h] [ebp-430h] BYREF
  int v29; // [esp+9Ch] [ebp-42Ch]
  unsigned int v30; // [esp+A0h] [ebp-428h] BYREF
  _DWORD v31[81]; // [esp+A4h] [ebp-424h] BYREF
  _DWORD v32[82]; // [esp+1E8h] [ebp-2E0h] BYREF
  char v33[4]; // [esp+330h] [ebp-198h] BYREF
  char v34; // [esp+334h] [ebp-194h] BYREF
  char v35; // [esp+344h] [ebp-184h]
  int v36; // [esp+360h] [ebp-168h]
  int v37; // [esp+374h] [ebp-154h]
  int v38; // [esp+378h] [ebp-150h]
  int v39; // [esp+3A0h] [ebp-128h]
  int v40; // [esp+3A8h] [ebp-120h]
  char v41[4]; // [esp+3B0h] [ebp-118h] BYREF
  char v42[16]; // [esp+3B4h] [ebp-114h] BYREF
  char v43; // [esp+3C4h] [ebp-104h]
  int v44; // [esp+3E0h] [ebp-E8h]
  int v45; // [esp+3F4h] [ebp-D4h]
  int v46; // [esp+3F8h] [ebp-D0h]
  int v47; // [esp+420h] [ebp-A8h]
  int v48; // [esp+428h] [ebp-A0h]
  char v49[4]; // [esp+430h] [ebp-98h] BYREF
  char v50[16]; // [esp+434h] [ebp-94h] BYREF
  char v51; // [esp+444h] [ebp-84h]
  int v52; // [esp+460h] [ebp-68h]
  int v53; // [esp+474h] [ebp-54h]
  int v54; // [esp+478h] [ebp-50h]
  int v55; // [esp+4A0h] [ebp-28h]
  int v56; // [esp+4A8h] [ebp-20h]
  _DWORD v57[5]; // [esp+4B0h] [ebp-18h] BYREF

  v24 = this;
  v1 = this + 64;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v23, (struct PDEVOBJ *)&v24);
  GreAcquireSemaphore(*((_DWORD *)v1 + 22));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_DWORD *)v1 + 22), 8);
  v2 = (struct REGION *)*((_DWORD *)v1 + 162);
  if ( !v2 )
    goto LABEL_2;
  v3 = (struct REGION *)*((_DWORD *)v1 + 163);
  if ( !v3 )
    goto LABEL_2;
  v53 = 0;
  v4 = 1;
  v55 = 1;
  v47 = 1;
  v27 = 1;
  v54 = 0;
  v56 = 0;
  v52 = 0;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v44 = 0;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v49, v2, (struct ERECTL *)(v1 + 20), 0);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v41, v3, (struct ERECTL *)(v1 + 20), 0);
  ERECTL::bEmpty((ERECTL *)v50);
  v5 = ERECTL::bEmpty((ERECTL *)v42);
  if ( v6 == v5 )
  {
    if ( v51 || v43 )
    {
      if ( v51 != v43 )
        goto LABEL_30;
      memset(v31, 0, 0x140u);
      memset(&v32[1], 0, 0x140u);
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v49, 0, 0, 4u, 0x64u);
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v41, 0, 0, 4u, 0x64u);
      v7 = 1;
      v8 = 1;
      v28 = 1;
      v29 = 1;
      while ( 1 )
      {
        v9 = 0;
        v10 = 0;
        v30 = 0;
        v32[0] = 0;
        if ( v7 )
        {
          v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v49, 0x144u, &v30, 0);
          v9 = v30;
          v8 = v29;
          v28 = v11;
        }
        if ( v8 )
        {
          v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)v41, 0x144u, v32, 0);
          v10 = v32[0];
          v8 = v12;
          v29 = v12;
        }
        if ( v9 != v10 )
          break;
        v13 = 0;
        if ( v9 )
        {
          v14 = 0;
          while ( v32[v14 + 1] == v31[v14]
               && v32[v14 + 2] == v31[v14 + 1]
               && v32[v14 + 3] == v31[v14 + 2]
               && v32[v14 + 4] == v31[v14 + 3] )
          {
            ++v13;
            v14 += 4;
            if ( v13 >= v9 )
            {
              v8 = v29;
              goto LABEL_22;
            }
          }
          v4 = 0;
          v7 = 0;
          v8 = 0;
          v27 = 0;
          v28 = 0;
          v29 = 0;
        }
        else
        {
LABEL_22:
          v4 = v27;
          v7 = v28;
        }
        if ( !v7 && !v8 )
          goto LABEL_28;
      }
      v4 = 0;
    }
LABEL_28:
    if ( v4 )
    {
      REGION::vDeleteREGION(*((REGION **)v1 + 163));
      *((_DWORD *)v1 + 163) = 0;
      goto LABEL_2;
    }
  }
LABEL_30:
  v27 = *((_DWORD *)v1 + 162);
  *((_DWORD *)v1 + 162) = *((_DWORD *)v1 + 163);
  vSpComputeUnlockedRegion(v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v25);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v25);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v26);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v26);
  if ( !v25[0] )
    goto LABEL_48;
  if ( !v26[0] )
    goto LABEL_48;
  v15 = v1 + 20;
  RGNOBJ::vSet((RGNOBJ *)v25, (struct _RECTL *)(v1 + 20));
  v28 = v27;
  if ( !RGNOBJ::bMerge((RGNOBJ *)v26, (struct RGNOBJ *)v25, (struct RGNOBJ *)&v28, 4u) )
    goto LABEL_48;
  v37 = 0;
  v38 = 0;
  v40 = 0;
  v36 = 0;
  v39 = 1;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v33, v26[0], (struct ERECTL *)(v1 + 20), 1);
  memset(v32, 0, 0x144u);
  switch ( v35 )
  {
    case 0:
LABEL_38:
      v32[0] = 1;
      v16 = 0;
      v29 = 0;
      v32[1] = *(_DWORD *)v15;
      v17 = v15 + 4;
      v32[2] = *v17++;
      v32[3] = *v17;
      v32[4] = v17[1];
      goto LABEL_39;
    case 1:
      v15 = &v34;
      goto LABEL_38;
    case 3:
      v29 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v33, 0, 0, 4u, 0x14u);
      v16 = 1;
LABEL_39:
      if ( !v16 )
        goto LABEL_41;
      do
      {
        v16 = XCLIPOBJ::bEnum((XCLIPOBJ *)v33, 0x144u, v32, 0);
        v29 = v16;
LABEL_41:
        v18 = 0;
        if ( v32[0] )
        {
          v19 = (struct _RECTL *)&v32[1];
          do
          {
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v57, (struct _SPRITESTATE *)v1, v19);
            if ( v57[0] )
              vSpRedrawArea(0, v21, v22);
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v57);
            ++v18;
            ++v19;
          }
          while ( v18 < v32[0] );
          v16 = v29;
        }
      }
      while ( v16 );
      break;
  }
LABEL_48:
  if ( v27 )
    REGION::vDeleteREGION((REGION *)v27);
  *((_DWORD *)v1 + 163) = 0;
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v26);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v26);
  if ( v26[1] == (struct REGION *)1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v26);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v25);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v25);
  if ( v25[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v25);
LABEL_2:
  EtwTraceGreLockReleaseSemaphore(L"hsem", *((_DWORD *)v1 + 22));
  GreReleaseSemaphoreInternal(*((_DWORD *)v1 + 22));
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v23);
}
