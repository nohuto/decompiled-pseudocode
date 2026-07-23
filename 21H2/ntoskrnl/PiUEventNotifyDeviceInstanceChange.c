/*
 * XREFs of PiUEventNotifyDeviceInstanceChange @ 0x14076CB5C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1406FD520 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x1402F91D4 (PiUEventHashStringIntoBucket.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     PiUEventApplyAdditionalFilters @ 0x1406FE068 (PiUEventApplyAdditionalFilters.c)
 *     PiUEventNotifyClient @ 0x1406FE15C (PiUEventNotifyClient.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstanceChange(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // r15
  unsigned int v4; // esi
  _QWORD **v5; // r14
  _QWORD *v6; // rdi
  __int64 v8; // r13
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 88) == 4 || (unsigned int)(*(_DWORD *)(a1 + 88) - 10) <= 1 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v3 = v9;
    v9[0] = (char *)&PiUEventDevInstanceClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket((PCWSTR)(a1 + 120));
    v4 = 0;
    v9[1] = &unk_140C450B0;
    do
    {
      v5 = (_QWORD **)*v3;
      v6 = *(_QWORD **)*v3;
      while ( v6 != v5 )
      {
        v8 = (__int64)v6;
        v6 = (_QWORD *)*v6;
        if ( v4 || !wcsicmp((const wchar_t *)(a1 + 120), *(const wchar_t **)(*(_QWORD *)(v8 + 24) + 16LL)) )
        {
          if ( PiUEventApplyAdditionalFilters(a1, v8) )
            v1 = PiUEventNotifyClient(a1, v8);
        }
      }
      ++v4;
      ++v3;
    }
    while ( v4 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
