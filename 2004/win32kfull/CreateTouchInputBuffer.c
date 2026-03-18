/*
 * XREFs of CreateTouchInputBuffer @ 0x1C01DE6B8
 * Callers:
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DC9E4 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 * Callees:
 *     memset @ 0x1C015C000 (memset.c)
 */

_BOOL8 __fastcall CreateTouchInputBuffer(__int64 a1, ULONG a2, __int64 a3, int a4, ULONG a5)
{
  __int64 v5; // rax
  __int64 v6; // r15
  void *Report; // rdi
  ULONG ReportLength; // esi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  unsigned int v12; // edx
  USHORT v13; // bx
  __int64 v14; // rcx
  __int128 *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int16 v24; // r12
  int v25; // r15d
  char v26; // r15
  ULONG v27; // eax
  USHORT UsageList[2]; // [rsp+48h] [rbp-91h] BYREF
  ULONG UsageLength; // [rsp+4Ch] [rbp-8Dh] BYREF
  ULONG v31; // [rsp+50h] [rbp-89h] BYREF
  ULONG v32; // [rsp+54h] [rbp-85h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-81h]
  __int128 UsageValue; // [rsp+68h] [rbp-71h]
  __int128 v35; // [rsp+78h] [rbp-61h]
  __int128 v36; // [rsp+88h] [rbp-51h]
  __int128 v37; // [rsp+98h] [rbp-41h]
  __int128 v38; // [rsp+A8h] [rbp-31h]
  __int128 v39; // [rsp+B8h] [rbp-21h]
  __int128 v40; // [rsp+C8h] [rbp-11h]
  __int128 v41; // [rsp+D8h] [rbp-1h]
  __int128 v42; // [rsp+E8h] [rbp+Fh]
  USHORT v43; // [rsp+138h] [rbp+5Fh] BYREF
  ULONG v44; // [rsp+140h] [rbp+67h]
  __int64 v45; // [rsp+148h] [rbp+6Fh]

  v45 = a3;
  v44 = a2;
  *(_DWORD *)UsageList = 3276866;
  v43 = 207;
  v5 = *(_QWORD *)(a1 + 464);
  v6 = a3;
  UsageLength = 2;
  v31 = 1;
  v32 = 1;
  Report = *(void **)(v5 + 24);
  ReportLength = *(unsigned __int16 *)(v5 + 44);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v5 + 16);
  memset(Report, 0, *(unsigned __int16 *)(v5 + 44));
  v12 = a2 - 1;
  v13 = 1;
  v33 = v12;
  do
  {
    v14 = a4 + (unsigned int)(unsigned __int16)(v13 - 1);
    if ( (unsigned int)v14 > v12 )
      break;
    v15 = (__int128 *)(v6 + 144 * v14);
    v16 = v15[1];
    UsageValue = *v15;
    v17 = v15[2];
    v35 = v16;
    v18 = v15[3];
    v36 = v17;
    v19 = v15[4];
    v37 = v18;
    v20 = v15[5];
    v38 = v19;
    v21 = v15[6];
    v39 = v20;
    v22 = v15[7];
    v40 = v21;
    v23 = v15[8];
    v41 = v22;
    v42 = v23;
    if ( HidP_SetUsageValue(
           HidP_Input,
           0xDu,
           v13,
           0x51u,
           DWORD1(UsageValue),
           PreparsedData,
           (PCHAR)Report,
           ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v13, 0x30u, v36, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v13, 0x31u, DWORD1(v36), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    v24 = WORD6(UsageValue);
    v25 = BYTE12(UsageValue) & 4;
    if ( (BYTE12(UsageValue) & 4) != 0
      && HidP_SetUsages(HidP_Input, 0xDu, v13, UsageList, &UsageLength, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v24 & 2) != 0
      && !v25
      && HidP_SetUsages(HidP_Input, 0xDu, v13, &UsageList[1], &v31, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( v24 < 0 && HidP_SetUsages(HidP_Input, 0xFF00u, v13, &v43, &v32, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    v26 = BYTE4(v40);
    if ( (BYTE4(v40) & 4) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v13, 0x30u, HIDWORD(v42), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v26 & 2) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v13, 0x3Fu, DWORD2(v42), PreparsedData, (PCHAR)Report, ReportLength) < 0
      || (v26 & 1) != 0
      && (HidP_SetUsageValue(
            HidP_Input,
            0xDu,
            v13,
            0x48u,
            abs32(v41 - DWORD2(v40)),
            PreparsedData,
            (PCHAR)Report,
            ReportLength) < 0
       || HidP_SetUsageValue(
            HidP_Input,
            0xDu,
            v13,
            0x49u,
            abs32(DWORD1(v41) - HIDWORD(v40)),
            PreparsedData,
            (PCHAR)Report,
            ReportLength) < 0) )
    {
      return 0LL;
    }
    v12 = v33;
    ++v13;
    v6 = v45;
  }
  while ( (unsigned __int16)(v13 - 1) < 4u );
  v27 = 0;
  if ( !a4 )
    v27 = v44;
  return HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x54u, v27, PreparsedData, (PCHAR)Report, ReportLength) >= 0
      && (!a5 || HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x56u, a5, PreparsedData, (PCHAR)Report, ReportLength) >= 0);
}
