/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@QEAK@Z @ 0x1C00038E0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0017BC0 (-VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH.c)
 *     ?VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@QEAK@Z @ 0x1C0045C70 (-VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLI.c)
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4,
        unsigned int *const a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v9; // r8d
  int v10; // eax
  int v12; // ebp
  unsigned int v13; // edx
  unsigned int v14; // esi
  unsigned int v15; // ebp
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  char v19; // dl
  char v20; // r13
  _DWORD *v21; // r10
  int v22; // r12d
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  _DWORD *v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h]
  char v28; // [rsp+98h] [rbp+20h]

  v5 = *((_DWORD *)a4 + 29);
  v6 = 0;
  if ( v5 && v5 != *((_DWORD *)a3 + 270) )
    return 0LL;
  v9 = *((_DWORD *)a4 + 4);
  if ( v9 == 10 )
    return VidSchiIsExpectedVSyncCookie2(a1, a3, a4);
  if ( v9 == 18 )
    return VidSchiIsExpectedVSyncCookie3(a1, a2, a3, a4, a5);
  v10 = *((_DWORD *)a3 + 284) & 0x10;
  if ( v9 == 3 )
  {
    if ( !v10 )
    {
      LOBYTE(v6) = *((_QWORD *)a4 + 16) == *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a3 + 147) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)a3 + 147) + 8LL) + 231) & 0xFFFFFFF8)
                                                     + *((_QWORD *)a3 + 147)
                                                     + 40LL);
      return v6;
    }
    return 0LL;
  }
  if ( v10 )
  {
    v12 = *((_DWORD *)a4 + 30);
    v13 = **((_DWORD **)a3 + 147);
    if ( (v12 & (v13 >> 10) & 0x3FF) == 0 && (v13 & v12 & 0x3FF) == (v13 & 0x3FF) )
    {
      v14 = 1;
      if ( (v13 & 0x3FF) != 0 )
      {
        v15 = *((_DWORD *)a4 + 30) & 0x3FF;
        v28 = 0;
        v16 = !_BitScanForward((unsigned int *)&v17, v15);
        v18 = -1;
        v19 = 0;
        if ( !v16 )
          v18 = v17;
        v20 = 0;
        while ( v15 )
        {
          v21 = (_DWORD *)*((_QWORD *)a3 + 147);
          v22 = 1 << v18;
          if ( ((1 << v18) & *v21 & 0x3FF) != 0 )
          {
            v27 = v19;
            if ( *((_QWORD *)a4 + 5 * v19 + 16) != *(_QWORD *)((char *)&v21[16 * (unsigned __int64)(unsigned int)v20
                                                                          + 10]
                                                             + ((8 * v21[2] + 231) & 0xFFFFFFF8) * v21[1]) )
              return 0LL;
            v26 = (_DWORD *)((char *)v21 + ((8 * v21[2] + 231) & 0xFFFFFFF8) * v20 + 160);
            if ( RtlCompareMemory(v26, (char *)a4 + 40 * v19 + 136, 8uLL) != 8 )
              return 0LL;
            if ( RtlCompareMemory(v26 + 2, (char *)a4 + 32 * v27 + 8 * v27 + 144, 8uLL) != 8 )
              return 0LL;
            v23 = *((_DWORD *)a4 + 10 * v27 + 40);
            v24 = v26[7];
            if ( (((unsigned __int8)v23 ^ *((_BYTE *)v26 + 28)) & 1) != 0
              || (((unsigned __int8)v23 ^ (unsigned __int8)v24) & 2) != 0
              || (((unsigned __int8)v23 ^ (unsigned __int8)v24) & 0x18) != 0 )
            {
              return 0LL;
            }
            v19 = v28;
            ++v20;
          }
          v15 &= ~v22;
          v18 = -1;
          v16 = !_BitScanForward((unsigned int *)&v25, v15);
          if ( !v16 )
            v18 = v25;
          v28 = ++v19;
        }
      }
      return v14;
    }
    return 0LL;
  }
  v14 = 1;
  if ( (*((_DWORD *)a4 + 30) & 0x3FF) != 1
    || *((_QWORD *)a4 + 16) != *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a3 + 147) + 4LL)
                                         * ((8 * *(_DWORD *)(*((_QWORD *)a3 + 147) + 8LL) + 231) & 0xFFFFFFF8)
                                         + *((_QWORD *)a3 + 147)
                                         + 40LL) )
  {
    return 0;
  }
  return v14;
}
