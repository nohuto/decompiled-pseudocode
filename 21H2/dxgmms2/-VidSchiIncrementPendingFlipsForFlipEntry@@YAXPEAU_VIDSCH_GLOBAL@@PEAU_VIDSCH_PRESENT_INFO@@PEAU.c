/*
 * XREFs of ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0045B4C
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 */

void __fastcall VidSchiIncrementPendingFlipsForFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3)
{
  struct _VIDSCH_PRESENT_INFO *v3; // r10
  unsigned int *v4; // rdx
  unsigned int v6; // r9d
  unsigned int v7; // r11d
  unsigned int v8; // r11d
  bool v9; // zf
  unsigned int v10; // r9d
  char v11; // dl
  int v12; // eax
  char v13; // cl
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  int v18; // edx
  _QWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+30h] [rbp-20h]
  unsigned int v21; // [rsp+34h] [rbp-1Ch]
  int v22; // [rsp+38h] [rbp-18h]
  unsigned int v23; // [rsp+3Ch] [rbp-14h]
  unsigned int v24; // [rsp+40h] [rbp-10h]

  v3 = a2;
  v4 = (unsigned int *)*((_QWORD *)a3 + 147);
  if ( *((_BYTE *)a1 + 59) )
  {
    v6 = *v4;
    v7 = *v4;
    v19[0] = a1;
    v8 = v7 & 0x3FF;
    v19[1] = v4;
    v9 = *((_BYTE *)a1 + 156) == 0;
    v20 = v8;
    if ( v9 )
      v10 = 0;
    else
      v10 = (v6 >> 10) & 0x3FF;
    v22 = 0;
    v11 = -1;
    v9 = !_BitScanForward((unsigned int *)&v12, v8);
    v13 = -1;
    v21 = v10;
    if ( !v9 )
      v13 = v12;
    v14 = v13;
    v9 = !_BitScanForward((unsigned int *)&v15, v10);
    v23 = v13;
    if ( !v9 )
      v11 = v15;
    v16 = v11;
    v24 = v11;
    while ( v8 || v10 )
    {
      if ( v14 < v16 )
        v16 = v14;
      v17 = 280LL * v16;
      ++*(_DWORD *)((char *)v3 + v17 + 192);
      if ( (*((_DWORD *)a3 + 284) & 0x20) != 0 )
        ++*(_DWORD *)((char *)v3 + v17 + 196);
      *((_DWORD *)v3 + 750) |= 1 << v16;
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v19);
      v16 = v24;
      v14 = v23;
      v10 = v21;
      v8 = v20;
    }
  }
  else
  {
    if ( (*((_DWORD *)a3 + 284) & 0x10) != 0 )
      v18 = (*v4 | (*v4 >> 10)) & 0x3FF;
    else
      v18 = (1 << *((_DWORD *)a1 + 38)) - 1;
    *((_DWORD *)v3 + 750) |= v18;
  }
}
