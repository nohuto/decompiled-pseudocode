/*
 * XREFs of ?GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z @ 0x5FE10
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z @ 0xABB00 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QAEXXZ @ 0xADB6A (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QAEXXZ.c)
 * Callees:
 *     ?GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z @ 0x12266 (-GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall GreUpdateSpriteDevLockEnd(struct tagPOINT ***a1, struct tagMINIWINDOWINFO *a2)
{
  int updated; // ebx
  _DWORD (__thiscall *v4)(PDEVOBJ *__hidden); // edi
  struct tagPOINT **v5; // ecx
  int v6; // edx
  struct REGION *v7; // eax
  struct tagPOINT *v8; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int *v13; // eax
  struct _BLENDFUNCTION v14; // ecx
  struct tagPOINT *v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // [esp+0h] [ebp-260h]
  int v21; // [esp+4h] [ebp-25Ch]
  int HDEV; // [esp+10h] [ebp-250h]
  struct _BLENDFUNCTION v23; // [esp+10h] [ebp-250h]
  struct tagPOINT *v24; // [esp+14h] [ebp-24Ch]
  struct tagPOINT *v25; // [esp+14h] [ebp-24Ch]
  _DWORD *v26; // [esp+14h] [ebp-24Ch]
  int v27; // [esp+18h] [ebp-248h]
  struct tagPOINT *v28; // [esp+18h] [ebp-248h]
  struct tagPOINT *v29; // [esp+1Ch] [ebp-244h]
  struct tagPOINT *v30; // [esp+1Ch] [ebp-244h]
  int v31; // [esp+20h] [ebp-240h]
  struct HDC__ v33; // [esp+28h] [ebp-238h] BYREF
  struct tagPOINT *v34; // [esp+2Ch] [ebp-234h]
  struct REGION *v35; // [esp+30h] [ebp-230h] BYREF
  struct _BLENDFUNCTION *v36; // [esp+34h] [ebp-22Ch]
  unsigned int v37; // [esp+38h] [ebp-228h]
  int v38; // [esp+3Ch] [ebp-224h] BYREF
  int Parameter; // [esp+40h] [ebp-220h] BYREF
  struct tagPOINT *v40; // [esp+44h] [ebp-21Ch]
  int v41; // [esp+48h] [ebp-218h]
  int v42; // [esp+4Ch] [ebp-214h]
  int v43; // [esp+50h] [ebp-210h]
  struct HDC__ *v44; // [esp+54h] [ebp-20Ch]
  struct tagPOINT *v45; // [esp+58h] [ebp-208h]
  POINTL *v46; // [esp+5Ch] [ebp-204h]
  int v47; // [esp+60h] [ebp-200h]
  struct _BLENDFUNCTION *v48; // [esp+64h] [ebp-1FCh]
  int v49; // [esp+68h] [ebp-1F8h]
  int v50; // [esp+6Ch] [ebp-1F4h]
  int v51; // [esp+70h] [ebp-1F0h]
  int v52; // [esp+74h] [ebp-1ECh]
  struct tagMINIWINDOWINFO *v53; // [esp+78h] [ebp-1E8h]
  int v54; // [esp+7Ch] [ebp-1E4h]
  struct _BLENDFUNCTION v55; // [esp+80h] [ebp-1E0h] BYREF
  int v56; // [esp+84h] [ebp-1DCh]
  int v57; // [esp+88h] [ebp-1D8h]
  int v58; // [esp+8Ch] [ebp-1D4h]
  _DWORD v59[5]; // [esp+90h] [ebp-1D0h] BYREF
  char v60; // [esp+A4h] [ebp-1BCh]
  int v61; // [esp+C0h] [ebp-1A0h]
  int v62; // [esp+D4h] [ebp-18Ch]
  int v63; // [esp+D8h] [ebp-188h]
  int v64; // [esp+100h] [ebp-160h]
  int v65; // [esp+108h] [ebp-158h]
  _DWORD v66[83]; // [esp+110h] [ebp-150h] BYREF

  updated = 0;
  v4 = PDEVOBJ::bAllowShareAccess;
  HDEV = UserGetHDEV();
  v38 = HDEV;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v38) )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", _ghsemSprite);
  }
  if ( g_pDwmState )
  {
    if ( !GreGetBounds(**a1, &v55, 4) )
      goto LABEL_8;
    v5 = *a1;
    v6 = (int)(*a1)[128];
    v33.unused = v6;
    v24 = v5[129];
    v34 = v24;
    v7 = (struct REGION *)v5[293];
    v35 = v7;
    if ( !v7 )
    {
      ((void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))EtwDevLockEndUpdate)(
        v5[122],
        v6,
        v24,
        v55,
        v56,
        v57,
        v58);
      v8 = **a1;
      v25 = (*a1)[122];
      if ( GreStackExpansionRequired(0x2000) )
      {
        Parameter = HDEV;
        v44 = &v33;
        v48 = &v55;
        v53 = a2;
        v40 = v25;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v45 = v8;
        v46 = &gptlZero;
        v47 = 0;
        v49 = 0;
        v50 = 0;
        v51 = 1075838976;
        v52 = 1;
        v54 = 0;
        if ( KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000u, 1u, 0) < 0 )
          updated = 0;
        else
          updated = v54;
      }
      else
      {
        updated = GreUpdateSpriteInternal(
                    0,
                    0,
                    0,
                    &v33,
                    v8,
                    (struct tagSIZE *)&gptlZero,
                    0,
                    0,
                    0x40200000u,
                    &v55,
                    0,
                    (struct tagRECT *)1,
                    a2,
                    v20,
                    v21);
      }
      goto LABEL_8;
    }
    if ( *((_DWORD *)v7 + 14) == 1 )
      goto LABEL_8;
    if ( ((_BYTE)v5[7] & 1) != 0 )
      v10 = 264;
    else
      v10 = 262;
    RGNOBJ::bOffset((RGNOBJ *)&v35, (struct _POINTL *)&v5[v10]);
    v62 = 0;
    v63 = 0;
    v64 = 1;
    v65 = 0;
    v61 = 0;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v59, v35, (struct ERECTL *)&v55, 1);
    memset(v66, 0, 0x144u);
    if ( v60 == 3 )
    {
      v31 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v59, 0, 0, 4u, 0x14u);
      v11 = 1;
    }
    else if ( v60 )
    {
      if ( v60 != 1 )
      {
LABEL_8:
        REGION::vDeleteREGION((REGION *)(*a1)[293]);
        (*a1)[293] = 0;
        goto LABEL_9;
      }
      v11 = 0;
      v66[1] = v59[1];
      v66[2] = v59[2];
      v66[3] = v59[3];
      v31 = 0;
      v66[0] = 1;
      v66[4] = v59[4];
    }
    else
    {
      v11 = 0;
      v66[1] = v55;
      v66[2] = v56;
      v66[3] = v57;
      v31 = 0;
      v66[0] = 1;
      v66[4] = v58;
    }
    v12 = HDEV;
    updated = 1;
    if ( v11 )
      goto LABEL_18;
LABEL_19:
    v37 = 0;
    if ( !v66[0] )
      goto LABEL_34;
    v13 = &v66[3];
    v26 = &v66[3];
    while ( 1 )
    {
      v23 = (struct _BLENDFUNCTION)*(v13 - 2);
      v14 = v55;
      v36 = (struct _BLENDFUNCTION *)(v13 - 2);
      if ( *(_DWORD *)&v23 < *(_DWORD *)&v55 )
      {
        *(v13 - 2) = (int)v55;
        v23 = v14;
      }
      v15 = (struct tagPOINT *)v56;
      v29 = (struct tagPOINT *)*(v13 - 1);
      if ( (int)v29 < v56 )
      {
        *(v13 - 1) = v56;
        v29 = v15;
      }
      v16 = v57;
      v27 = *v13;
      if ( *v13 > v57 )
      {
        *v13 = v57;
        v27 = v16;
      }
      v17 = v13[1];
      v18 = v58;
      if ( v17 > v58 )
      {
        v13[1] = v58;
        v17 = v18;
      }
      ((void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))EtwDevLockEndTightUpdate)(
        (*a1)[122],
        v33.unused,
        v34,
        v23,
        v29,
        v27,
        v17);
      v30 = **a1;
      v28 = (*a1)[122];
      if ( GreStackExpansionRequired(0x2000) )
      {
        Parameter = v12;
        v44 = &v33;
        v45 = v30;
        v48 = v36;
        v53 = a2;
        v40 = v28;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v46 = &gptlZero;
        v47 = 0;
        v49 = 0;
        v50 = 0;
        v51 = 1075838976;
        v52 = 1;
        v54 = 0;
        if ( KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000u, 1u, 0) < 0 )
        {
LABEL_47:
          updated = 0;
          goto LABEL_32;
        }
        v19 = v54;
      }
      else
      {
        v19 = GreUpdateSpriteInternal(
                0,
                0,
                0,
                &v33,
                v30,
                (struct tagSIZE *)&gptlZero,
                0,
                0,
                0x40200000u,
                v36,
                0,
                (struct tagRECT *)1,
                a2,
                v20,
                v21);
      }
      if ( !v19 )
        goto LABEL_47;
LABEL_32:
      v13 = v26 + 4;
      ++v37;
      v26 += 4;
      if ( v37 >= v66[0] )
      {
        v11 = v31;
LABEL_34:
        if ( !v11 )
        {
          v4 = PDEVOBJ::bAllowShareAccess;
          goto LABEL_8;
        }
LABEL_18:
        v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v59, 0x144u, v66, 0);
        v31 = v11;
        goto LABEL_19;
      }
    }
  }
  GdiUpdateSpriteDevLockEnd(a1);
LABEL_9:
  if ( v4((PDEVOBJ *)&v38) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
    GreReleaseSemaphoreInternal(_ghsemSprite);
  }
  return updated;
}
