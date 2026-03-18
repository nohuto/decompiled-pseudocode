/*
 * XREFs of ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040
 * Callers:
 *     _NtGdiPolyPatBlt@20 @ 0x56AE8 (_NtGdiPolyPatBlt@20.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 * Callees:
 *     ?GrePatBltLockedDC@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVERECTL@@KPAVSURFACE@@KKKK@Z @ 0x57330 (-GrePatBltLockedDC@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVERECTL@@KPAVSURFACE@@KKKK@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _bCvtPts1@12 @ 0xEE344 (_bCvtPts1@12.c)
 *     ?bTightBoundsToRegion@DEVLOCKOBJ@@QAEHXZ @ 0xF5D67 (-bTightBoundsToRegion@DEVLOCKOBJ@@QAEHXZ.c)
 *     ??0DEVLOCKOBJ@@QAE@XZ @ 0xF6A67 (--0DEVLOCKOBJ@@QAE@XZ.c)
 */

BOOL __userpurge GrePolyPatBltInternal@<eax>(
        unsigned int a1@<edx>,
        struct XDCOBJ *a2@<ecx>,
        struct XDCOBJ *a3,
        unsigned int a4,
        struct _POLYPATBLT *a5,
        unsigned int a6,
        struct SURFACE *a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11)
{
  struct XDCOBJ *v11; // edi
  struct XDCOBJ *v12; // ebx
  unsigned int v13; // esi
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  DEVLOCKOBJ *v18; // ecx
  int v19; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int locked; // eax
  int v31; // eax
  int v34; // eax
  unsigned int v35; // [esp+0h] [ebp-C4h]
  unsigned int v36; // [esp+4h] [ebp-C0h]
  _BYTE v37[48]; // [esp+10h] [ebp-B4h] BYREF
  int v38; // [esp+40h] [ebp-84h]
  int v39; // [esp+44h] [ebp-80h]
  int v40; // [esp+48h] [ebp-7Ch]
  int v41; // [esp+4Ch] [ebp-78h]
  int v42; // [esp+50h] [ebp-74h]
  struct XDCOBJ *v43; // [esp+54h] [ebp-70h]
  int v44; // [esp+58h] [ebp-6Ch]
  int v45; // [esp+5Ch] [ebp-68h]
  struct ERECTL *v46; // [esp+60h] [ebp-64h]
  struct XDCOBJ *v47; // [esp+64h] [ebp-60h]
  _DWORD v48[2]; // [esp+68h] [ebp-5Ch] BYREF
  int v49; // [esp+70h] [ebp-54h]
  int v50; // [esp+74h] [ebp-50h]
  int v51; // [esp+78h] [ebp-4Ch]
  int v52; // [esp+7Ch] [ebp-48h]
  int v53; // [esp+80h] [ebp-44h]
  struct EXFORMOBJ *v54; // [esp+84h] [ebp-40h]
  int v55; // [esp+88h] [ebp-3Ch]
  int v56; // [esp+8Ch] [ebp-38h]
  int v57; // [esp+90h] [ebp-34h]
  int v58; // [esp+94h] [ebp-30h] BYREF
  int v59; // [esp+98h] [ebp-2Ch]
  int v60; // [esp+9Ch] [ebp-28h]
  int v61; // [esp+A0h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+ACh] [ebp-18h]

