/*
 * XREFs of VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1C003DB80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1C003BA50 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 */

__int64 __fastcall VidSchQueryLastCompletedVidPnSourcePresentIdDWM(
        KSPIN_LOCK *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rsi
  int v8; // ebx
  struct _VIDSCH_DEVICE *v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-9h] BYREF
  __int128 v12; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v13; // [rsp+80h] [rbp+1Fh]
  __int128 v14; // [rsp+90h] [rbp+2Fh]
  __int64 v15; // [rsp+A0h] [rbp+3Fh]

  v4 = a2;
  if ( a4 )
  {
    if ( a2 < *((_DWORD *)a1 + 10) )
    {
      _mm_lfence();
      memset(&LockHandle, 0, sizeof(LockHandle));
      v15 = 0LL;
      v8 = 0;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      KeAcquireInStackQueuedSpinLock(a1 + 216, &LockHandle);
      v9 = *(struct _VIDSCH_DEVICE **)(a1[v4 + 400] + 16);
      if ( v9 )
        VidSchQueryLastCompletedPresentIdDWMInternal(a1, v9, v4, a3, (struct _D3DKMT_PRESENT_STATS_DWM2 *)&v12);
      else
        v8 = -1073741811;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v8 >= 0 )
      {
        *(_QWORD *)a4 = *(_QWORD *)((char *)&v12 + 4);
        *(_QWORD *)(a4 + 8) = v13;
        *(_DWORD *)(a4 + 16) = DWORD2(v13);
        *(_QWORD *)(a4 + 24) = v14;
        *(_DWORD *)(a4 + 32) = DWORD2(v14);
      }
    }
    else
    {
      v8 = -1073741811;
      WdLogSingleEntry2(3LL, a2, -1073741811LL);
    }
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v8;
}
