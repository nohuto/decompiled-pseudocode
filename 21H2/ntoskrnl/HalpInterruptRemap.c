/*
 * XREFs of HalpInterruptRemap @ 0x1403D57DC
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptConnect @ 0x140507ED8 (HalpInterruptConnect.c)
 *     HalpIommuConfigureInterrupt @ 0x140517DCC (HalpIommuConfigureInterrupt.c)
 *     HaliAddInterruptRemapping @ 0x140852B70 (HaliAddInterruptRemapping.c)
 * Callees:
 *     HalpInterruptFindBestRouting @ 0x140252050 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 *     HalpInterruptDestinationToTarget @ 0x140252164 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptApplyOverrides @ 0x140252258 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x140252380 (HalpInterruptGsiToLine.c)
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403D59D4 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptRemapUpdateDeliveryMode @ 0x1403D5A7C (HalpInterruptRemapUpdateDeliveryMode.c)
 *     HalpPopulateMsiMessages @ 0x1403D5A9C (HalpPopulateMsiMessages.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x140510F68 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 *     HalpIrtAllocateIndex @ 0x140909B14 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x140909FA0 (HalpIrtFreeIndex.c)
 *     HalpHvMapDeviceInterrupt @ 0x140A61798 (HalpHvMapDeviceInterrupt.c)
 *     HalpHvMapDeviceMsiRange @ 0x140A61878 (HalpHvMapDeviceMsiRange.c)
 */

