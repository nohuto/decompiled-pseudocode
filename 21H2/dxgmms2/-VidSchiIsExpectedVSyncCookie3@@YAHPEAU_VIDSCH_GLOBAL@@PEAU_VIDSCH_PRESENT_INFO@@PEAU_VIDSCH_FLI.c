/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@QEAK@Z @ 0x1C0045C70
 * Callers:
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@QEAK@Z @ 0x1C00038E0 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie3(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4,
        unsigned int *const a5)
{
  _DWORD *v6; // rsi
  unsigned int v7; // r9d
  char v8; // r8
  bool v9; // zf
  int v10; // eax
  char v11; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ebp
  unsigned int v16; // r11d
  unsigned int v17; // r15d
  __int64 v18; // rcx
  char v19; // cl
  int v20; // eax

  v6 = (_DWORD *)*((_QWORD *)a3 + 147);
  if ( (*((_DWORD *)a3 + 284) & 0x10) != 0 )
    v7 = ((unsigned __int16)*v6 | (unsigned __int16)(*v6 >> 10)) & 0x3FF;
  else
    v7 = (1 << *((_DWORD *)a1 + 38)) - 1;
  v8 = -1;
  v9 = !_BitScanForward((unsigned int *)&v10, v7);
  if ( !v9 )
    v8 = v10;
  v11 = 0;
  if ( !v7 )
    return 1LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)((char *)v6 + v11 * ((8 * v6[2] + 231) & 0xFFFFFFF8) + 24);
    if ( v12 )
      break;
LABEL_16:
    v19 = v8;
    v8 = -1;
    v7 &= ~(1 << v19);
    v9 = !_BitScanForward((unsigned int *)&v20, v7);
    if ( !v9 )
      v8 = v20;
    ++v11;
    if ( !v7 )
      return 1LL;
  }
  v13 = 280LL * v8;
  if ( v12 <= *(_QWORD *)((char *)a2 + v13 + 384) )
  {
    v14 = a5[v8];
    v15 = *(_DWORD *)((char *)a2 + v13 + 364);
    if ( v14 != -1 )
    {
      v16 = (v14 + 1) % v15;
      v17 = ((v15 + *(_DWORD *)((char *)a2 + v13 + 368) - 1) % v15 + 1) % v15;
      if ( v16 != v17 )
      {
        v18 = *(_QWORD *)((char *)a2 + v13 + 416);
        while ( *(_QWORD *)(v18 + 16LL * v16) != v12 )
        {
          v16 = (v16 + 1) % v15;
          if ( v16 == v17 )
            goto LABEL_16;
        }
        *((_QWORD *)a3 + 163) = *(_QWORD *)(v18 + 16LL * v16 + 8);
      }
    }
    goto LABEL_16;
  }
  return 0LL;
}
