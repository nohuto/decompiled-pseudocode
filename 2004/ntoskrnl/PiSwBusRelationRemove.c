/*
 * XREFs of PiSwBusRelationRemove @ 0x140720934
 * Callers:
 *     PiSwProcessRemove @ 0x140720878 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1407228B0 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140201B40 (RtlDeleteElementGenericTableAvl.c)
 *     PiSwDeviceDereference @ 0x140761630 (PiSwDeviceDereference.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwBusRelationRemove(char *P)
{
  char *v1; // rax
  __int64 v3; // rdx
  char **v4; // rcx
  _QWORD *v5; // rdx
  void *v7; // rdi

  v1 = P + 96;
  v3 = *((_QWORD *)P + 12);
  if ( *(char **)(v3 + 8) != P + 96 || (v4 = (char **)*((_QWORD *)P + 13), *v4 != v1) )
    __fastfail(3u);
  *v4 = (char *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (_QWORD *)*((_QWORD *)P + 14);
  if ( (_QWORD *)v5[2] == v5 + 2 )
  {
    v7 = (void *)v5[1];
    RtlDeleteElementGenericTableAvl(&PiSwBusRelationsTable, v5);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x57706E50u);
  }
  *((_QWORD *)P + 14) = 0LL;
  return PiSwDeviceDereference(P);
}
