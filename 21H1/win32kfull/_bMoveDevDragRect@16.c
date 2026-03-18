/*
 * XREFs of _bMoveDevDragRect@16 @ 0x1E3757
 * Callers:
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?cIntersect@@YGKPBU_RECTL@@PAU1@J@Z @ 0x1DEEE7 (-cIntersect@@YGKPBU_RECTL@@PAU1@J@Z.c)
 */

int __fastcall bMoveDevDragRect(HDEV a1, _DWORD *a2, int *a3, struct tagRECT *a4)
{
  int v5; // ecx
  int v6; // edi
  const struct _RECTL *v7; // ecx
  int v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  HDEV *v13; // ecx
  bool v14; // zf
  int v15; // esi
  int v16; // ebx
  HDEV *v17; // esi
  struct _RECTL *v19; // [esp+0h] [ebp-C8h]
  int v20; // [esp+0h] [ebp-C8h]
  int v21; // [esp+4h] [ebp-C4h]
  int v22; // [esp+4h] [ebp-C4h]
  int v23; // [esp+Ch] [ebp-BCh]
  HDEV v24; // [esp+Ch] [ebp-BCh]
  HDEV v25; // [esp+10h] [ebp-B8h]
  HDEV v26; // [esp+10h] [ebp-B8h]
  HDEV v27; // [esp+14h] [ebp-B4h]
  int v29; // [esp+18h] [ebp-B0h]
  HDEV v31; // [esp+20h] [ebp-A8h] BYREF
  int v32; // [esp+24h] [ebp-A4h]
  struct HDC__ v33; // [esp+28h] [ebp-A0h] BYREF
  int v34; // [esp+2Ch] [ebp-9Ch]
  HDEV Parameter; // [esp+30h] [ebp-98h] BYREF
  int v36; // [esp+34h] [ebp-94h]
  HDEV v37; // [esp+38h] [ebp-90h]
  int v38; // [esp+3Ch] [ebp-8Ch]
  _DWORD *v39; // [esp+40h] [ebp-88h]
  struct HDC__ *v40; // [esp+44h] [ebp-84h]
  int v41; // [esp+48h] [ebp-80h]
  int v42; // [esp+4Ch] [ebp-7Ch]
  int v43; // [esp+50h] [ebp-78h]
  int v44; // [esp+54h] [ebp-74h]
  int v45; // [esp+58h] [ebp-70h]
  int v46; // [esp+5Ch] [ebp-6Ch]
  int v47; // [esp+60h] [ebp-68h]
  struct tagRECT *v48; // [esp+64h] [ebp-64h]
  int v49; // [esp+68h] [ebp-60h]
  int v50; // [esp+6Ch] [ebp-5Ch]
  unsigned int v51; // [esp+70h] [ebp-58h]
  int v52; // [esp+74h] [ebp-54h]
  char v53[4]; // [esp+78h] [ebp-50h] BYREF
  int v54; // [esp+7Ch] [ebp-4Ch] BYREF
  _DWORD v55[17]; // [esp+80h] [ebp-48h] BYREF

  v33.unused = 0;
  v34 = 0;
  v31 = a1;
  v32 = _ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
  v54 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v53, (struct PDEVOBJ *)&v31);
  v25 = v31;
  v5 = *((_DWORD *)v31 + 199);
  v55[0] = *a2;
  v23 = v5;
  v6 = v55[0] + v5;
  v7 = (const struct _RECTL *)a2[1];
  v8 = a2[3];
  v55[1] = v7;
  v9 = a2[2] - v23;
  v55[6] = a2[2];
  v55[4] = v9;
  v55[11] = (char *)v7 + v23;
  v55[5] = v7;
  v55[10] = v9;
  v55[9] = v7;
  v55[14] = v9;
  v55[2] = v6;
  v55[3] = v8;
  v55[7] = v8;
  v55[8] = v6;
  v55[12] = v6;
  v55[13] = v8 - v23;
  v55[15] = v8;
  v10 = cIntersect((int)v55, a3, v7, v19, v21);
  v11 = 0;
  v51 = v10;
  if ( !v10 )
  {
LABEL_11:
    v16 = 4 - v11;
    v17 = (HDEV *)(v25 + v11 + 194);
    do
    {
      v26 = *v17;
      if ( *v17 )
      {
        if ( GreStackExpansionRequired(0x2000) )
        {
          Parameter = a1;
          v37 = v26;
          v48 = a4;
          v36 = 0;
          v38 = 0;
          v39 = 0;
          v40 = 0;
          v41 = 0;
          v42 = 0;
          v43 = 0;
          v44 = 0;
          v45 = 0;
          v46 = 0;
          v47 = a4 != 0 ? 0x2000000 : 0;
          v49 = 0;
          v50 = 0;
          KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000u, 1u, 0);
        }
        else
        {
          GreUpdateSpriteInternal(0, a1, v26, 0, 0, 0, 0, 0, 0, 0, a4 != 0 ? 0x2000000 : 0, 0, 0, a4, 0, v20, v22);
        }
      }
      ++v17;
      --v16;
    }
    while ( v16 );
    v15 = v32;
    goto LABEL_18;
  }
  v12 = v55;
  v13 = (HDEV *)(v25 + 194);
  v24 = v25 + 194;
  v29 = v10;
  v52 = v10;
  do
  {
    v33.unused = v12[2] - *v12;
    v34 = v12[3] - v12[1];
    v27 = *v13;
    if ( *v13 )
    {
      if ( GreStackExpansionRequired(0x2000) )
      {
        v37 = v27;
        v40 = &v33;
        Parameter = a1;
        v36 = 0;
        v38 = 0;
        v39 = v12;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        v47 = 0x2000000;
        v48 = a4;
        v49 = 0;
        v50 = 0;
        KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000u, 1u, 0);
      }
      else
      {
        GreUpdateSpriteInternal(0, a1, v27, 0, v12, &v33, 0, 0, 0, 0, 0x2000000u, 0, 0, a4, 0, v20, v22);
      }
      v13 = (HDEV *)v24;
    }
    ++v13;
    v12 += 4;
    v14 = v29-- == 1;
    v24 = (HDEV)v13;
  }
  while ( !v14 );
  v15 = v32;
  if ( v51 < 4 )
  {
    v11 = v52;
    goto LABEL_11;
  }
LABEL_18:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v53);
  SEMOBJ::vUnlock((SEMOBJ *)&v54);
  EtwTraceGreLockReleaseSemaphore(L"hsem", v15);
  GreReleaseSemaphoreInternal(v15);
  return 1;
}
