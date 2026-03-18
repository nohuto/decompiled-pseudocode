/*
 * XREFs of HalpInterruptRemap @ 0x1403753B0
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x14039F064 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptConnect @ 0x1404B5E78 (HalpInterruptConnect.c)
 *     HalpIommuConfigureInterrupt @ 0x1404C68A0 (HalpIommuConfigureInterrupt.c)
 *     HaliAddInterruptRemapping @ 0x14074B420 (HaliAddInterruptRemapping.c)
 * Callees:
 *     HalpPopulateMsiMessages @ 0x140375174 (HalpPopulateMsiMessages.c)
 *     HalpInterruptFindBestRouting @ 0x1403759F0 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptLookupController @ 0x140375AD0 (HalpInterruptLookupController.c)
 *     HalpInterruptDestinationToTarget @ 0x140375B00 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptApplyOverrides @ 0x140375BF4 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x140375D2C (HalpInterruptGsiToLine.c)
 *     HalpInterruptModel @ 0x140378614 (HalpInterruptModel.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403C7394 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptRemapUpdateDeliveryMode @ 0x1403C9CB4 (HalpInterruptRemapUpdateDeliveryMode.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1404C0020 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpIrtAllocateIndex @ 0x140861054 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1408614C8 (HalpIrtFreeIndex.c)
 *     HalpHvMapDeviceInterrupt @ 0x1409A34F8 (HalpHvMapDeviceInterrupt.c)
 *     HalpHvMapDeviceMsiRange @ 0x1409A35D8 (HalpHvMapDeviceMsiRange.c)
 */

