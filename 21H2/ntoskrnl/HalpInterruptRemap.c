/*
 * XREFs of HalpInterruptRemap @ 0x140378130
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x1403A26D4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptConnect @ 0x1404BB678 (HalpInterruptConnect.c)
 *     HalpIommuConfigureInterrupt @ 0x1404CBEC0 (HalpIommuConfigureInterrupt.c)
 *     HaliAddInterruptRemapping @ 0x140762DD0 (HaliAddInterruptRemapping.c)
 * Callees:
 *     HalpPopulateMsiMessages @ 0x140377EF4 (HalpPopulateMsiMessages.c)
 *     HalpInterruptFindBestRouting @ 0x140378770 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpInterruptDestinationToTarget @ 0x140378880 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptApplyOverrides @ 0x140378974 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403CB924 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptRemapUpdateDeliveryMode @ 0x1403CE22C (HalpInterruptRemapUpdateDeliveryMode.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1404C5874 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpIrtAllocateIndex @ 0x140865AE4 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x140865F78 (HalpIrtFreeIndex.c)
 *     HalpHvMapDeviceInterrupt @ 0x1409A8098 (HalpHvMapDeviceInterrupt.c)
 *     HalpHvMapDeviceMsiRange @ 0x1409A8178 (HalpHvMapDeviceMsiRange.c)
 */

