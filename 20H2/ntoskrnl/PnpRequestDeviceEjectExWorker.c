/*
 * XREFs of PnpRequestDeviceEjectExWorker @ 0x1408A2F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072B3D0 (PnpQueueQueryAndRemoveEvent.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpRequestDeviceEjectExWorker(PVOID P)
{
  unsigned int v2; // eax
  void (__fastcall *v3)(_QWORD, _QWORD); // r8
  void *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)P + 32);
  v6 = 1024;
  v2 = PnpQueueQueryAndRemoveEvent(&DestinationString.Length, (char *)P + 464, (_WORD *)P + 234, &v6, 8, 1);
  v3 = *(void (__fastcall **)(_QWORD, _QWORD))P;
  *((_DWORD *)P + 6) = v2;
  if ( v3 )
    v3(v2, *((_QWORD *)P + 1));
  v4 = (void *)*((_QWORD *)P + 2);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x45706E50u);
  ExFreePoolWithTag(P, 0x46706E50u);
}
