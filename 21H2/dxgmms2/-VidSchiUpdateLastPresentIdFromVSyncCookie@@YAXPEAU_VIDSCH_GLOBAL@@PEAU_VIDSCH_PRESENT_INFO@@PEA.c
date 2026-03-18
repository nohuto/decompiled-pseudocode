/*
 * XREFs of ?VidSchiUpdateLastPresentIdFromVSyncCookie@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_VSYNC_COOKIE@@QEAK@Z @ 0x1C0046370
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUpdateLastPresentIdFromVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_VSYNC_COOKIE *a3,
        unsigned int *const a4)
{
  __int64 i; // r10
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rcx
  int v11; // r14d
  __int64 v12; // rbx
  unsigned __int64 v13; // rax

  if ( *((_DWORD *)a3 + 4) == 18 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 32); i = (unsigned int)(i + 1) )
    {
      v7 = *((unsigned int *)a3 + i + 33);
      v8 = 280 * v7;
      a4[v7] = -1;
      v9 = *((_QWORD *)a2 + 35 * v7 + 52);
      if ( v9 )
      {
        v10 = *((unsigned int *)a3 + i + 43);
        v11 = *(_DWORD *)((char *)a2 + v8 + 368);
        if ( v11 != (_DWORD)v10 )
        {
          v12 = *(unsigned int *)((char *)a2 + v8 + 364);
          *(_DWORD *)((char *)a2 + v8 + 368) = v10;
          if ( (int)v10 + 1 > (unsigned int)v12 )
            goto LABEL_12;
          v13 = *(_QWORD *)(v9 + 16LL * (((int)v12 + (int)v10 - 1) % (unsigned int)v12));
          if ( v13 )
          {
            if ( v13 < *(_QWORD *)((char *)a2 + v8 + 384) )
            {
              WdLogSingleEntry5(0LL, 281LL, 49152LL, (unsigned int)v7, v13, *(_QWORD *)((char *)a2 + v8 + 384));
              __debugbreak();
LABEL_12:
              WdLogSingleEntry5(0LL, 281LL, 53248LL, v7, v10, v12);
              __debugbreak();
              JUMPOUT(0x1C00464B0LL);
            }
            *(_QWORD *)((char *)a2 + v8 + 384) = v13;
            a4[(unsigned int)v7] = ((int)v12 + v11 - 1) % (unsigned int)v12;
          }
        }
      }
    }
  }
}
