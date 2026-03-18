/*
 * XREFs of DrvDxgkUpgradeLegacyDpiSettings @ 0x1C01488A0
 * Callers:
 *     <none>
 * Callees:
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0011700 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 __fastcall DrvDxgkUpgradeLegacyDpiSettings(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  struct PDEV *v7; // rdi
  int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // esi
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  int v19; // ecx
  __int32 v20; // esi
  __int32 v21; // eax
  unsigned int v22; // ebx
  struct _LUID *v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct PDEV *v28; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v29[6]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v30[24]; // [rsp+A0h] [rbp-60h] BYREF

  *a2 = 0;
  LODWORD(v4) = -1073741275;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  v7 = gppdevList;
  if ( gppdevList )
  {
    while ( 1 )
    {
      v28 = v7;
      if ( !v7 )
        goto LABEL_28;
      v8 = *((_DWORD *)v7 + 10);
      if ( (v8 & 1) == 0 )
        goto LABEL_28;
      if ( (v8 & 0x400) != 0 )
        goto LABEL_28;
      v9 = *((_QWORD *)v7 + 322);
      if ( ((v9 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v9 + 160) & 0x800000) == 0 )
        goto LABEL_28;
      memset(v30, 0, sizeof(v30));
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _DWORD *))qword_1C024AAA0)(
              a1,
              *(_QWORD *)(v9 + 240),
              *(unsigned int *)(v9 + 256),
              v30);
      v4 = v10;
      if ( v10 < 0 )
        break;
      memset(v29, 0, sizeof(v29));
      v29[0] = *(__m128i *)((char *)v7 + 2456);
      v29[1] = *(__m128i *)((char *)v7 + 2472);
      v29[2] = *(__m128i *)((char *)v7 + 2488);
      v29[3] = *(__m128i *)((char *)v7 + 2504);
      v29[4] = *(__m128i *)((char *)v7 + 2520);
      v29[5] = *(__m128i *)((char *)v7 + 2536);
      if ( v30[2] != _mm_srli_si128(*v29, 8).m128i_i32[1] )
      {
        v16 = 0;
        v17 = &DesktopScaleFactorCutoffs;
        do
        {
          if ( *v17 > v30[2] )
            break;
          ++v16;
          ++v17;
        }
        while ( (__int64)v17 < (__int64)&dword_1C021CC8C );
        v18 = &DesktopScaleFactorCutoffs;
        v19 = 0;
        do
        {
          if ( *v18 > v29[0].m128i_i32[3] )
            break;
          ++v19;
          ++v18;
        }
        while ( (__int64)v18 < (__int64)&dword_1C021CC8C );
        v20 = v16 - v19;
        v21 = v20;
        if ( v29[5].m128i_i32[0] > v20 )
          v21 = v29[5].m128i_i32[0];
        if ( v21 >= v29[5].m128i_i32[2] )
        {
          v20 = v29[5].m128i_i32[2];
        }
        else if ( v29[5].m128i_i32[0] > v20 )
        {
          v20 = v29[5].m128i_i32[0];
        }
        v22 = *(_DWORD *)(*((_QWORD *)v7 + 322) + 256LL);
        v23 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v28);
        v24 = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, _QWORD, __m128i *))qword_1C024AA88)(
                v23,
                v22,
                (unsigned int)v20,
                v29);
        v4 = v24;
        if ( v24 < 0 )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v6);
          v14[3] = v4;
          v14[4] = *(_QWORD *)(*((_QWORD *)v7 + 322) + 240LL);
          v15 = *((_QWORD *)v7 + 322);
          v14[5] = *(unsigned int *)(v15 + 256);
          goto LABEL_27;
        }
        *a2 = 1;
      }
LABEL_28:
      v7 = *(struct PDEV **)v7;
      if ( !v7 )
        goto LABEL_29;
    }
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v14[3] = v4;
    v14[4] = *(_QWORD *)(*((_QWORD *)v7 + 322) + 240LL);
    v15 = *(unsigned int *)(*((_QWORD *)v7 + 322) + 256LL);
    v14[5] = v15;
LABEL_27:
    WdLogEvent5_WdError(v14, v15);
    goto LABEL_28;
  }
LABEL_29:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v6);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v27);
  }
  return (unsigned int)v4;
}
