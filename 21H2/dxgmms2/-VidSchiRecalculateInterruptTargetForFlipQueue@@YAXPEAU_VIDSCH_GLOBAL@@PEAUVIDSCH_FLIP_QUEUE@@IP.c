/*
 * XREFs of ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x1C0045DEC
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000F520 (VidSchiProcessVsyncCompletedFlipEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiRecalculateInterruptTargetForFlipQueue(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE *a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v5; // r10d
  int v6; // r11d
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // eax
  _DWORD *v13; // rsi
  unsigned int v14; // edx
  char v15; // cl
  bool v16; // zf
  int v17; // eax
  char v18; // bp
  unsigned __int64 v19; // r8
  int v20; // eax

  if ( a2 )
  {
    v5 = *((_DWORD *)a2 + 17);
    v6 = ((unsigned __int8)*((_DWORD *)a2 + 18) + 1) & 0x3F;
    while ( v5 != v6 )
    {
      v9 = 1376LL * v5;
      v10 = *(_DWORD *)((char *)a2 + v9 + 1172);
      if ( v10 > 0xC || (v11 = 4673, !_bittest(&v11, v10)) )
      {
        if ( v10 == 5 || v10 == 15 )
        {
          v12 = *(_DWORD *)((char *)a2 + v9 + 1256);
          if ( (v12 & 0x80000) == 0 )
          {
            v13 = *(_DWORD **)((char *)a2 + v9 + 1296);
            v14 = (v12 & 0x10) != 0
                ? ((unsigned __int16)*v13 | (unsigned __int16)(*v13 >> 10)) & 0x3FF
                : (1 << *((_DWORD *)a1 + 38)) - 1;
            if ( _bittest((const int *)&v14, a3) )
            {
              v15 = -1;
              v16 = !_BitScanForward((unsigned int *)&v17, v14);
              if ( !v16 )
                v15 = v17;
              v18 = 0;
              if ( v14 )
              {
                while ( 1 )
                {
                  v19 = *(_QWORD *)((char *)v13 + ((8 * v13[2] + 231) & 0xFFFFFFF8) * v18 + 24);
                  if ( v19 )
                    break;
                  v20 = 1 << v15;
                  v15 = -1;
                  v14 &= ~v20;
                  v16 = !_BitScanForward((unsigned int *)&v20, v14);
                  if ( !v16 )
                    v15 = v20;
                  ++v18;
                  if ( !v14 )
                    goto LABEL_19;
                }
                if ( v19 < *a4 )
                  *a4 = v19;
                return;
              }
            }
          }
        }
      }
LABEL_19:
      v5 = ((_BYTE)v5 + 1) & 0x3F;
    }
  }
}