__int64 __fastcall HalpInterruptRemap(
        unsigned int a1,
        unsigned int a2,
        int a3,
        char a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int *v6; // rsi
  char v7; // al
  _DWORD *v8; // r14
  unsigned int *v9; // r15
  unsigned __int64 v10; // r10
  unsigned int v12; // edx
  unsigned int v13; // edi
  __int64 v14; // rcx
  int BestRouting; // ebx
  unsigned int v16; // eax
  unsigned int v17; // r13d
  int v18; // eax
  unsigned int v19; // r12d
  _DWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  int v29; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v30[3]; // [rsp+40h] [rbp-41h] BYREF
  __int128 v31; // [rsp+58h] [rbp-29h] BYREF
  __int128 v32; // [rsp+68h] [rbp-19h] BYREF
  __int128 v33; // [rsp+78h] [rbp-9h]
  __int64 v34; // [rsp+88h] [rbp+7h]
  int v36; // [rsp+E8h] [rbp+67h]
  char v37; // [rsp+F0h] [rbp+6Fh]

  v37 = a4;
  v36 = a3;
  v6 = a5;
  v30[0] = 1LL;
  v31 = 0LL;
  v29 = -1;
  v7 = *((_BYTE *)a5 + 8);
  v8 = a5 + 10;
  v9 = a5 + 6;
  v10 = (unsigned __int64)*((unsigned __int8 *)a5 + 4) >> 4;
  v12 = a1;
  v30[2] = a5 + 10;
  v30[1] = a5 + 6;
  v32 = 0LL;
  *((_BYTE *)&HalpHwToSwIrqlMap + v10) = v7;
  v13 = -1;
  HIDWORD(v31) = 16;
  v34 = 0LL;
  v14 = 1LL;
  BestRouting = -1073741823;
  LODWORD(v31) = v6[3];
  DWORD2(v31) = v6[4];
  LODWORD(v34) = v6[1];
  v16 = *v6;
  *(_QWORD *)&v32 = 0x1FFFFFFFFLL;
  v33 = 0LL;
  if ( !v16 )
  {
    v22 = v6[14];
    a5 = 0LL;
    if ( (int)HalpInterruptGsiToLine(v22, &a5) >= 0 )
    {
      HalpInterruptApplyOverrides(&a5, &v31, (char *)&v31 + 8);
      if ( (_DWORD)v31 == 3 )
      {
        BYTE4(v31) = 1;
        DWORD2(v31) = 0;
        LODWORD(v31) = 2;
      }
      else if ( (_DWORD)v31 == 4 )
      {
        BYTE4(v31) = 1;
        DWORD2(v31) = 0;
        LODWORD(v31) = 1;
      }
      else
      {
        BYTE4(v31) = 0;
      }
      v24 = HalpInterruptLookupController((unsigned int)a5);
      if ( v24 )
      {
        BestRouting = HalpInterruptDestinationToTarget(v23, v30, (char *)&v32 + 8);
        if ( BestRouting < 0 )
        {
LABEL_10:
          HalpInterruptLastProblem = 19;
          goto LABEL_42;
        }
        BestRouting = HalpInterruptFindBestRouting(&a5, v32, &v32);
        if ( BestRouting < 0 )
          return (unsigned int)BestRouting;
        HalpInterruptRemapUpdateDeliveryMode(v6, &v31);
        if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 && (unsigned int)HalpInterruptModel() == 1 )
        {
          if ( (*v8 & 0x40000000) == 0 )
          {
            v26 = HalpIrtAllocateIndex(&v29, 1LL, a1, a2, v6);
            v13 = v29;
            BestRouting = v26;
            if ( v26 < 0 )
              goto LABEL_7;
            *v8 ^= (v29 ^ *v8) & 0x3FFFFFFF;
          }
          HalpIommuUpdateRemappingTableEntry(0LL, *v8 & 0x3FFFFFFF, &v31);
          v27 = *v8 & 0x3FFFFFFF;
          DWORD2(v32) = 7;
          LODWORD(v33) = v27;
          v9 = v6 + 6;
        }
        if ( qword_140C4A388 )
        {
          BestRouting = HalpHvMapDeviceInterrupt(*(unsigned int *)(v24 + 232), v25, &v31, v9);
          if ( BestRouting < 0 )
            goto LABEL_7;
        }
        HIDWORD(v31) &= ~0x10u;
        BestRouting = HalpInterruptSetRemappedLineStateInternal(v24, &a5, &v31);
        if ( BestRouting < 0 )
        {
LABEL_43:
          v17 = a6;
          goto LABEL_44;
        }
        goto LABEL_41;
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
  v17 = a6;
  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 )
  {
    if ( (*v8 & 0x40000000) != 0 )
    {
      v13 = *v8 & 0x3FFFFFFF;
    }
    else
    {
      v18 = HalpIrtAllocateIndex(&v29, a6, v12, a2, v6);
      v13 = v29;
      BestRouting = v18;
      if ( v18 < 0 )
      {
LABEL_7:
        HalpInterruptLastProblem = 31;
        goto LABEL_42;
      }
    }
    BestRouting = HalpInterruptDestinationToTarget(v14, v30, (char *)&v32 + 8);
    if ( BestRouting < 0 )
      goto LABEL_10;
    HalpInterruptRemapUpdateDeliveryMode(v6, &v31);
    v19 = 0;
    if ( v17 )
    {
      v20 = v8;
      do
      {
        LOBYTE(v14) = 1;
        *v20 ^= (*v20 ^ (v19 + v13)) & 0x3FFFFFFF;
        v21 = *v20 & 0x3FFFFFFF;
        LODWORD(v34) = *(v20 - 9);
        HalpIommuUpdateRemappingTableEntry(v14, v21, &v31);
        ++v19;
        v20 += 22;
      }
      while ( v19 < v17 );
    }
    a3 = v36;
    a4 = v37;
  }
  if ( qword_140C4A388 )
  {
    BestRouting = HalpHvMapDeviceMsiRange(v14, v12, a3, a4, (__int64)v6, v17);
    if ( BestRouting < 0 )
      goto LABEL_7;
    goto LABEL_41;
  }
  BestRouting = HalpPopulateMsiMessages((__int64)v30, (__int64)v6, v17);
  if ( BestRouting >= 0 )
  {
LABEL_41:
    BestRouting = 0;
LABEL_42:
    if ( BestRouting >= 0 )
      return (unsigned int)BestRouting;
    goto LABEL_43;
  }
LABEL_44:
  if ( v13 != -1 && (*v8 & 0x40000000) == 0 )
    HalpIrtFreeIndex(v13, v17, *v6);
  return (unsigned int)BestRouting;
}