__int64 __fastcall HalpInterruptRemap(unsigned int a1, __int64 a2, int a3, char a4, unsigned int *a5, unsigned int a6)
{
  unsigned int *v6; // r15
  char v7; // al
  _DWORD *v8; // rsi
  unsigned int *v9; // r14
  unsigned __int64 v10; // rdx
  __int128 *v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // r13d
  int BestRouting; // ebx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  ULONG_PTR *v19; // r12
  __int64 v20; // rdx
  int v21; // eax
  int v23; // eax
  int v24; // r8d
  int v25; // edx
  unsigned int v26; // r12d
  _DWORD *v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+28h] [rbp-79h]
  int v33; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v34[24]; // [rsp+50h] [rbp-51h] BYREF
  __int128 v35; // [rsp+68h] [rbp-39h] BYREF
  __int128 v36; // [rsp+78h] [rbp-29h] BYREF
  __int128 v37; // [rsp+88h] [rbp-19h]
  __int64 v38; // [rsp+98h] [rbp-9h]
  int v40; // [rsp+108h] [rbp+67h]
  char v41; // [rsp+110h] [rbp+6Fh]

  v41 = a4;
  v40 = a3;
  v6 = a5;
  *(_QWORD *)v34 = 1LL;
  v35 = 0LL;
  v33 = -1;
  v7 = *((_BYTE *)a5 + 8);
  v8 = a5 + 10;
  v9 = a5 + 6;
  v10 = (unsigned __int64)*((unsigned __int8 *)a5 + 4) >> 4;
  v36 = 0LL;
  v12 = &HalpHwToSwIrqlMap;
  *(_OWORD *)&v34[4] = 0LL;
  *((_BYTE *)&HalpHwToSwIrqlMap + v10) = v7;
  v13 = -1;
  *(_QWORD *)&v36 = 0x1FFFFFFFFLL;
  v14 = a6;
  BestRouting = -1073741823;
  v38 = 0LL;
  LODWORD(v35) = v6[3];
  DWORD2(v35) = v6[4];
  LODWORD(v38) = v6[1];
  v16 = *v6;
  *(_QWORD *)&v34[16] = v8;
  *(_QWORD *)&v34[8] = v9;
  HIDWORD(v35) = 16;
  v37 = 0LL;
  if ( v16 )
  {
    if ( v16 != 3 )
    {
      HalpInterruptSetProblemEx(0, 19, 2, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3003);
      return (unsigned int)BestRouting;
    }
    if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x100) != 0 )
    {
      if ( (*v8 & 0x40000000) != 0 )
      {
        v13 = *v8 & 0x3FFFFFFF;
      }
      else
      {
        v23 = HalpIrtAllocateIndex(&v33, a6, a1);
        BestRouting = v23;
        if ( v23 < 0 )
        {
          HalpInterruptSetProblemEx(
            0,
            31,
            v23,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
            2754);
          goto LABEL_24;
        }
        v13 = v33;
      }
      BestRouting = HalpInterruptDestinationToTarget((__int64)v12, (__int64)v34, (__int64)&v36 + 8);
      if ( BestRouting < 0 )
      {
        v32 = 2770;
        v24 = 1;
LABEL_33:
        v25 = 19;
LABEL_35:
        HalpInterruptSetProblemEx(0, v25, v24, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v32);
        goto LABEL_25;
      }
      HalpInterruptRemapUpdateDeliveryMode(v6, &v35);
      v26 = 0;
      if ( v14 )
      {
        v27 = v8;
        do
        {
          LOBYTE(v12) = 1;
          *v27 ^= (*v27 ^ (v26 + v13)) & 0x3FFFFFFF;
          v28 = *v27 & 0x3FFFFFFF;
          LODWORD(v38) = *(v27 - 9);
          HalpIommuUpdateRemappingTableEntry(v12, v28, &v35);
          ++v26;
          v27 += 22;
        }
        while ( v26 < v14 );
      }
      a3 = v40;
      a4 = v41;
    }
    if ( qword_140C4C4A8 )
    {
      v29 = HalpHvMapDeviceMsiRange((_DWORD)v12, v10, a3, a4, (__int64)v6, v14);
      BestRouting = v29;
      if ( v29 < 0 )
      {
        v32 = 2803;
LABEL_34:
        v24 = v29;
        v25 = 31;
        goto LABEL_35;
      }
      return 0;
    }
    v21 = HalpPopulateMsiMessages(v34, v6, v14);
    goto LABEL_12;
  }
  v17 = v6[14];
  a5 = 0LL;
  if ( (int)HalpInterruptGsiToLine(v17, &a5) < 0 )
  {
    HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2846);
    return (unsigned int)-1073741811;
  }
  HalpInterruptApplyOverrides(&a5, &v35, (_DWORD *)&v35 + 2);
  if ( (_DWORD)v35 == 3 )
  {
    DWORD2(v35) = 0;
    BYTE4(v35) = 1;
    LODWORD(v35) = 2;
  }
  else if ( (_DWORD)v35 == 4 )
  {
    DWORD2(v35) = 0;
    BYTE4(v35) = 1;
    LODWORD(v35) = 1;
  }
  else
  {
    BYTE4(v35) = 0;
  }
  v19 = HalpInterruptLookupController((int)a5);
  if ( !v19 )
  {
    HalpInterruptSetProblemEx(0, 17, 1, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2891);
    return (unsigned int)-1073741811;
  }
  BestRouting = HalpInterruptDestinationToTarget(v18, (__int64)v34, (__int64)&v36 + 8);
  if ( BestRouting < 0 )
  {
    v32 = 2906;
    v24 = 1;
    goto LABEL_33;
  }
  BestRouting = HalpInterruptFindBestRouting((unsigned int *)&a5, v36);
  if ( BestRouting < 0 )
    return (unsigned int)BestRouting;
  HalpInterruptRemapUpdateDeliveryMode(v6, &v35);
  if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x100) == 0 || (unsigned int)HalpInterruptModel() != 1 )
    goto LABEL_10;
  if ( (*v8 & 0x40000000) == 0 )
  {
    v30 = HalpIrtAllocateIndex(&v33, 1LL, a1);
    BestRouting = v30;
    if ( v30 >= 0 )
    {
      v13 = v33;
      *v8 ^= (v33 ^ *v8) & 0x3FFFFFFF;
      goto LABEL_51;
    }
    HalpInterruptSetProblemEx(0, 31, v30, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2947);
LABEL_24:
    v13 = v33;
    goto LABEL_25;
  }
LABEL_51:
  HalpIommuUpdateRemappingTableEntry(0LL, *v8 & 0x3FFFFFFF, &v35);
  v31 = *v8 & 0x3FFFFFFF;
  DWORD2(v36) = 7;
  LODWORD(v37) = v31;
  v9 = v6 + 6;
LABEL_10:
  if ( qword_140C4C4A8 )
  {
    v29 = HalpHvMapDeviceInterrupt(*((unsigned int *)v19 + 60), v20, &v35, v9);
    BestRouting = v29;
    if ( v29 < 0 )
    {
      v32 = 2978;
      goto LABEL_34;
    }
  }
  HIDWORD(v35) &= ~0x10u;
  v21 = HalpInterruptSetRemappedLineStateInternal(v19, &a5, &v35);
LABEL_12:
  BestRouting = v21;
  if ( v21 >= 0 )
    return 0;
LABEL_25:
  if ( v13 != -1 && (*v8 & 0x40000000) == 0 )
    HalpIrtFreeIndex(v13, v14, *v6);
  return (unsigned int)BestRouting;
}
