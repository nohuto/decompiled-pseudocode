/*
 * XREFs of VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C00314BC
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0068340 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0010CE0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00112BC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

char __fastcall VidSchiRunningDeviceAllowsLongRunningPackets(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  _QWORD *i; // rcx
  char v6; // di
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-30h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(a1 + 12) & 2) != 0 )
  {
    v11[0] = v3 + 1712;
    v12 = 0;
    AcquireSpinLock::Acquire((Acquire *)v11);
    for ( i = *(_QWORD **)(a1 + 1688); i != (_QWORD *)(a1 + 1688); i = (_QWORD *)*i )
    {
      if ( *(i - 5) != *(i - 6) )
        goto LABEL_8;
    }
    if ( !*(_DWORD *)(a1 + 1708) )
      v2 = 1;
LABEL_8:
    AcquireSpinLock::Release((AcquireSpinLock *)v11);
    return v2;
  }
  else if ( *(_DWORD *)(a1 + 2888) )
  {
    return 0;
  }
  else
  {
    v6 = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1712), &LockHandle);
    v7 = *(unsigned int *)(a1 + 1552);
    if ( (_DWORD)v7 != *(_DWORD *)(a1 + 1544) )
    {
      v8 = *(_QWORD *)(a1 + 8 * v7 + 1560);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 104);
        if ( *(_BYTE *)(v9 + 204)
          || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0)
          || (*(_DWORD *)(v9 + 48) & 4) == 0 && (*(_DWORD *)(v8 + 112) & 0x20) == 0 )
        {
          v6 = 0;
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v6;
  }
}
