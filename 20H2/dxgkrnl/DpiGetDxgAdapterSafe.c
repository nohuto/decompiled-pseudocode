/*
 * XREFs of DpiGetDxgAdapterSafe @ 0x1C010A760
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0109E80 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 * Callees:
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C00044F0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 */

__int64 __fastcall DpiGetDxgAdapterSafe(struct _DEVICE_OBJECT *a1, _QWORD *a2, _QWORD *a3)
{
  PRKMUTEX v4; // rcx
  unsigned int v5; // r13d
  __int64 *v6; // rdi
  _QWORD *v8; // rsi
  struct _KMUTANT *v9; // r15
  __int64 *v10; // rbx
  struct _DEVICE_OBJECT *v11; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  _QWORD *i; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *j; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax

  v4 = Mutex;
  v5 = -1073741811;
  v6 = 0LL;
  *a2 = 0LL;
  KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C00B0B50, (__int64)KeGetCurrentThread());
  v8 = (_QWORD *)qword_1C00B0B40;
  if ( (_QWORD *)*v8 != v8 )
  {
    do
    {
      if ( v6 )
        break;
      v9 = (struct _KMUTANT *)(v8 + 9);
      KeWaitForSingleObject(v8 + 9, Executive, 0, 0, 0LL);
      v10 = (__int64 *)v8[7];
      if ( (__int64 *)*v10 != v10 )
      {
        do
        {
          if ( v6 )
            break;
          if ( *((_DWORD *)v10 + 4) == 1953656900 && *((_DWORD *)v10 + 5) == 2 )
          {
            v11 = (struct _DEVICE_OBJECT *)v10[3];
            if ( v11 == a1 || (struct _DEVICE_OBJECT *)v10[19] == a1 )
            {
              v6 = v10;
            }
            else
            {
              AttachedDeviceReference = IoGetAttachedDeviceReference(v11);
              if ( a1 == AttachedDeviceReference )
                v6 = v10;
              ObfDereferenceObject(AttachedDeviceReference);
            }
            if ( v6 )
              goto LABEL_26;
            KeWaitForSingleObject(v10 + 448, Executive, 0, 0, 0LL);
            v13 = (_QWORD *)v10[446];
            v14 = v13;
            for ( i = (_QWORD *)*v13; i != v14; i = (_QWORD *)*i )
            {
              if ( (struct _DEVICE_OBJECT *)v13[3] == a1 )
                v6 = *(__int64 **)(v13[4] + 64LL);
              v13 = i;
            }
            KeReleaseMutex((PRKMUTEX)v10 + 64, 0);
            if ( v6 )
              goto LABEL_26;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)(v10 + 413), 1u);
            v16 = (_QWORD *)v10[456];
            v17 = v16;
            for ( j = (_QWORD *)*v16; j != v17; j = (_QWORD *)*j )
            {
              if ( (struct _DEVICE_OBJECT *)v16[3] == a1 )
                v6 = *(__int64 **)(v16[4] + 64LL);
              v16 = j;
            }
            ExReleaseResourceLite((PERESOURCE)(v10 + 413));
            KeLeaveCriticalRegion();
            if ( v6 )
            {
LABEL_26:
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v6 + 484) )
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6[3] + 64) + 4080LL));
              ExAcquireResourceSharedLite((PERESOURCE)v6[21], 1u);
              if ( *((_DWORD *)v6 + 59) == 2 )
              {
                v23 = v6[487];
                if ( v23 )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
                  v5 = 0;
                  *a2 = v6[487];
                  *a3 = -1LL;
                }
              }
              if ( *((_BYTE *)v6 + 484) )
              {
                v24 = *(_QWORD *)(v6[3] + 64);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 4080), 0xFFFFFFFF) == 1 )
                  DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v24);
              }
              ExReleaseResourceLite((PERESOURCE)v6[21]);
              KeLeaveCriticalRegion();
            }
          }
          v10 = (__int64 *)*v10;
        }
        while ( *v10 != v8[7] );
        v9 = (struct _KMUTANT *)(v8 + 9);
      }
      KeReleaseMutex(v9, 0);
      v8 = (_QWORD *)*v8;
    }
    while ( *v8 != qword_1C00B0B40 );
  }
  _InterlockedExchange64(&qword_1C00B0B50, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( !*a2 )
  {
    v25 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v25 + 24) = 0LL;
    WdLogEvent5_WdWarning(v25);
  }
  return v5;
}