__int64 __fastcall HalpInterruptRemap(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int *v6; // r15
  char v7; // al
  _DWORD *v8; // r14
  unsigned int *v9; // rsi
  unsigned __int64 v10; // r10
  __int128 *v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // r13d
  int BestRouting; // ebx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // r12d
  _DWORD *v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  int v29; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v30[2]; // [rsp+50h] [rbp-51h] BYREF
  unsigned int *v31; // [rsp+58h] [rbp-49h]
  unsigned int *v32; // [rsp+60h] [rbp-41h]
  __int128 v33; // [rsp+68h] [rbp-39h] BYREF
  __int128 v34; // [rsp+78h] [rbp-29h] BYREF
  __int128 v35; // [rsp+88h] [rbp-19h]
  __int64 v36; // [rsp+98h] [rbp-9h]
  __int64 v39; // [rsp+108h] [rbp+67h]
  char v40; // [rsp+110h] [rbp+6Fh]

  v40 = a4;
  v39 = a3;
  v6 = a5;
  v30[1] = 0;
  v33 = 0LL;
  v29 = -1;
  v7 = *((_BYTE *)a5 + 8);
  v8 = a5 + 10;
  v9 = a5 + 6;
  v10 = (unsigned __int64)*((unsigned __int8 *)a5 + 4) >> 4;
  v34 = 0LL;
  v12 = &HalpHwToSwIrqlMap;
  LODWORD(v34) = -1;
  v13 = -1;
  v32 = a5 + 10;
  v14 = a6;
  BestRouting = -1073741823;
  *((_BYTE *)&HalpHwToSwIrqlMap + v10) = v7;
  v36 = 0LL;
  LODWORD(v33) = v6[3];
  DWORD2(v33) = v6[4];
  LODWORD(v36) = v6[1];
  v16 = *v6;
  v30[0] = 1;
  v31 = v9;
  HIDWORD(v33) = 16;
  DWORD1(v34) = 1;
  v35 = 0LL;
  if ( !v16 )
  {
    v22 = v6[14];
    a5 = 0LL;
    if ( (int)HalpInterruptGsiToLine(v22, &a5) >= 0 )
    {
      HalpInterruptApplyOverrides(&a5, &v33, (char *)&v33 + 8);
      if ( (_DWORD)v33 == 3 )
      {
        DWORD2(v33) = 0;
        BYTE4(v33) = 1;
        LODWORD(v33) = 2;
      }
      else if ( (_DWORD)v33 == 4 )
      {
        DWORD2(v33) = 0;
        BYTE4(v33) = 1;
        LODWORD(v33) = 1;
      }
      else
      {
        BYTE4(v33) = 0;
      }
      v24 = HalpInterruptLookupController((unsigned int)a5);
      if ( v24 )
      {
        BestRouting = HalpInterruptDestinationToTarget(v23, v30, (char *)&v34 + 8);
        if ( BestRouting < 0 )
        {
LABEL_10:
          HalpInterruptLastProblem = 19;
          goto LABEL_42;
        }
        BestRouting = HalpInterruptFindBestRouting(&a5, v34, &v34);
        if ( BestRouting < 0 )
          return (unsigned int)BestRouting;
        HalpInterruptRemapUpdateDeliveryMode(v6, &v33);
        if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 && (unsigned int)HalpInterruptModel() == 1 )
        {
          if ( (*v8 & 0x40000000) == 0 )
          {
            v26 = HalpIrtAllocateIndex(&v29, 1LL, a1, a2, v39, v40, v6);
            v13 = v29;
            BestRouting = v26;
            if ( v26 < 0 )
              goto LABEL_7;
            *v8 ^= (v29 ^ *v8) & 0x3FFFFFFF;
          }
          HalpIommuUpdateRemappingTableEntry(0LL, *v8 & 0x3FFFFFFF, &v33);
          v27 = *v8 & 0x3FFFFFFF;
          DWORD2(v34) = 7;
          LODWORD(v35) = v27;
          v9 = v6 + 6;
        }
        if ( qword_140C4A1E8 )
        {
          BestRouting = HalpHvMapDeviceInterrupt(*(unsigned int *)(v24 + 232), v25, &v33, v9);
          if ( BestRouting < 0 )
            goto LABEL_7;
        }
        HIDWORD(v33) &= ~0x10u;
        v21 = HalpInterruptSetRemappedLineStateInternal(v24, &a5, &v33);
        goto LABEL_40;
      }
      HalpInterruptLastProblem = 17;
    }
    else
    {
      HalpInterruptLastProblem = 18;
    }
    return (unsigned int)-1073741811;
  }
  if ( v16 != 3 )
  {
    HalpInterruptLastProblem = 19;
    return (unsigned int)BestRouting;
  }
  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 )
  {
    if ( (*v8 & 0x40000000) != 0 )
    {
      v13 = *v8 & 0x3FFFFFFF;
    }
    else
    {
      v17 = HalpIrtAllocateIndex(&v29, v14, a1, a2, a3, a4, v6);
      v13 = v29;
      BestRouting = v17;
      if ( v17 < 0 )
      {
LABEL_7:
        HalpInterruptLastProblem = 31;
        goto LABEL_42;
      }
    }
    BestRouting = HalpInterruptDestinationToTarget(v12, v30, (char *)&v34 + 8);
    if ( BestRouting < 0 )
      goto LABEL_10;
    HalpInterruptRemapUpdateDeliveryMode(v6, &v33);
    v18 = 0;
    if ( v14 )
    {
      v19 = v8;
      do
      {
        LOBYTE(v12) = 1;
        *v19 ^= (*v19 ^ (v18 + v13)) & 0x3FFFFFFF;
        v20 = *v19 & 0x3FFFFFFF;
        LODWORD(v36) = *(v19 - 9);
        HalpIommuUpdateRemappingTableEntry(v12, v20, &v33);
        ++v18;
        v19 += 22;
      }
      while ( v18 < v14 );
    }
    LODWORD(a3) = v39;
    a4 = v40;
  }
  if ( qword_140C4A1E8 )
  {
    BestRouting = HalpHvMapDeviceMsiRange((_DWORD)v12, a2, a3, a4, (__int64)v6, v14);
    if ( BestRouting < 0 )
      goto LABEL_7;
    goto LABEL_41;
  }
  v21 = HalpPopulateMsiMessages((__int64)v30, (__int64)v6, v14);
LABEL_40:
  BestRouting = v21;
  if ( v21 >= 0 )
  {
LABEL_41:
    BestRouting = 0;
LABEL_42:
    if ( BestRouting >= 0 )
      return (unsigned int)BestRouting;
  }
  if ( v13 != -1 && (*v8 & 0x40000000) == 0 )
    HalpIrtFreeIndex(v13, v14, *v6);
  return (unsigned int)BestRouting;
}
