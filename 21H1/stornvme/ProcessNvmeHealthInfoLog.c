/*
 * XREFs of ProcessNvmeHealthInfoLog @ 0x1C00035C0
 * Callers:
 *     QueryProtocolInfoCompletion @ 0x1C0001640 (QueryProtocolInfoCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0017D20 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetLunExtension @ 0x1C0003660 (GetLunExtension.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

char __fastcall ProcessNvmeHealthInfoLog(__int64 a1, __int64 a2, char *a3, int a4)
{
  __int64 SrbExtension; // rax
  __int64 LunExtension; // r14
  char v9; // al
  char v10; // si
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+70h] [rbp-B8h]
  __int64 v15; // [rsp+78h] [rbp-B0h]
  __int64 v16; // [rsp+80h] [rbp-A8h]
  __int64 v17; // [rsp+88h] [rbp-A0h]

  SrbExtension = GetSrbExtension(a2);
  LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
  v9 = *a3;
  v10 = 0;
  if ( *a3 )
  {
    if ( v9 != *(_BYTE *)(a1 + 19) )
    {
      *(_BYTE *)(a1 + 19) = v9;
      StorPortExtendedFunction(
        87LL,
        a1,
        LunExtension,
        2LL,
        a4,
        L"Health Status-Critical Warning",
        32LL,
        2,
        0,
        0LL,
        L"CriticalWarning",
        (unsigned __int8)*a3,
        L"Spare Below Threshold",
        *a3 & 1,
        L"Temperature Threshold",
        ((unsigned __int8)*a3 >> 1) & 1,
        L"NVM Reliability Degraded",
        ((unsigned __int8)*a3 >> 2) & 1);
      if ( a4 == 9 && (*a3 & 2) != *a3 )
      {
        v10 = 1;
        *(_DWORD *)(a1 + 3984) = *(_DWORD *)(a1 + 3984) & ~*(unsigned __int8 *)(a1 + 19) | 2;
      }
    }
  }
  v11 = (unsigned __int8)a3[5];
  if ( (unsigned __int8)v11 >= 0x5Fu && !*(_BYTE *)(a1 + 20) )
  {
    StorPortExtendedFunction(
      85LL,
      a1,
      LunExtension,
      2LL,
      a4,
      L"Health Status-Endurance Warning",
      32LL,
      3,
      0,
      0LL,
      L"Percentage Used",
      v11,
      L"Endurance Threshold Limit",
      95LL,
      v14,
      v15,
      v16,
      v17);
    *(_BYTE *)(a1 + 20) = 1;
  }
  v12 = (unsigned __int8)a3[3];
  if ( (unsigned __int8)v12 <= 2u && !*(_BYTE *)(a1 + 21) )
  {
    StorPortExtendedFunction(
      85LL,
      a1,
      LunExtension,
      2LL,
      a4,
      L"Health Status-Available Spare Warning",
      32LL,
      3,
      0,
      0LL,
      L"Available Spare",
      v12,
      L"Available Spare Threshold Limit",
      2LL,
      v14,
      v15,
      v16,
      v17);
    *(_BYTE *)(a1 + 21) = 1;
  }
  return v10;
}
