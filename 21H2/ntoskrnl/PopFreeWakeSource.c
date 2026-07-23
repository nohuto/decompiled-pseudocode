/*
 * XREFs of PopFreeWakeSource @ 0x1408E6BF8
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056F420 (PopUpdateWakeSourceWorker.c)
 *     PopProcessWakeSourceWork @ 0x1408E6CC4 (PopProcessWakeSourceWork.c)
 *     PopUnlinkWakeSources @ 0x1408E6E38 (PopUnlinkWakeSources.c)
 * Callees:
 *     ExFreePoolEx @ 0x14023C600 (ExFreePoolEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeSource(_DWORD *P)
{
  int v1; // eax
  ULONG_PTR v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v1 = P[4];
  if ( v1 )
  {
    if ( (unsigned int)(v1 - 2) <= 1 )
    {
      v3 = *((_QWORD *)P + 3);
      if ( v3 )
        ExFreePoolEx(v3);
    }
  }
  else
  {
    v4 = (void *)*((_QWORD *)P + 4);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x206D654Du);
    v5 = (void *)*((_QWORD *)P + 6);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x206D654Du);
    v6 = (void *)*((_QWORD *)P + 8);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x206D654Du);
  }
  ExFreePoolWithTag(P, 0x206D654Du);
}
