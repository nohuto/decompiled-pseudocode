/*
 * XREFs of ?bCheckSurfaceRectSize@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@PAK3H@Z @ 0x216B45
 * Callers:
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 * Callees:
 *     <none>
 */

int __userpurge bCheckSurfaceRectSize@<eax>(
        HSURF *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _CLIPOBJ *a5,
        unsigned int *a6,
        unsigned int *a7,
        int a8)
{
  int v8; // edi
  LONG cx; // ecx
  DHPDEV dhpdev; // ebx
  HSURF *p_hsurf; // esi
  int v12; // eax
  HDEV hdev; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // eax
  HSURF v17; // ebx
  HSURF v18; // ecx
  HSURF v19; // eax
  HSURF v20; // edx
  LONG v21; // ecx
  signed int v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  HSURF *v26; // [esp+10h] [ebp-20h]
  HDEV v27; // [esp+14h] [ebp-1Ch]
  HSURF v28; // [esp+18h] [ebp-18h]
  LONG v29; // [esp+1Ch] [ebp-14h]
  int v30; // [esp+20h] [ebp-10h]

  v8 = 0;
  cx = 0;
  dhpdev = 0;
  p_hsurf = 0;
  v30 = 0;
  v27 = 0;
  v29 = 0;
  if ( !a2 )
    return 1;
  v12 = 0;
  if ( a3 )
    LOBYTE(v12) = LOBYTE(a3->sizlBitmap.cy) == 0;
  else
    v12 = 1;
  if ( !v12 )
  {
    p_hsurf = &a3->hsurf;
    v26 = &a3->hsurf;
    dhpdev = a3->dhpdev;
    hdev = a3->hdev;
    cx = a3->sizlBitmap.cx;
LABEL_9:
    v29 = cx;
    v27 = hdev;
    v30 = (int)*v26;
    if ( (int)*v26 > (int)hdev || (int)dhpdev > cx )
      return v8;
    goto LABEL_11;
  }
  if ( a1 )
  {
    dhpdev = (DHPDEV)a1[1];
    hdev = (HDEV)a1[2];
    cx = (LONG)a1[3];
    v26 = a1;
    goto LABEL_9;
  }
LABEL_11:
  if ( (int)a2[14] < 0 )
  {
    v14 = (_DWORD *)a2[3];
    if ( v14 )
    {
      if ( ((unsigned int)&loc_20000 & v14[6]) != 0 )
      {
        v15 = v14[459];
        v30 -= v15;
        v27 = (HDEV)((char *)v27 - v15);
        v16 = v14[460];
        dhpdev = (DHPDEV)((char *)dhpdev - v16);
        cx = v29 - v16;
      }
    }
  }
  if ( (int)v27 <= a2[4] && v30 >= 0 && cx <= a2[5] && (int)dhpdev >= 0 )
  {
    if ( p_hsurf )
    {
      if ( a1 )
      {
        v17 = *p_hsurf;
        if ( (int)*p_hsurf <= (int)*a1 )
          v17 = *a1;
        v18 = p_hsurf[2];
        if ( (int)v18 >= (int)a1[2] )
          v18 = a1[2];
        v28 = p_hsurf[1];
        if ( (int)v28 <= (int)a1[1] )
          v28 = a1[1];
        v19 = p_hsurf[3];
        v20 = a1[3];
        if ( (int)v19 >= (int)v20 )
          v19 = v20;
        v21 = (char *)v18 - (char *)v17;
        if ( v21 <= 0 )
          v21 = 0;
        v22 = (char *)v19 - (char *)v28;
        a4->left = v21;
      }
      else
      {
        v23 = (char *)p_hsurf[2] - (char *)*p_hsurf;
        if ( v23 <= 0 )
          v23 = 0;
        a4->left = v23;
        v22 = (char *)p_hsurf[3] - (char *)p_hsurf[1];
      }
LABEL_39:
      if ( v22 <= 0 )
        v22 = 0;
      a5->iUniq = v22;
      return 1;
    }
    if ( a1 )
    {
      v24 = (char *)a1[2] - (char *)*a1;
      if ( v24 <= 0 )
        v24 = 0;
      a4->left = v24;
      v22 = (char *)a1[3] - (char *)a1[1];
      goto LABEL_39;
    }
    return 1;
  }
  return v8;
}
