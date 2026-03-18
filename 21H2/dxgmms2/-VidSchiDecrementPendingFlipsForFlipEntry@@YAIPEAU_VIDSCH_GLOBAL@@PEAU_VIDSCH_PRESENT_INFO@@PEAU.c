/*
 * XREFs of ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0045990
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 */

__int64 __fastcall VidSchiDecrementPendingFlipsForFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3)
{
  struct _VIDSCH_PRESENT_INFO *v3; // r10
  unsigned int *v4; // rdx
  struct _VIDSCH_GLOBAL *v6; // r11
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v9; // ebx
  bool v10; // zf
  unsigned int v11; // r8d
  char v12; // dl
  int v13; // eax
  char v14; // cl
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // r8d
  int v21; // eax
  _QWORD v23[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-20h]
  unsigned int v25; // [rsp+44h] [rbp-1Ch]
  int v26; // [rsp+48h] [rbp-18h]
  unsigned int v27; // [rsp+4Ch] [rbp-14h]
  unsigned int v28; // [rsp+50h] [rbp-10h]

  v3 = a2;
  v4 = (unsigned int *)*((_QWORD *)a3 + 147);
  v6 = a1;
  if ( (*((_DWORD *)a3 + 284) & 0x10) != 0 )
    v7 = (*v4 | (*v4 >> 10)) & 0x3FF;
  else
    v7 = (1 << *((_DWORD *)a1 + 38)) - 1;
  if ( *((_BYTE *)a1 + 59) )
  {
    v8 = *v4;
    v9 = *v4 & 0x3FF;
    v23[0] = a1;
    v10 = *((_BYTE *)a1 + 156) == 0;
    v23[1] = v4;
    v24 = v9;
    if ( v10 )
      v11 = 0;
    else
      v11 = (v8 >> 10) & 0x3FF;
    v26 = 0;
    v12 = -1;
    v10 = !_BitScanForward((unsigned int *)&v13, v9);
    v14 = -1;
    v25 = v11;
    if ( !v10 )
      v14 = v13;
    v15 = v14;
    v10 = !_BitScanForward((unsigned int *)&v16, v11);
    v27 = v14;
    if ( !v10 )
      v12 = v16;
    v17 = v12;
    v28 = v12;
    while ( v9 || v11 )
    {
      if ( v15 < v17 )
        v17 = v15;
      v18 = 280LL * v17;
      v19 = *(_DWORD *)((char *)v3 + v18 + 192);
      if ( !v19 )
        goto LABEL_25;
      v20 = v19 - 1;
      *(_DWORD *)((char *)v3 + v18 + 192) = v20;
      if ( (*((_DWORD *)a3 + 284) & 0x20) != 0 )
      {
        v21 = *(_DWORD *)((char *)v3 + v18 + 196);
        if ( !v21 )
        {
          WdLogSingleEntry5(0LL, 281LL, 45056LL, v6, v3, v17);
          __debugbreak();
LABEL_25:
          WdLogSingleEntry5(0LL, 281LL, 45056LL, v6, v3, v17);
          __debugbreak();
          goto LABEL_26;
        }
        *(_DWORD *)((char *)v3 + v18 + 196) = v21 - 1;
      }
      if ( !v20 )
        *((_DWORD *)v3 + 750) &= ~(1 << v17);
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v23);
      v17 = v28;
      v11 = v25;
      v15 = v27;
      v9 = v24;
    }
  }
  else
  {
LABEL_26:
    *((_DWORD *)v3 + 750) &= ~v7;
  }
  return v7;
}
