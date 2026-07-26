/*
 * XREFs of ndisAoAcTraceRundown @ 0x1C00AAC9C
 * Callers:
 *     ndisMEmitTraceRundown @ 0x1C00AB01C (ndisMEmitTraceRundown.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_LDD @ 0x1C005EA94 (WPP_RECORDER_SF_LDD.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C00AB694 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zd @ 0x1C00AB750 (WPP_RECORDER_SF_Zd.c)
 */

void __fastcall ndisAoAcTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  int v3; // edx
  KIRQL v4; // bp
  int v5; // r8d
  int v6; // r9d
  __int64 *i; // rbx
  int v8; // edx
  _NDIS_OPEN_BLOCK *j; // rbx
  unsigned int AoAcReferences; // ecx
  int v11; // [rsp+20h] [rbp-48h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  AoAc = a1->AoAc;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  NewIrql = v4;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xAu,
      (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids,
      *((_DWORD *)AoAc + 94),
      *((_DWORD *)AoAc + 13));
  if ( *((_DWORD *)AoAc + 16) && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xBu,
      (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids);
  for ( i = (__int64 *)*((_QWORD *)AoAc + 1); i != (__int64 *)((char *)AoAc + 8); i = (__int64 *)*i )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 8), v3, v5, v6, v11, *((_DWORD *)i + 4), *((_DWORD *)i + 5));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
  {
    AoAcReferences = j->AoAcReferences;
    if ( AoAcReferences && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 1;
      WPP_RECORDER_SF_Zd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        2,
        13,
        (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids,
        (__int64)&j->ProtocolHandle->Name,
        AoAcReferences);
    }
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
}
