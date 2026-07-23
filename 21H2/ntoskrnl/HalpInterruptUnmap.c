/*
 * XREFs of HalpInterruptUnmap @ 0x1407619F8
 * Callers:
 *     HalpTimerUnmapInterrupt @ 0x1404C07C8 (HalpTimerUnmapInterrupt.c)
 *     HaliRemoveInterruptRemapping @ 0x1407619D0 (HaliRemoveInterruptRemapping.c)
 * Callees:
 *     HalpInterruptIsHvLineBasedIntRemappingSupported @ 0x14036D920 (HalpInterruptIsHvLineBasedIntRemappingSupported.c)
 *     xHalUnmaskInterrupt @ 0x14036D940 (xHalUnmaskInterrupt.c)
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpInterruptIsRemappingRequired @ 0x140378B8C (HalpInterruptIsRemappingRequired.c)
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpSetIrtEntry @ 0x1404D17B8 (HalpSetIrtEntry.c)
 *     HalpInterruptSetProblemEx @ 0x1404D1CC8 (HalpInterruptSetProblemEx.c)
 *     HalpIrtFreeIndex @ 0x140865F78 (HalpIrtFreeIndex.c)
 *     HalpHvUnmapDeviceInterrupt @ 0x1409A8264 (HalpHvUnmapDeviceInterrupt.c)
 *     HalpHvUnmapDeviceMsiRange @ 0x1409A82D0 (HalpHvUnmapDeviceMsiRange.c)
 */

__int64 __fastcall HalpInterruptUnmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int *v6; // rdi
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 result; // rax
  __int64 v16; // rcx
  ULONG_PTR *v17; // r14
  _QWORD *Lines; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  int v21; // edx
  int v22; // r8d
  unsigned int v23; // ebx
  _DWORD *v24; // rsi
  __int64 v25; // r14
  unsigned int v26; // ecx
  __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned int v29; // [rsp+20h] [rbp-50h]
  __int128 v30; // [rsp+30h] [rbp-40h] BYREF
  __int128 v31; // [rsp+40h] [rbp-30h]
  __int128 v32; // [rsp+50h] [rbp-20h]
  __int64 v33; // [rsp+60h] [rbp-10h]

  v6 = a5;
  v33 = 0LL;
  v30 = 0LL;
  v7 = a5 + 1;
  v8 = a5[3];
  *((_QWORD *)&v30 + 1) = a5[4];
  v9 = a5[1];
  v31 = 0LL;
  *(_QWORD *)&v31 = 0x1FFFFFFFFLL;
  LODWORD(v33) = v9;
  v10 = *a5;
  LODWORD(v30) = v8;
  v32 = 0LL;
  if ( v10 )
  {
    if ( v10 == 3 )
    {
      if ( HalpInterruptIsHvLineBasedIntRemappingSupported() )
        HalpHvUnmapDeviceMsiRange(v12, v11, v13, v14, (__int64)v6);
      if ( HalpInterruptIsRemappingRequired() )
      {
        v23 = a6;
        if ( a6 )
        {
          v24 = v6 + 10;
          v25 = a6;
          do
          {
            LODWORD(v33) = *v7;
            HalpSetIrtEntry(1, v24, (__int64)&v30);
            v24 += 22;
            v7 += 22;
            --v25;
          }
          while ( v25 );
        }
        v26 = v6[10];
        if ( (v26 & 0x40000000) == 0 )
          HalpIrtFreeIndex(v26 & 0x3FFFFFFF, v23, *v6);
      }
      return xHalUnmaskInterrupt();
    }
    v21 = 19;
    v29 = 3219;
    v22 = 2;
    goto LABEL_24;
  }
  v16 = a5[14];
  a5 = 0LL;
  if ( (int)HalpInterruptGsiToLine(v16, &a5) < 0 )
  {
    v22 = 0;
    v29 = 3133;
    v21 = 18;
LABEL_24:
    v27 = 0LL;
    return HalpInterruptSetProblemEx(v27, v21, v22, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v29);
  }
  if ( v8 - 3 <= 1 )
  {
    DWORD2(v30) = 0;
    BYTE4(v30) = 1;
  }
  v17 = HalpInterruptLookupController((int)a5);
  if ( !v17 )
  {
    v21 = 17;
    v29 = 3165;
    v22 = 1;
    goto LABEL_24;
  }
  Lines = HalpInterruptFindLines((unsigned int *)&a5);
  v20 = Lines;
  if ( !Lines )
  {
    v22 = 0;
    v29 = 3173;
    v27 = (__int64)v17;
    v21 = 18;
    return HalpInterruptSetProblemEx(v27, v21, v22, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v29);
  }
  if ( qword_140C4A1E8 )
  {
    *(_DWORD *)(Lines[5] + 12LL) |= 0x10u;
    HalpHvUnmapDeviceInterrupt(*((unsigned int *)v17 + 58), v19, Lines[5]);
    *(_DWORD *)(v20[5] + 12LL) &= ~0x10u;
  }
  if ( HalpInterruptIsRemappingRequired() )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
    {
      LODWORD(v33) = *v7;
      HalpSetIrtEntry(0, v6 + 10, (__int64)&v30);
      v28 = v6[10];
      if ( (v28 & 0x40000000) == 0 )
        HalpIrtFreeIndex(v28 & 0x3FFFFFFF, 1LL, *v6);
    }
  }
  result = v20[6];
  *(_BYTE *)(result + 12) = 0;
  return result;
}
