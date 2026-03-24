/*
 * XREFs of ACPIBuildPowerResourceExtension @ 0x1C002E058
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x1C002DF34 (OSNotifyCreatePowerResource.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall ACPIBuildPowerResourceExtension(volatile signed __int32 *a1, _QWORD *a2)
{
  int v4; // esi
  char *PoolWithTag; // rbx
  unsigned __int8 *v6; // r14
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x44706341u);
  if ( PoolWithTag )
  {
    v6 = *(unsigned __int8 **)(*(_QWORD *)a1 + 96LL);
    memset(PoolWithTag, 0, 0x90uLL);
    v7 = gdwfAMLI;
    *((_QWORD *)PoolWithTag + 2) = 4LL;
    *((_QWORD *)PoolWithTag + 4) = a1;
    dword_1C0082908 = 0;
    pszDest = 0;
    if ( (v7 & 4) != 0 )
      _InterlockedIncrement(a1 + 2);
    PoolWithTag[40] = v6[1];
    *((_DWORD *)PoolWithTag + 16) = 3;
    v8 = *v6;
    if ( (unsigned __int8)v8 < 6u )
      v4 = SystemPowerStateTranslation[v8];
    *((_DWORD *)PoolWithTag + 11) = v4;
    *((_QWORD *)PoolWithTag + 7) = PoolWithTag + 48;
    *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 48;
    *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 120;
    *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 120;
    *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 104;
    *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 104;
    v9 = *(_QWORD *)a1;
    *a2 = PoolWithTag;
    *(_QWORD *)(v9 + 104) = PoolWithTag;
    return 259LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x19u,
        (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
        144);
    return 3221225626LL;
  }
}
