/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BE20
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E028 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E180 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FC80 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rbp
  unsigned int v3; // esi
  __int64 *v4; // r15
  int v5; // edx
  void *v7; // r8
  void *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // r14d
  int v12; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rcx
  char v19; // [rsp+30h] [rbp-78h]
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  __int128 v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp-38h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = &unk_1C00701BA;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  v7 = &unk_1C00701BA;
  v8 = &unk_1C00701BA;
  v9 = 0x400000000000LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( v1 )
  {
    v10 = v1[1];
    v5 = (int)v1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)v1[71];
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = (void *)v1[72];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = v5;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      76,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      v19,
      (__int64)v7,
      (__int64)v8);
  }
  v11 = *(_DWORD *)(a1 + 56);
  v12 = 8;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    v12 = 6;
  *(_DWORD *)(a1 + 212) = v12;
  if ( (v1[1] & 0x8000000000000LL) != 0 )
    goto LABEL_12;
  v4 = (__int64 *)AMLIGetNamedChild(v1[90], 1262701663LL, v7, v9);
  if ( !v4 )
  {
    if ( (v11 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 960LL), 0x80uLL);
    }
    else if ( (v11 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 960LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_12;
  }
  WORD1(v20) = 1;
  if ( (v11 & 4) != 0 )
  {
    v14 = 1LL;
  }
  else
  {
    if ( (v11 & 8) == 0 )
    {
LABEL_12:
      ACPIDeviceCompleteGenericPhase(v4, v3, 0LL, a1);
      return 0LL;
    }
    v14 = 0LL;
  }
  v15 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v21 = v14;
  if ( v14 == 1 )
    _InterlockedOr64((volatile signed __int64 *)(v15 + 960), 0x80uLL);
  else
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 960), 0xFFFFFFFFFFFFFF7FuLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1u, &v20, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((__int64)v4);
  v16 = v1[1];
  v17 = 0;
  v4 = 0LL;
  v18 = &unk_1C00701BA;
  if ( (v16 & 0x200000000000LL) != 0 )
  {
    v2 = (void *)v1[71];
    v17 = 0;
    if ( (v16 & 0x400000000000LL) != 0 )
      v18 = (void *)v1[72];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      10,
      77,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      v3,
      (char)v1,
      (__int64)v2,
      (__int64)v18);
  }
  if ( v3 != 259 )
    goto LABEL_12;
  return 0LL;
}
