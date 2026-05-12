/*
 * XREFs of PortRegistryRead @ 0x1C0072A48
 * Callers:
 *     RaidRegGetDeviceDumpSupportLevel @ 0x1C00183B0 (RaidRegGetDeviceDumpSupportLevel.c)
 *     RaidRegGetDeviceDumpMaxSize @ 0x1C001843C (RaidRegGetDeviceDumpMaxSize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DA00 (memset.c)
 */

__int64 __fastcall PortRegistryRead(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int *a5)
{
  __int64 v5; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  PVOID SystemRoutineAddress; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+38h] [rbp-41h] BYREF
  int v14; // [rsp+40h] [rbp-39h]
  int v15; // [rsp+44h] [rbp-35h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v17[14]; // [rsp+58h] [rbp-21h] BYREF

  v5 = *a4;
  v15 = 0;
  v13 = v5;
  v14 = *a5;
  memset(v17, 0, sizeof(v17));
  LODWORD(v17[4]) = 0;
  v17[5] = 0LL;
  LODWORD(v17[6]) = 0;
  v17[0] = PortpRegQueryRoutine;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  v17[2] = v9;
  v17[3] = &v13;
  LODWORD(v17[1]) = 20;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, __int64, _QWORD))SystemRoutineAddress)(
             0LL,
             v10,
             v17,
             4LL,
             0LL);
  *a4 = v13;
  *a5 = v14;
  return result;
}
