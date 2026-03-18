/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050E60
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0019748 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C001B0E8 (AMLIGetParent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FC80 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0052448 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r14d
  __int64 *v3; // rbp
  const ULONG_PTR *v4; // rdx
  int v5; // r15d
  int v6; // r13d
  char v7; // r12
  __int64 *v8; // rsi
  signed __int32 v9; // r14d
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  bool v12; // r9
  char v13; // bl
  __int64 *v14; // r8
  __int64 v15; // r10
  bool v16; // al
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // [rsp+30h] [rbp-88h]
  __int128 v23; // [rsp+48h] [rbp-70h] BYREF
  __int128 v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+D0h] [rbp+18h]

  v1 = a1;
  v25 = 0LL;
  v2 = 0;
  v23 = 0LL;
  v3 = 0LL;
  *(_DWORD *)(a1 + 212) = 4;
  v24 = 0LL;
  v4 = &WPP_095c070a05c4368bad966ca54a81e920_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      10,
      62,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      4);
  }
  v5 = *(_DWORD *)(v1 + 104);
  v6 = *(_DWORD *)(v1 + 108);
  v27 = v6;
  if ( v5 != 6 || (v7 = 1, v6 != 5) )
    v7 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v8 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = v8;
      v11 = v8;
      v8 = (__int64 *)*v8;
      v12 = 0;
      v13 = 0;
      v14 = (__int64 *)v10[6];
      if ( v14 != v10 + 6 )
      {
        do
        {
          v15 = *(v14 - 1);
          v14 = (__int64 *)*v14;
          if ( !v12 )
          {
            v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 696), 0, 0);
            v12 = v9 != 0;
          }
          if ( v5 == 1 && (*(_QWORD *)(v15 + 960) & 0x8000000000000LL) != 0 )
          {
            *(_BYTE *)(v15 + 625) = 1;
            v13 = 1;
          }
        }
        while ( (!v12 || !v13) && v14 != v10 + 6 );
        v6 = v27;
      }
      if ( v12 )
        _InterlockedOr64(v10 + 2, 0x20000uLL);
      else
        _InterlockedAnd64(v10 + 2, 0xFFFFFFFFFFFDFFFFuLL);
      v16 = v5 == 5 || v6 == 3;
      if ( v9 && v16 || v7 == 1 )
      {
        if ( (v11[2] & 0x40) != 0 )
        {
          _InterlockedAnd64(v11 + 2, 0xFFFFFFFFFFFFFFBFuLL);
          goto LABEL_36;
        }
      }
      else
      {
        v17 = v10[2];
        if ( *((_DWORD *)v11 + 11) < v5 )
        {
          if ( (v17 & 0x200) == 0 )
            _InterlockedOr64(v11 + 2, 0x40uLL);
          goto LABEL_36;
        }
        if ( (v17 & 0x40) != 0 )
        {
          _InterlockedAnd64(v10 + 2, 0xFFFFFFFFFFFFFFBFuLL);
LABEL_36:
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v11 + 16, 3, 0) == 1 )
            *((_DWORD *)v11 + 17) = 3;
          goto LABEL_38;
        }
        if ( (v17 & 0x2000) != 0 )
          goto LABEL_36;
      }
LABEL_38:
      if ( v8 == &AcpiPowerNodeList )
      {
        v3 = 0LL;
        v1 = a1;
        v2 = 0;
        break;
      }
    }
  }
  v18 = (unsigned int)AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v5 != 1 )
    goto LABEL_48;
  v19 = (__int64 *)AMLIGetParent(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 720LL));
  v3 = AMLIGetNamedChild(v19, 1262573407);
  AMLIDereferenceHandleEx((__int64)v19);
  if ( !v3 )
    goto LABEL_48;
  WORD1(v23) = 1;
  v20 = (unsigned int)v18 < 7 ? (unsigned int)AcpiSystemStateTranslation[v18] : 0xFFFFFFFFLL;
  *(_QWORD *)&v24 = v20;
  v2 = AMLIAsyncEvalObject(v3, 0LL, 1u, &v23, ACPIDeviceCompleteGenericPhase, v1);
  AMLIDereferenceHandleEx((__int64)v3);
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v22) = v2;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x3Fu,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      v1,
      v22);
  }
  result = 259LL;
  if ( v2 != 259 )
  {
LABEL_48:
    ACPIDeviceCompleteGenericPhase((__int64)v3, v2, 0LL, v1);
    return 0LL;
  }
  return result;
}
