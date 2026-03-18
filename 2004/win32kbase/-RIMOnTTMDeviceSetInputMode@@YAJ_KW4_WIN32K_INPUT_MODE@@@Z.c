/*
 * XREFs of ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0182900
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceInputMode @ 0x1C0017798 (RIMSetDeviceInputMode.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 */

__int64 __fastcall RIMOnTTMDeviceSetInputMode(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // edi

  v2 = *(_QWORD *)(a1 + 336);
  RIMLockExclusive(v2 + 104);
  RIMLockExclusive(v2 + 568);
  v7 = RIMSetDeviceInputMode(a1, a2, v5, v6);
  *(_QWORD *)(v2 + 576) = 0LL;
  v8 = v7;
  ExReleasePushLockExclusiveEx(v2 + 568, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v2 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 104, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
