/*
 * XREFs of ACPIBuildProcessDevicePhaseAdr @ 0x1C0014F80
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015B20 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIIsNamedChildPresent @ 0x1C001EFC0 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020750 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E8D8 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseAdr(__int64 a1)
{
  ULONG_PTR v1; // rdi
  void *v2; // r14
  int v3; // ebp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rax
  int v12; // eax
  __int64 v13; // rax
  void *v14; // rdx
  void *v15; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C00701BA;
  v3 = 0;
  if ( (*(_BYTE *)(v1 + 960) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 608) && (*(_QWORD *)(v1 + 8) & 0x300000000000LL) == 0 )
      goto LABEL_19;
  }
  else
  {
    v12 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 720));
    dword_1C0082908 = 0;
    pszDest = 0;
    v3 = v12;
    FreeDataBuffs(a1 + 80, 1u);
    if ( v3 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 960), 0x20uLL);
LABEL_19:
      *(_DWORD *)(a1 + 20) |= 0x20u;
      goto LABEL_3;
    }
    v13 = *(_QWORD *)(v1 + 8);
    v14 = &unk_1C00701BA;
    v15 = &unk_1C00701BA;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v14 = *(void **)(v1 + 568);
      if ( (v13 & 0x400000000000LL) != 0 )
        v15 = *(void **)(v1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        6,
        32,
        (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
        v3,
        v1,
        (__int64)v14,
        (__int64)v15);
  }
LABEL_3:
  if ( (*(_QWORD *)(v1 + 8) & 0x100000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else if ( (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 720), 1145653343LL) )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
      *(_DWORD *)(a1 + 32) = 16;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 6;
    }
  }
  else
  {
    v7 = AMLIGetNamedChild(*(_QWORD *)(v1 + 720), 1380204895LL, v5, v6);
    if ( !v7 )
      KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x5244415FuLL, 0LL);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x100000000000uLL);
    v8 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 10;
    if ( v8 )
      AMLIDereferenceHandleEx(v8);
    *(_QWORD *)(a1 + 56) = v7;
    v3 = ACPIGet(
           (__int64 *)v1,
           1380204895,
           -1610349566,
           0LL,
           0,
           (__int64)ACPIBuildCompleteMustSucceed,
           a1,
           v1 + 568,
           0LL);
  }
  v9 = *(_QWORD *)(v1 + 8);
  v10 = &unk_1C00701BA;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v2 = *(void **)(v1 + 568);
    if ( (v9 & 0x400000000000LL) != 0 )
      v10 = *(void **)(v1 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      6,
      33,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v3,
      v1,
      (__int64)v2,
      (__int64)v10);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v3;
}
