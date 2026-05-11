/*
 * XREFs of USBHwStopMIDIPipe @ 0x1C0003B0C
 * Callers:
 *     USBHwStopAllMIDIPipes @ 0x1C002DEB4 (USBHwStopAllMIDIPipes.c)
 * Callees:
 *     USBHwAbortOrResetPipe @ 0x1C002E184 (USBHwAbortOrResetPipe.c)
 */

__int64 __fastcall USBHwStopMIDIPipe(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v7; // rbx
  KIRQL v8; // al
  int v9; // eax
  KIRQL v10; // al
  __int64 v11; // rcx
  KIRQL v12; // bp
  KIRQL v13; // al

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  if ( a3 >= *(_DWORD *)(a2 + 32) )
  {
    return (unsigned int)-1073741583;
  }
  else
  {
    v7 = 168LL * a3;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL));
    *(_BYTE *)(v7 + *(_QWORD *)(a2 + 40) + 41) = 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL), v8);
    if ( *(char *)(v7 + *(_QWORD *)(a2 + 40) + 2) < 0 )
    {
      v9 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(a1 + 40));
      v4 = v9;
      if ( v9 >= 0 || v9 == -1073741810 && *(_BYTE *)(v3 + 67) )
      {
        v4 = 0;
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL));
        v11 = *(_QWORD *)(a2 + 40);
        v12 = v10;
        if ( *(_BYTE *)(v7 + v11 + 72) )
        {
          KeResetEvent((PRKEVENT)(v7 + v11 + 112));
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL), v12);
          v4 = KeWaitForSingleObject((PVOID)(v7 + *(_QWORD *)(a2 + 40) + 112LL), Executive, 0, 0, 0LL);
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL));
          v11 = *(_QWORD *)(a2 + 40);
          v12 = v13;
        }
        if ( *(_DWORD *)(v7 + v11 + 64) )
        {
          KeResetEvent((PRKEVENT)(v7 + v11 + 136));
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL), v12);
          return (unsigned int)KeWaitForSingleObject((PVOID)(v7 + *(_QWORD *)(a2 + 40) + 136LL), Executive, 0, 0, 0LL);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + v11 + 104), v12);
        }
      }
    }
  }
  return v4;
}
