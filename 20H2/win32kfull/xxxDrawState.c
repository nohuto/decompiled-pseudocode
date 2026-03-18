/*
 * XREFs of xxxDrawState @ 0x1C02507A4
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C0037B68 (GrePolyPatBlt.c)
 *     GreGetLayout @ 0x1C00417CC (GreGetLayout.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     GreSetViewportOrg @ 0x1C0104B50 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 *     GreGetTextColor @ 0x1C014CF8C (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C025065C (BltColor.c)
 *     GreGetHFONT @ 0x1C029ED64 (GreGetHFONT.c)
 *     GreGetTextCharacterExtra @ 0x1C02BB148 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BB194 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawState(
        HDC a1,
        __int64 a2,
        __int64 *a3,
        LONG a4,
        LONG a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v9; // ecx
  int v11; // edi
  int v12; // r15d
  int v13; // esi
  int v14; // ebx
  HDC v15; // r14
  unsigned int Layout; // eax
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  int v31; // ebx
  __int64 v32; // r9
  HBRUSH v33; // rbx
  BOOL v34; // ebx
  HDC v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  LONG v38; // r9d
  int v39; // eax
  unsigned int v40; // ebx
  int v42; // [rsp+50h] [rbp-B0h]
  BOOL v43; // [rsp+50h] [rbp-B0h]
  BOOL v44; // [rsp+54h] [rbp-ACh]
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+68h] [rbp-98h]
  int TextAlign; // [rsp+6Ch] [rbp-94h]
  __int64 Bitmap; // [rsp+70h] [rbp-90h]
  __int64 *v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  __int128 v52; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  int v54; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+A4h] [rbp-5Ch]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  _OWORD v57[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v58[28]; // [rsp+D0h] [rbp-30h] BYREF

  v50 = a3;
  v46 = a2;
  v51 = 0LL;
  v9 = a8;
  v45 = 0LL;
  v44 = 0;
  v42 = 0;
  TextAlign = 0;
  memset(v57, 0, sizeof(v57));
  v52 = 0LL;
  if ( (a8 & 0x20) != 0 && (*(_WORD *)(gpsi + 6996LL) == 1 || *(_DWORD *)(gpsi + 2188LL)) )
    v9 = a8 & 0xFFFFFFCF | 0x10;
  v11 = a6;
  v12 = v9 | 0x80;
  if ( (v9 & 0x170) == 0 )
    v12 = v9;
  if ( !a6 )
    return 1LL;
  v13 = a7;
  if ( !a7 )
    return 1LL;
  v14 = v12 & 0x80;
  v47 = v14;
  if ( (v12 & 0x80) != 0 )
  {
    v15 = *(HDC *)(gpDispInfo + 72LL);
    GreSetLayout(v15, 0xFFFFFFFFLL, 0LL);
    Layout = GreGetLayout(a1);
    if ( Layout != -1 )
      GreSetLayout(v15, a6, Layout);
    v17 = gpDispInfo;
    v18 = a6 + 1;
    v19 = *(unsigned int *)(gpDispInfo + 88LL);
    if ( (int)v19 < (int)(a6 + 1) || *(_DWORD *)(gpDispInfo + 92LL) < a7 )
    {
      v20 = *(_DWORD *)(gpDispInfo + 92LL);
      v21 = (unsigned int)a7;
      if ( v20 > a7 )
        v21 = (unsigned int)v20;
      if ( (int)v19 <= v18 )
        v19 = (unsigned int)v18;
      Bitmap = GreCreateBitmap(v19, v21, 1LL, 1LL, 0LL);
      if ( Bitmap )
      {
        v22 = GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), Bitmap);
        GreDeleteObject(v22);
        GreSetBitmapOwner(Bitmap, 0LL);
        v17 = gpDispInfo;
        v23 = *(_DWORD *)(gpDispInfo + 88LL);
        if ( v23 <= v18 )
          v23 = a6 + 1;
        *(_DWORD *)(gpDispInfo + 88LL) = v23;
        v24 = a7;
        if ( *(_DWORD *)(gpDispInfo + 92LL) > a7 )
          v24 = *(_DWORD *)(gpDispInfo + 92LL);
        *(_DWORD *)(gpDispInfo + 92LL) = v24;
      }
      else
      {
        v17 = gpDispInfo;
        v13 = *(_DWORD *)(gpDispInfo + 92LL);
        v11 = *(_DWORD *)(gpDispInfo + 88LL) - 1;
      }
    }
    NtGdiPatBlt(
      *(HDC *)(*(_QWORD *)v17 + 72LL),
      0LL,
      0,
      *(_DWORD *)(*(_QWORD *)v17 + 88LL),
      *(_DWORD *)(*(_QWORD *)v17 + 92LL),
      16711778);
    GreGetTextCharacterExtra(a1);
    GreSetTextCharacterExtra(*(HDC *)(gpDispInfo + 72LL));
    TextAlign = GreGetTextAlign(v15);
    v25 = GreGetTextAlign(a1);
    GreSetTextAlign(v15, TextAlign ^ ((unsigned __int16)TextAlign ^ v25) & 0x106);
    v30 = *(_QWORD *)(GetDPIServerInfo(v27, v26, v28, v29) + 24);
    if ( GreGetHFONT(a1) != v30 )
    {
      GreSelectFont(a1);
      GreSelectFont(a1);
      v51 = GreSelectFont(*(HDC *)(gpDispInfo + 72LL));
      *(_QWORD *)&v52 = *(_QWORD *)(gpDispInfo + 72LL);
      *((_QWORD *)&v52 + 1) = v51;
      v42 = GrePushThreadGuardedObject(v57, &v52, SelectFont);
    }
    v14 = v47;
  }
  else
  {
    v15 = a1;
    GreGetDCPoint(a1, 4LL, &v45);
    GreSetViewportOrg(a1, a4 + v45, a5 + HIDWORD(v45));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem(v15, v50, v11, v13, 0, v12);
  if ( v42 )
    GrePopThreadGuardedObject(v57);
  v43 = 1;
  if ( !v14 )
  {
    v31 = *(_DWORD *)(gpsi + 4636LL);
    if ( (unsigned int)GreGetTextColor(v15) != v31 )
      v43 = 0;
  }
  if ( (unsigned int)MNGetpItemIndex(*v50, v50[1]) == -1 || (v33 = *(HBRUSH *)(*(_QWORD *)v32 + 96LL)) == 0LL )
  {
    v34 = 0;
  }
  else
  {
    memset(v58, 0, 0x68uLL);
    v34 = (unsigned int)GreExtGetObjectW(v33, 104LL, (char *)v58) == 104 && HIWORD(v58[11]) == 32 && !v58[12];
    v44 = v34;
  }
  v35 = *(HDC *)(gpDispInfo + 72LL);
  if ( v15 == v35 )
  {
    GreSetBkColor(v35, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  }
  if ( v47 )
  {
    if ( v51 )
      GreSelectFont(v15);
    GreSetTextAlign(v15, TextAlign);
    if ( (v12 & 0x10) != 0 )
    {
      v53 = 0LL;
      v54 = v11;
      v55 = v13;
      v56 = *(_QWORD *)(gpsi + 4944LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 72LL), 0xFA0089u, (struct _POLYPATBLT *)&v53, 1u);
    }
    if ( (v12 & 0x100) == 0 )
    {
      if ( (v12 & 0x20) == 0 )
      {
        if ( (v12 & 0x40) != 0 )
        {
          v37 = v46;
          BltColor(a1, v46, *(HDC *)(gpDispInfo + 72LL), a4, a5, v11, v13, 0, 0, 1);
          v38 = a4 + 1;
LABEL_59:
          BltColor(a1, v37, *(HDC *)(gpDispInfo + 72LL), v38, a5, v11, v13, 0, 0, 1);
          GreSetLayout(v15, 0xFFFFFFFFLL, 0LL);
          if ( v44 )
          {
            GreGetDCPoint(a1, 4LL, &v45);
            GreSetViewportOrg(a1, a4 + v45, a5 + HIDWORD(v45));
            v39 = xxxRealDrawMenuItem(a1, v50, v11, v13, 1, v43);
            v40 = v39 & Bitmap;
            GreSetViewportOrg(a1, v45, SHIDWORD(v45));
          }
          else
          {
            return (unsigned int)Bitmap;
          }
          return v40;
        }
        v36 = v46;
LABEL_58:
        v46 = v36;
        v38 = a4;
        v37 = v36;
        goto LABEL_59;
      }
      BltColor(a1, *(_QWORD *)(gpsi + 4856LL), *(HDC *)(gpDispInfo + 72LL), a4 + 1, a5 + 1, v11, v13, 0, 0, 1);
    }
    v36 = *(_QWORD *)(gpsi + 4824LL);
    goto LABEL_58;
  }
  if ( v34 )
    xxxRealDrawMenuItem(v15, v50, v11, v13, 1, v43);
  GreSetViewportOrg(v15, v45, SHIDWORD(v45));
  return 1LL;
}
