/*
 * XREFs of _EngCreateWnd@20 @ 0x1E6AA4
 * Callers:
 *     _VerifierEngCreateWnd@20 @ 0x1FC9DB (_VerifierEngCreateWnd@20.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ??1RGNMEMOBJ@@QAE@XZ @ 0x9E99E (--1RGNMEMOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _UserAssociateHwnd@8 @ 0x154249 (_UserAssociateHwnd@8.c)
 *     ??1SEMOBJ@@QAE@XZ @ 0x1CCD37 (--1SEMOBJ@@QAE@XZ.c)
 *     ??1WO_CLEANUP@@QAE@XZ @ 0x1E6460 (--1WO_CLEANUP@@QAE@XZ.c)
 *     ?vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z @ 0x1E68E5 (-vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z.c)
 */

WNDOBJ *__stdcall EngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  int v5; // ebx
  LONG *v6; // edi
  struct TRACKOBJ *v7; // eax
  int i; // ecx
  struct TRACKOBJ *v9; // esi
  struct TRACKOBJ *v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  struct REGION **v14; // ecx
  struct REGION *v15; // edx
  _DWORD *v16; // eax
  _DWORD *v17; // edi
  int Semaphore; // eax
  struct REGION *v19; // edx
  LONG *v20; // edx
  int v21; // ecx
  LONG v22; // eax
  struct TRACKOBJ *v24; // [esp+24h] [ebp-74h]
  LONG *v25; // [esp+28h] [ebp-70h]
  _DWORD *v26; // [esp+2Ch] [ebp-6Ch]
  _DWORD *v27; // [esp+2Ch] [ebp-6Ch]
  struct REGION *v28[2]; // [esp+30h] [ebp-68h] BYREF
  struct REGION *v29[2]; // [esp+38h] [ebp-60h] BYREF
  _DWORD v30[2]; // [esp+40h] [ebp-58h] BYREF
  int v31; // [esp+48h] [ebp-50h] BYREF
  struct TRACKOBJ *v32; // [esp+4Ch] [ebp-4Ch]
  _DWORD *v33; // [esp+50h] [ebp-48h]
  _DWORD *v34; // [esp+54h] [ebp-44h]
  struct REGION *v35; // [esp+58h] [ebp-40h]
  struct REGION *v36; // [esp+5Ch] [ebp-3Ch]
  int v37; // [esp+60h] [ebp-38h]
  int v38; // [esp+64h] [ebp-34h]
  HWND v39; // [esp+68h] [ebp-30h]
  LONG v40; // [esp+6Ch] [ebp-2Ch] BYREF
  int v41; // [esp+70h] [ebp-28h] BYREF
  struct _RECTL v42; // [esp+74h] [ebp-24h] BYREF
  struct _RECTL v43; // [esp+84h] [ebp-14h] BYREF

  v5 = 0;
  v39 = hwnd;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v6 = pso != 0 ? &pso[-1].lDelta : 0;
  v37 = 0;
  v38 = 0;
  v25 = v6;
  if ( UserIsUserCritSecIn() && (fl & 0xF7FFFC00) == 0 )
  {
    v41 = _ghsemWndobj;
    GreAcquireSemaphore(_ghsemWndobj);
    v7 = gpto;
LABEL_9:
    if ( v7 )
    {
      for ( i = *((_DWORD *)v7 + 3); ; i = *(_DWORD *)(i + 128) )
      {
        if ( !i )
        {
          v7 = (struct TRACKOBJ *)*((_DWORD *)v7 + 1);
          goto LABEL_9;
        }
        if ( *(HWND *)(i + 136) == hwnd )
          break;
      }
      if ( *((WNDOBJCHANGEPROC *)v7 + 5) == pfn && *(_DWORD *)(i + 144) == iPixelFormat )
        v5 = -1;
      goto LABEL_34;
    }
    v9 = gpto;
    if ( !gpto )
      goto LABEL_15;
    do
    {
      if ( *((LONG **)v9 + 4) == v6 && *((WNDOBJCHANGEPROC *)v9 + 5) == pfn )
        break;
      v9 = (struct TRACKOBJ *)*((_DWORD *)v9 + 1);
    }
    while ( v9 );
    v24 = v9;
    if ( !v9 )
    {
LABEL_15:
      v10 = (struct TRACKOBJ *)PALLOCMEM2(0x2Cu, 1684961095, 1);
      v9 = v10;
      v24 = v10;
      if ( !v10 )
        goto LABEL_34;
      *((_DWORD *)v10 + 5) = pfn;
      *(_DWORD *)v10 = 1128354388;
      *((_DWORD *)v10 + 2) = 0;
      *((_DWORD *)v10 + 3) = 0;
      *((_DWORD *)v10 + 4) = v6;
      *((_DWORD *)v10 + 6) = fl;
      *((_DWORD *)v10 + 7) = 0;
      *((_DWORD *)v10 + 8) = 0;
      *((_DWORD *)v10 + 9) = (pso != 0 ? &pso->sizlBitmap : (SIZEL *)32)->cx;
      v11 = *(pso != 0 ? &pso->sizlBitmap.cy : (LONG *)36);
      v32 = v9;
      *((_DWORD *)v9 + 10) = v11;
      if ( (fl & 0xC) == 0 )
        goto LABEL_20;
      v12 = PALLOCMEM2(0x9Cu, 1684961095, 1);
      v13 = v12;
      v26 = v12;
      if ( !v12 )
      {
LABEL_34:
        SEMOBJ::~SEMOBJ((SEMOBJ *)&v41);
        goto LABEL_35;
      }
      v33 = v12;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v28, 0, 1);
      v14 = v28;
      if ( !v28[0] )
      {
LABEL_33:
        RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v14);
        goto LABEL_34;
      }
      v35 = v28[0];
      RGNOBJ::vSet((RGNOBJ *)v28, (struct _RECTL *)((char *)v9 + 28));
      v13[33] = v9;
      v15 = v28[0];
      *((_DWORD *)v15 + 5) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
      EWNDOBJ::vSetClip(
        (int)v26,
        v28[0],
        *((_DWORD *)v9 + 7),
        *((_DWORD *)v9 + 8),
        *((_DWORD *)v9 + 9),
        *((_DWORD *)v9 + 10));
      v9 = v24;
      v26[6] = 0;
      v26[31] = 1145984837;
      v26[32] = 0;
      v26[34] = 0;
      v26[11] = v25 != 0 ? v25 + 4 : 0;
      v26[35] = fl | 0x20000000;
      v26[36] = 0;
      *((_DWORD *)v24 + 2) = v26;
      RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v28);
    }
