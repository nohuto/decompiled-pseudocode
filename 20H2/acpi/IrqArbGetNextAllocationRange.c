/*
 * XREFs of IrqArbGetNextAllocationRange @ 0x1C0093A90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00027D0 (WPP_RECORDER_SF_D.c)
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000F6FC (WPP_RECORDER_SF_ii.c)
 *     PcisuppIsPciDevice @ 0x1C00938C0 (PcisuppIsPciDevice.c)
 *     IrqArbpFindBootConfig @ 0x1C0094F04 (IrqArbpFindBootConfig.c)
 *     ArbGetNextAllocationRange @ 0x1C00A2570 (ArbGetNextAllocationRange.c)
 *     IrqArbIrqFromGsiv @ 0x1C00B6D8C (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindIrqInAlternatives @ 0x1C00B71CC (IrqArbpFindIrqInAlternatives.c)
 */

char __fastcall IrqArbGetNextAllocationRange(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int16 v7; // cx
  __int64 v8; // r9
  _DWORD *v9; // rdi
  void *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  char result; // al
  int BootConfig; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  _QWORD *v19; // r8
  int IrqInAlternatives; // eax
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-30h]
  __int64 v25; // [rsp+28h] [rbp-28h]
  int v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h] BYREF
  bool v28; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+98h] [rbp+48h] BYREF

  v2 = a2[4];
  v3 = a2;
  v26 = 0;
  v27 = 0LL;
  v29 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  v30 = 0;
  v28 = 0;
  if ( *(PVOID *)(v5 + 8) == AcpiDriverObject && (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 8LL) & 0x2000000) != 0 )
    return ArbGetNextAllocationRange(a1, a2);
  v6 = a2[5];
  if ( v6 )
    v7 = *(_WORD *)(*(_QWORD *)(v6 + 40) + 4LL);
  else
    v7 = *(_WORD *)(*(_QWORD *)(a2[7] + 40LL) + 4LL);
  if ( (v7 & 0x20) != 0 )
    goto LABEL_31;
  if ( (int)PcisuppIsPciDevice(v5, &v28) < 0 )
    return 0;
  if ( !v28 )
  {
LABEL_31:
    a2 = v3;
    return ArbGetNextAllocationRange(a1, a2);
  }
  v9 = (_DWORD *)v3[9];
  if ( !v3[5] )
    *v9 = 4096;
LABEL_9:
  v10 = &WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v25) = *v9;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0x14u,
              0xAu,
              (__int64)&WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids,
              v25);
            v10 = &WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids;
          }
          if ( *v9 != 4096 )
            break;
          if ( IrqArbGlobalDistributionDisposition == 1 )
          {
            *v9 = 4100;
          }
          else if ( IrqArbGlobalDistributionDisposition == 2 )
          {
            *v9 = 4098;
          }
          else
          {
            *v9 = 4097;
          }
        }
        if ( *v9 != 4097 )
          break;
        *v9 = 4099;
        v17 = LinkNodeCrackPrt(*(_QWORD *)(v3[4] + 32LL), &v27, &v26, 0);
        v10 = &WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids;
        if ( v17 >= 0 )
        {
          v10 = &WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids;
          if ( v27 )
          {
            v22 = *(unsigned int *)(v27 + 40);
            v10 = &WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids;
            if ( (_DWORD)v22 != -1 )
            {
              v30 = IrqArbIrqFromGsiv(v22, &WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids);
              if ( (int)IrqArbpFindIrqInAlternatives(v23, v3, v30, &v29) >= 0 )
                goto LABEL_41;
              goto LABEL_9;
            }
          }
        }
      }
      v11 = (unsigned int)(*v9 - 4098);
      if ( *v9 == 4098 )
      {
        *v9 = 4099;
        v30 = IrqArbGlobalStackingIrq;
        if ( (int)IrqArbpFindIrqInAlternatives(v11, v3, (unsigned int)IrqArbGlobalStackingIrq, &v29) >= 0 )
        {
          v3[2] = v21;
          goto LABEL_42;
        }
        goto LABEL_9;
      }
      if ( *v9 != 4099 )
        break;
      *v9 = 4100;
      BootConfig = IrqArbpFindBootConfig(a1, v3, &v30);
      v10 = &WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids;
      if ( BootConfig >= 0 )
      {
        IrqInAlternatives = IrqArbpFindIrqInAlternatives(v16, v3, v30, &v29);
        if ( IrqInAlternatives >= 0 )
        {
          v13 = v30;
LABEL_41:
          v3[2] = v13;
LABEL_42:
          v3[5] = v3[7] + ((unsigned __int64)v29 << 6);
          goto LABEL_18;
        }
        goto LABEL_9;
      }
    }
    if ( *v9 == 4100 )
    {
      *v9 = 4101;
      v12 = (_QWORD *)v3[7];
      v3[5] = v12;
      v3[2] = *v12;
      v13 = v12[1];
      goto LABEL_18;
    }
  }
  while ( *v9 != 4101 );
  v18 = *((_DWORD *)v3 + 12);
  v19 = (_QWORD *)(v3[5] + 64LL);
  v3[5] = v19;
  if ( (unsigned __int64)v19 >= v3[7] + ((unsigned __int64)v18 << 6) )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v18;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0xBu,
      (__int64)&WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids,
      v25);
    v19 = (_QWORD *)v3[5];
  }
  v3[2] = *v19;
  v13 = v19[1];
LABEL_18:
  v3[3] = v13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)v10, v13, v8, v24);
  result = 1;
  ++IrqArbPciAlternativeRotation;
  return result;
}
