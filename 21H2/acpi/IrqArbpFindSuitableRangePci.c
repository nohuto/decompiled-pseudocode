/*
 * XREFs of IrqArbpFindSuitableRangePci @ 0x1C009D25C
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C009D510 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004B644 (WPP_RECORDER_SF_DD.c)
 *     IcGetPossibleInput @ 0x1C0097288 (IcGetPossibleInput.c)
 *     IrqArbGsivFromIrq @ 0x1C009A2C0 (IrqArbGsivFromIrq.c)
 *     IcIsInputValid @ 0x1C009D3D8 (IcIsInputValid.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00B5F4C (LinkNodeGetPossibleGsiv.c)
 *     IrqArbIrqFromGsiv @ 0x1C00B690C (IrqArbIrqFromGsiv.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B6B6C (IrqArbpAssignIrqFromLinkNode.c)
 */

char __fastcall IrqArbpFindSuitableRangePci(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // r10d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int64 v20; // r15
  __int64 v21; // [rsp+28h] [rbp-28h]
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+38h] BYREF
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF

  v22 = a1;
  v2 = a2[4];
  v23 = 0;
  v24 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  LOBYTE(v22) = 0;
  if ( (int)LinkNodeCrackPrt(v4, &v24, &v23, 1) < 0 )
    return 0;
  if ( !v24 )
  {
    if ( (int)IcGetPossibleInput(v23, v5, &v22) >= 0 && (v22 & 0xB) != 3 )
      return 0;
    v6 = v23;
    v7 = a2[2];
    if ( v23 < v7 )
      return 0;
    v8 = a2[3];
    if ( v23 > v8 )
      return 0;
    if ( v7 <= v23 && v8 >= v23 )
    {
      if ( !(unsigned __int8)IcIsInputValid(v23) )
        return 0;
      v10 = a2[5];
      *a2 = v9;
      a2[1] = v9;
      *(_QWORD *)(v10 + 16) = 1LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          0x19u,
          (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
          v9);
      v6 = v23;
    }
    goto LABEL_12;
  }
  if ( (int)LinkNodeGetPossibleGsiv(v24, &v23) < 0 )
  {
    if ( (int)IrqArbpAssignIrqFromLinkNode(v18, a2, v18) < 0 )
      return 0;
    v6 = IrqArbGsivFromIrq(*(unsigned int *)a2);
    v23 = v6;
LABEL_12:
    v11 = a2[5];
    v12 = a2[9];
    v13 = *(_DWORD *)(v11 + 36);
    v14 = *(_QWORD *)(v11 + 40);
    v15 = a2[4];
    LODWORD(v22) = *(_BYTE *)(*(_QWORD *)(a2[7] + 40LL) + 4LL) & 1;
    if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, unsigned int, _DWORD, int, int))ProcessorFindIdtEntries)(
                *(_QWORD *)(v15 + 32),
                v14,
                v12,
                1LL,
                v6,
                v22,
                v13 & 1,
                1) >= 0 )
      return 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x14u,
        0x1Au,
        (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
    return 0;
  }
  v19 = IrqArbIrqFromGsiv(v23, v17);
  v20 = v19;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x17u,
      (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
      v19);
  if ( a2[2] <= v20 && a2[3] >= v20 )
  {
    *a2 = v20;
    a2[1] = v20;
    *(_QWORD *)(a2[5] + 16LL) = 1LL;
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = *(_DWORD *)a2;
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x18u,
      (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
      v21,
      *((_DWORD *)a2 + 2));
  }
  return 0;
}
