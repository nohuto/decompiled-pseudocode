/*
 * XREFs of ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00856F8
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004533C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00856A4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00D36FC (GreDeleteSpriteOverlapPresent.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027E5AC (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00857AC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C009EEA8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     UserGetClientRgn @ 0x1C01E82F8 (UserGetClientRgn.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C02760DC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

void __fastcall vSpComputeNoPresentRegion(struct _SPRITESTATE *a1, int a2)
{
  __int64 v2; // rbx
  REGION *v4; // rcx
  _QWORD *v6; // rsi
  REGION *v7; // rcx
  HRGN ClientRgn; // rax
  int v9; // eax
  struct RGNOBJ *v10; // r8
  __int64 v11; // rdx
  struct _POINTL v12; // [rsp+28h] [rbp-59h] BYREF
  __int64 v13; // [rsp+30h] [rbp-51h] BYREF
  int v14; // [rsp+38h] [rbp-49h]
  __int64 v15; // [rsp+40h] [rbp-41h] BYREF
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+78h] [rbp-9h] BYREF
  struct _RECTL v20; // [rsp+98h] [rbp+17h] BYREF
  struct _RECTL v21; // [rsp+A8h] [rbp+27h] BYREF

  v2 = *(_QWORD *)a1;
  v4 = (REGION *)*((_QWORD *)a1 + 131);
  v16 = v2;
  v20 = 0LL;
  if ( v4 )
  {
    REGION::vDeleteREGION(v4);
    *((_QWORD *)a1 + 131) = 0LL;
  }
  if ( !a2 )
  {
    v7 = (REGION *)*((_QWORD *)a1 + 130);
    if ( v7 )
    {
      REGION::vDeleteREGION(v7);
      *((_QWORD *)a1 + 130) = 0LL;
    }
  }
  v6 = (_QWORD *)*((_QWORD *)a1 + 10);
  if ( v6 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, 0, 1);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19, 0, 1);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
    if ( v13 && v19[0] )
    {
      *(_QWORD *)&v20.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v16);
      RGNOBJ::vSet((RGNOBJ *)&v13, &v20);
      RGNOBJ::vSet((RGNOBJ *)v19, &v20);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
      if ( v17[0] )
      {
        do
        {
          v21 = 0LL;
          ClientRgn = (HRGN)UserGetClientRgn(*v6, &v21, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, ClientRgn, 0);
          if ( v18[0] )
          {
            v12.x = -*(_DWORD *)(v2 + 2584);
            v12.y = -*(_DWORD *)(v2 + 2588);
            RGNOBJ::bOffset((RGNOBJ *)v18, &v12);
            v15 = *((_QWORD *)a1 + 88);
            RGNOBJ::vSet((RGNOBJ *)&v15, &v21);
            v12.x = -*(_DWORD *)(v2 + 2584);
            v12.y = -*(_DWORD *)(v2 + 2588);
            RGNOBJ::bOffset((RGNOBJ *)v18, &v12);
            RGNOBJ::bOffset((RGNOBJ *)&v15, &v12);
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v18);
            v10 = (struct RGNOBJ *)&v15;
            if ( v9 != 1 )
              v10 = (struct RGNOBJ *)v18;
            if ( RGNOBJ::bMerge((RGNOBJ *)v17, (struct RGNOBJ *)&v13, v10, 4u) )
              RGNOBJ::vSwap((RGNOBJ *)v17, (struct RGNOBJ *)&v13);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v18);
          }
          v6 = (_QWORD *)v6[1];
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
        }
        while ( v6 );
      }
      v11 = v13;
      *(_DWORD *)(v11 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
      if ( a2 )
        *((_QWORD *)a1 + 131) = v13;
      else
        *((_QWORD *)a1 + 130) = v13;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
    }
    else
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
    if ( v14 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  }
  if ( !a2 )
    vSpComputeUnlockedRegion(a1);
}
