/*
 * XREFs of PiUEventNotifyDeviceInterfaceChange @ 0x1407698C4
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14078ACE0 (PiUEventProcessEventWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x1402DE1B8 (PiUEventHashGuidIntoBucket.c)
 *     PiUEventNotifyClient @ 0x14078BC74 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14078BEA4 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInterfaceChange(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rax
  _QWORD *v4; // r15
  unsigned int v5; // esi
  _QWORD **v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  __int64 v11; // rax
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v2 )
    goto LABEL_4;
  v11 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v11 )
  {
LABEL_4:
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v4 = v12;
    v12[1] = &unk_140C463F0;
    v5 = 0;
    v12[0] = (char *)&PiUEventDevInterfaceClientList
           + 16 * (unsigned int)PiUEventHashGuidIntoBucket((unsigned __int8 *)(a1 + 120));
    do
    {
      v6 = (_QWORD **)*v4;
      v7 = *(_QWORD **)*v4;
      while ( v7 != v6 )
      {
        v8 = v7;
        v7 = (_QWORD *)*v7;
        if ( !v5 )
        {
          v9 = *(_QWORD *)(a1 + 120) - v8[3];
          if ( !v9 )
            v9 = *(_QWORD *)(a1 + 128) - v8[4];
          if ( v9 )
            continue;
        }
        if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v8) )
          v1 = PiUEventNotifyClient(a1, v8);
      }
      ++v5;
      ++v4;
    }
    while ( v5 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