LABEL_20:
    if ( (*((_DWORD *)v9 + 6) & 0x87FFFFF) != fl )
      goto LABEL_34;
    v16 = PALLOCMEM2(0x9Cu, 1684961095, 1);
    v17 = v16;
    v27 = v16;
    if ( !v16 )
      goto LABEL_34;
    v34 = v16;
    memset(&v42, 0, sizeof(v42));
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v29, 0, 1);
    if ( !v29[0] )
      goto LABEL_32;
    v36 = v29[0];
    RGNOBJ::vSet((RGNOBJ *)v29, &v42);
    memset(&v43, 0, sizeof(v43));
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v30, 0, 1);
    if ( v30[0] )
    {
      v37 = v30[0];
      RGNOBJ::vSet((RGNOBJ *)v30, &v43);
      Semaphore = GreCreateSemaphore();
      v17[38] = Semaphore;
      if ( Semaphore )
      {
        v17[33] = v9;
        v19 = v29[0];
        v38 = Semaphore;
        *((_DWORD *)v19 + 5) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
        EWNDOBJ::vSetClip((int)v27, v29[0], v42.left, v42.top, v42.right, v42.bottom);
        v20 = pso != 0 ? &pso[-1].lDelta : 0;
        v27[37] = v30[0];
        v27[6] = 0;
        v27[31] = 1145984837;
        v27[11] = v25 != 0 ? v25 + 4 : 0;
        v21 = (int)v39;
        v27[35] = fl | 0x10000000;
        v27[34] = v21;
        v27[36] = iPixelFormat;
        if ( !v21 )
        {
          *(pso != 0 ? &pso[1].cjBits : (ULONG *)92) = (ULONG)v27;
          goto LABEL_28;
        }
        if ( UserAssociateHwnd(v21, (int)v27) )
        {
          v20 = pso != 0 ? &pso[-1].lDelta : 0;
LABEL_28:
          v27[32] = *((_DWORD *)v24 + 3);
          *((_DWORD *)v24 + 3) = v27;
          if ( v32 )
          {
            *((_DWORD *)v24 + 1) = gpto;
            gpto = v24;
          }
          *((_DWORD *)v24 + 6) |= 0x40000000u;
          v27[35] |= 0x40000000u;
          v22 = v20[7];
          gbWndobjUpdate = 1;
          v40 = v22;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v40);
          v31 = 1;
          v5 = (int)v27;
        }
      }
    }
    RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v30);
LABEL_32:
    v14 = v29;
    goto LABEL_33;
  }
LABEL_35:
  WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v31);
  return (WNDOBJ *)v5;
}
