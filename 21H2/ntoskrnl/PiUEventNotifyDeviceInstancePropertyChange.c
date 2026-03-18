/*
 * XREFs of PiUEventNotifyDeviceInstancePropertyChange @ 0x1406E6000
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14078ACE0 (PiUEventProcessEventWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x1402E08A0 (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     PiUEventNotifyClient @ 0x14078BC74 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14078BEA4 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstancePropertyChange(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // r15
  unsigned int v4; // edi
  _QWORD **v5; // r14
  _QWORD *v6; // rbx
  _QWORD *v8; // r13
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 88) == 9 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v3 = v9;
    v9[0] = (char *)&PiUEventDevInstancePropertyClientList
          + 16 * (unsigned int)PiUEventHashStringIntoBucket((PCWSTR)(a1 + 120));
    v4 = 0;
    v9[1] = &unk_140C46510;
    do
    {
      v5 = (_QWORD **)*v3;
      v6 = *(_QWORD **)*v3;
      while ( v6 != v5 )
      {
        v8 = v6;
        v6 = (_QWORD *)*v6;
        if ( v4 || !wcsicmp((const wchar_t *)(a1 + 120), *(const wchar_t **)(v8[3] + 16LL)) )
        {
          if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v8) )
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
