/*
 * XREFs of StorPortpInvokeAcpiMethod @ 0x1C003A1F4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     RaidNtStatusToStorStatus @ 0x1C001BD0C (RaidNtStatusToStorStatus.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C0045ABC (RaidSyncAcpiEvalMethod.c)
 */

__int64 __fastcall StorPortpInvokeAcpiMethod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        ULONG InputBufferLength,
        union _LARGE_INTEGER *Timeout,
        ULONG a7,
        _DWORD *a8)
{
  __int64 v10; // rcx
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 Unit; // rax
  int v13; // eax
  int v14; // [rsp+50h] [rbp+18h]

  HIBYTE(v14) = 0;
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  if ( a8 )
    *a8 = 0;
  v10 = **(_QWORD **)(a1 - 16);
  if ( !v10 )
    return 3238002694LL;
  if ( a2 )
  {
    if ( *(_WORD *)a2 != 1 )
      return 3238002694LL;
    if ( *(_DWORD *)(a2 + 4) < 4u )
      return 3238002694LL;
    LOWORD(v14) = *(_WORD *)(a2 + 8);
    BYTE2(v14) = *(_BYTE *)(a2 + 10);
    Unit = RaidAdapterFindUnit(v10, v14);
    if ( !Unit )
      return 3238002694LL;
    v11 = *(struct _DEVICE_OBJECT **)(Unit + 8);
  }
  else
  {
    v11 = *(struct _DEVICE_OBJECT **)(v10 + 8);
  }
  if ( v11 )
  {
    v13 = RaidSyncAcpiEvalMethod(v11, a4, InputBufferLength, Timeout, a7, (__int64)a8);
    return RaidNtStatusToStorStatus(v13);
  }
  return 3238002694LL;
}
