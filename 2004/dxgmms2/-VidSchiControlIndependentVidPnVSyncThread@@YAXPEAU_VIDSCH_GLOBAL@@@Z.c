/*
 * XREFs of ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002A958
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1C0013490 (VidSchiControlVSyncThread.c)
 * Callees:
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C00135E8 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     VidSchiSetVSyncSuspended @ 0x1C0013614 (VidSchiSetVSyncSuspended.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     VidSchiControlVSync @ 0x1C00866B4 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlIndependentVidPnVSyncThread(struct _VIDSCH_GLOBAL *a1)
{
  struct _ERESOURCE *v1; // r14
  unsigned int v3; // esi
  __int64 i; // rdi
  __int64 MostSignificantBit; // rcx
  unsigned int *v6; // rsi
  __int64 v7; // rbp
  char v8; // cl
  signed __int32 v9; // eax
  __int64 v10; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v12[16]; // [rsp+40h] [rbp-68h] BYREF

  v1 = (struct _ERESOURCE *)((char *)a1 + 1072);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1072), 1u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 214, &LockHandle);
  v3 = *((_DWORD *)a1 + 547);
  for ( i = 0LL; v3; v3 &= ~(1 << MostSignificantBit) )
  {
    MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(v3);
    if ( *((_DWORD *)a1 + MostSignificantBit + 564) >= *((_DWORD *)a1 + 581) )
    {
      *((_DWORD *)a1 + MostSignificantBit + 564) = -1;
      v12[i] = MostSignificantBit;
      i = (unsigned int)(i + 1);
    }
  }
  *((_QWORD *)a1 + 273) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)i )
  {
    v6 = v12;
    do
    {
      v7 = *v6;
      v8 = *((_BYTE *)a1 + v7 + 1792);
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + v7 + 548, 0, 0);
      if ( v8
        && !v9
        && !*((_DWORD *)a1 + 4 * (unsigned int)v7 + 470)
        && !(unsigned int)DXGADAPTER::NumberOfVSyncWaiter(*((DXGADAPTER **)a1 + 2), v7)
        && !*((_DWORD *)a1 + v7 + 183)
        && !*((_DWORD *)a1 + 201)
        && !*((_DWORD *)a1 + 2 * v10 + 471) )
      {
        VidSchiControlVSync(a1, 0LL, 3LL, (unsigned int)v7);
        VidSchiSetVSyncSuspended((__int64)a1, v7, 1);
      }
      ++v6;
      --i;
    }
    while ( i );
  }
  ExReleaseResourceLite(v1);
}
