/*
 * XREFs of CmUnregisterMachineHiveLoadedNotification @ 0x140866A50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
