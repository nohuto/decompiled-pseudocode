/*
 * XREFs of RIMFindTouchDigitizerWithSize @ 0x1C0166BF0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C00176A0 (RawInputManagerDeviceObjectReference.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 */

void __fastcall RIMFindTouchDigitizerWithSize(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = (__int64 *)gObRimDevList;
  *a2 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  while ( v2 != &gObRimDevList )
  {
    v5 = v2 - 2;
    if ( *((_BYTE *)v2 + 120) == 2 && (*((_DWORD *)v5 + 72) & 0x80u) != 0 && (v5[34] & 0x400) == 0 )
    {
      v6 = v5[71];
      if ( (unsigned int)(*(_DWORD *)(v6 + 24) - 1) <= 3 )
      {
        v7 = *(_QWORD *)(v6 + 140) - *a1;
        if ( !v7 )
          v7 = *(_QWORD *)(v6 + 148) - a1[1];
        if ( !v7 )
        {
          RawInputManagerDeviceObjectReference(v2 - 2);
          *a2 = v5;
          break;
        }
      }
    }
    v2 = (__int64 *)*v2;
  }
  qword_1C0250368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
