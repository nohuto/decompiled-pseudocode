/*
 * XREFs of ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C014668C
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C0149088 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0060CA8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memcmp @ 0x1C00D2790 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvUpdateDpiInfoOnOptimizedModeChange(struct _MDEV *a1, unsigned __int8 *a2)
{
  __int64 v2; // rbp
  unsigned int i; // esi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v23; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD Buf1[6]; // [rsp+40h] [rbp-98h] BYREF

  LODWORD(v2) = 0;
  *a2 = 0;
  if ( a1 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 5); ++i )
    {
      v6 = 56LL * i;
      v7 = *(_QWORD *)((char *)a1 + v6 + 40);
      v23 = v7;
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v23) )
      {
        v8 = *(_QWORD *)(v7 + 2576);
        v9 = *(_OWORD *)(v7 + 2472);
        Buf1[0] = *(_OWORD *)(v7 + 2456);
        v10 = *(_OWORD *)(v7 + 2488);
        v11 = *(_QWORD *)(v8 + 240);
        v12 = *(unsigned int *)(v8 + 256);
        Buf1[1] = v9;
        v13 = *(_OWORD *)(v7 + 2504);
        Buf1[2] = v10;
        v14 = *(_OWORD *)(v7 + 2520);
        Buf1[3] = v13;
        v15 = *(_OWORD *)(v7 + 2536);
        Buf1[4] = v14;
        Buf1[5] = v15;
        v16 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C024AA30)(
                v11,
                v12,
                v7 + 2136,
                v7 + 2456);
        v2 = v16;
        if ( v16 >= 0 )
        {
          if ( memcmp(Buf1, (const void *)(v7 + 2456), 0x60uLL) )
          {
            *(_DWORD *)((char *)a1 + v6 + 72) = *(_DWORD *)(v7 + 2464);
            *a2 = 1;
          }
        }
        else
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
          v20[3] = v2;
          v20[4] = *(_QWORD *)(*(_QWORD *)(v7 + 2576) + 240LL);
          v21 = *(unsigned int *)(*(_QWORD *)(v7 + 2576) + 256LL);
          v20[5] = v21;
          WdLogEvent5_WdError(v20, v21);
        }
      }
    }
  }
  return (unsigned int)v2;
}
