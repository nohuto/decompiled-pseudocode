/*
 * XREFs of IrqArbpAssignIrqFromLinkNode @ 0x1C00B6FEC
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1C00967A8 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00027D0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C000F3B0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C005D9FC (WPP_RECORDER_SF_d.c)
 *     IcGetPossibleInput @ 0x1C0091B18 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C0096924 (IcIsInputValid.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B65E8 (LinkNodeGetPossibleResources.c)
 *     IrqArbIrqFromGsiv @ 0x1C00B6D8C (IrqArbIrqFromGsiv.c)
 */

__int64 __fastcall IrqArbpAssignIrqFromLinkNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  int PossibleResources; // ebx
  _DWORD *v5; // rdi
  unsigned int v6; // ebp
  int v7; // r11d
  int v8; // r12d
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned int v12; // ebx
  int v13; // eax
  unsigned __int64 v14; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+28h] [rbp-40h]
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  char v22; // [rsp+88h] [rbp+20h] BYREF

  v21 = a1;
  P[0] = 0LL;
  LOBYTE(v21) = 0;
  v22 = 0;
  PossibleResources = LinkNodeGetPossibleResources(a3, P, &v21);
  v5 = P[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x1Bu,
      (__int64)&WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids,
      P[0]);
  if ( PossibleResources < 0 )
    goto LABEL_14;
  v6 = v5[4];
  v7 = 0;
  if ( !v6 )
  {
LABEL_13:
    PossibleResources = -1073741275;
    goto LABEL_14;
  }
  v8 = (unsigned __int8)IrqArbPciAlternativeRotation;
  v9 = v21;
  while ( 1 )
  {
    v10 = (v8 + v7) % v6;
    v11 = 5 * v10;
    v12 = v5[5 * (unsigned int)v10 + 7];
    if ( v12 >= 0x10 || (v13 = (unsigned __int16)PciExclusionMask, !_bittest(&v13, v12)) )
    {
      if ( (int)IcGetPossibleInput(v12, v10, &v22) < 0 || v9 == v22 )
      {
        v14 = (unsigned int)v5[v11 + 7];
        if ( v14 >= a2[2] && v14 <= a2[3] )
          break;
      }
    }
    if ( ++v7 >= v6 )
      goto LABEL_13;
  }
  if ( !IcIsInputValid(v12) )
  {
    PossibleResources = -1073741823;
LABEL_14:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = PossibleResources;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x14u,
        0x1Du,
        (__int64)&WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids,
        v19);
    }
    goto LABEL_16;
  }
  v17 = (unsigned int)IrqArbIrqFromGsiv(v16);
  v18 = a2[5];
  *a2 = v17;
  a2[1] = v17;
  *(_QWORD *)(v18 + 16) = 1LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v5[v11 + 7];
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x1Cu,
      (__int64)&WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids,
      v19);
  }
  PossibleResources = 0;
LABEL_16:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)PossibleResources;
}