  v11 = a2;
  v47 = a2;
  v43 = a2;
  v12 = a3;
  v57 = 1;
  v13 = a4;
  if ( !a4 || !a3 || a5 )
    return a4 == 0;
  v14 = HIWORD(a1);
  v54 = (struct EXFORMOBJ *)(((unsigned __int8)v14 << 8) | (unsigned __int8)v14);
  if ( (((unsigned __int8)v14 ^ (unsigned __int8)(4 * v14)) & 0xCC) != 0 )
    return 0;
  v15 = *(_DWORD *)a2;
  if ( !*(_DWORD *)v11 )
    return 0;
  v16 = *(_DWORD *)(v15 + 1020);
  v17 = *(_DWORD *)(v16 + 188);
  v50 = v17;
  v44 = v17;
  if ( (*(_DWORD *)(v16 + 184) & 0x1000) != 0 )
    GreDCSelectBrush(v15, v17);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v37);
  if ( DEVLOCKOBJ::bLock(v18, v11, 0) )
  {
    v19 = *(_DWORD *)v11;
    v48[1] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v11 + 1020) + 228);
    v49 = *(_DWORD *)(*(_DWORD *)(v19 + 1020) + 148) & 1;
    if ( (*(_DWORD *)(*(_DWORD *)(v19 + 1020) + 340) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)v48, v11, 0x204u, 0);
      v19 = *(_DWORD *)v11;
    }
    else
    {
      v48[0] = v19 + 240;
    }
    v46 = *(struct ERECTL **)(v19 + 504);
    while ( 1 )
    {
      if ( !v13-- )
        goto LABEL_37;
      v51 = 0;
      ms_exc.registration.TryLevel = 0;
      v21 = *(_DWORD *)v12;
      v55 = v21;
      v42 = v21;
      v22 = *((_DWORD *)v12 + 1);
      v56 = v22;
      v41 = v22;
      v52 = *((_DWORD *)v12 + 2);
      v40 = v52;
      v53 = *((_DWORD *)v12 + 3);
      v39 = v53;
      v23 = *((_DWORD *)v12 + 4);
      v45 = v23;
      v38 = v23;
      ms_exc.registration.TryLevel = -2;
      if ( v23 )
      {
        v51 = GreDCSelectBrush(*(_DWORD *)v11, v23);
        v21 = v55;
        v22 = v56;
      }
      v24 = *(_DWORD *)(v48[0] + 56);
      if ( (v24 & 1) == 0 )
        break;
      v58 = v21;
      v59 = v22;
      v60 = v21 + v52;
      v25 = v56;
      v61 = v56 + v53;
      v11 = v47;
      v26 = v55;
      if ( (v24 & 0x43) != 0x43 )
      {
        bCvtPts1(v48[0], &v58, 2);
        v25 = v59;
        v26 = v58;
      }
      v27 = v60;
      if ( v49 )
      {
        v58 = ++v26;
        v27 = ++v60;
      }
      if ( v26 > v27 )
      {
        v27 = v26;
        v26 = v60;
        v58 = v60;
        v60 = v27;
      }
      if ( v25 > v61 )
      {
        v34 = v25;
        v25 = v61;
        v59 = v61;
        v61 = v34;
        v27 = v60;
      }
      if ( v26 != v27 && v25 != v61 )
      {
        v28 = *(_DWORD *)v11;
        v29 = *(_DWORD *)(*(_DWORD *)v11 + 24);
        if ( (v29 & 0xE0) != 0 )
        {
          if ( (v29 & 0x20) != 0 )
          {
            ERECTL::operator|=(&v58);
            v28 = *(_DWORD *)v11;
          }
          if ( *(char *)(v28 + 24) < 0 )
            ERECTL::operator|=(&v58);
        }
        if ( v46 )
        {
          locked = GrePatBltLockedDC((struct XDCOBJ *)&v58, v54, v46, a6, a7, a8, a9, v35, v36);
LABEL_33:
          v57 = locked;
        }
      }
      if ( v45 )
        GreDCSelectBrush(*(_DWORD *)v11, v51);
      DEVLOCKOBJ::bTightBoundsToRegion((DEVLOCKOBJ *)v37);
      v12 = (struct XDCOBJ *)((char *)v12 + 20);
    }
    locked = GreMaskBlt(**(HDC **)v11, v56, v52, v53, 0, 0, 0, 0, 0, 0, (_DWORD)v54 << 16, 0);
    goto LABEL_33;
  }
  v57 = XDCOBJ::bFullScreen(v11);
LABEL_37:
  v31 = *(_DWORD *)(*(_DWORD *)v11 + 1020);
  if ( *(_DWORD *)(v31 + 188) != v50 )
  {
    *(_DWORD *)(v31 + 188) = v50;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v11 + 1020) + 184) |= 0x1000u;
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v37);
  return v57;
}
