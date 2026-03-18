/*
 * XREFs of CmUnregisterMachineHiveLoadedNotification @ 0x140865730
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CmUnregisterMachineHiveLoadedNotification(PVOID **P)
{
  char *v2; // rdi
  PVOID *v3; // rax
  PVOID *v4; // rcx

  if ( P )
  {
    v2 = (char *)&unk_140C00F90 + 200 * *((unsigned int *)P + 8);
    while ( 1 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
      if ( !*((_BYTE *)P + 36) )
        break;
      *((_BYTE *)P + 38) = 1;
      KeResetEvent(&CmpMachineHiveCallbackEvent);
      ExReleasePushLockEx((ULONG_PTR)v2, 0LL);
      KeWaitForSingleObject(&CmpMachineHiveCallbackEvent, Executive, 0, 0, 0LL);
    }
    if ( *((_BYTE *)P + 37) )
    {
      v3 = *P;
      if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = v4;
      *((_BYTE *)P + 37) = 0;
    }
    ExReleasePushLockEx((ULONG_PTR)v2, 0LL);
    ExFreePoolWithTag(P, 0);
  }
}
