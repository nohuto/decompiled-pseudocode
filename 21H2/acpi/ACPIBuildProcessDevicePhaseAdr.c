/*
 * XREFs of ACPIBuildProcessDevicePhaseAdr @ 0x1C0009A50
 * Callers:
 *     <none>
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002A488 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseAdr(__int64 a1)
{
  ULONG_PTR v1; // rdi
  void *v2; // r14
  int v3; // ebp
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rax
  int v10; // eax
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C006FB8B;
  v3 = 0;
  if ( (*(_BYTE *)(v1 + 1000) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 648) && (*(_QWORD *)(v1 + 8) & 0x300000000000LL) == 0 )
      goto LABEL_19;
  }
  else
  {
    v10 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 760));
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    v3 = v10;
    FreeDataBuffs(a1 + 80, 1LL);
    if ( v3 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1000), 0x20uLL);
LABEL_19:
      *(_DWORD *)(a1 + 20) |= 0x20u;
      goto LABEL_3;
    }
    v11 = *(_QWORD *)(v1 + 8);
    v12 = &unk_1C006FB8B;
    v13 = &unk_1C006FB8B;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(void **)(v1 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(void **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        6,
        32,
        (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
        v3,
        v1,
        (__int64)v12,
        (__int64)v13);
  }
LABEL_3:
  if ( (*(_QWORD *)(v1 + 8) & 0x100000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else if ( (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 760), 1145653343LL) )
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
    v5 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1380204895LL);
    if ( !v5 )
      KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x5244415FuLL, 0LL);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x100000000000uLL);
    v6 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 10;
    if ( v6 )
      AMLIDereferenceHandleEx(v6);
    *(_QWORD *)(a1 + 56) = v5;
    v3 = ACPIGet(v1, 1380204895, -1610349566, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 608, 0LL);
  }
  v7 = *(_QWORD *)(v1 + 8);
  v8 = &unk_1C006FB8B;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v2 = *(void **)(v1 + 608);
    if ( (v7 & 0x400000000000LL) != 0 )
      v8 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      6,
      33,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      v3,
      v1,
      (__int64)v2,
      (__int64)v8);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v3;
}
