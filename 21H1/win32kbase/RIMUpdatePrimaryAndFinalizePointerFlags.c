/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017FDEC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01794B0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C0167130 (RIMGetPointerInputType.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0168794 (RIMUpdatePrimaryDevice.c)
 *     rimFinalizePointerFlags @ 0x1C0182284 (rimFinalizePointerFlags.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1C0182748 (rimIsPointerDevicePrimaryContactDown.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018655C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0186B1C (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0186B4C (RIMCmIsContactSuppressed.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C01D1F4C (ApiSetIsPointerInputTypeRedirected.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v3; // r15
  _DWORD *v4; // r14
  int v5; // r12d
  __int64 active; // rax
  int v8; // esi
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rbx
  BOOL v18; // r15d
  int v19; // eax
  unsigned int v20; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v22; // rdx
  int v23; // r12d
  int v24; // r8d
  int v25; // ecx
  int v26; // r14d
  __int64 v27; // rcx
  int v28; // ebx
  __int128 v29; // [rsp+20h] [rbp-50h] BYREF
  __int64 v30; // [rsp+30h] [rbp-40h]
  __int128 v31; // [rsp+38h] [rbp-38h] BYREF
  __int64 v32; // [rsp+48h] [rbp-28h]
  _BYTE v33[32]; // [rsp+50h] [rbp-20h] BYREF
  int IsContactDeliveringPointerData; // [rsp+B8h] [rbp+48h]

  v2 = 0;
  v3 = a1;
  IsContactDeliveringPointerData = 0;
  v4 = 0LL;
  v5 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v31, a2);
  v8 = 1;
  v9 = *(_QWORD *)(active + 16);
  v29 = *(_OWORD *)active;
  v30 = v9;
  while ( 1 )
  {
    v10 = RIMCmActiveContactsEnd(v33, a2);
    v12 = *(_OWORD *)v10;
    v13 = *(_QWORD *)(v10 + 16);
    v14 = *(_QWORD *)v10;
    v32 = v13;
    v31 = v12;
    if ( (_QWORD)v29 == v14 )
    {
      result = DWORD2(v31);
      if ( DWORD2(v29) == DWORD2(v31) && v30 == v32 )
        break;
    }
    v16 = *(unsigned int *)(v30 + 2644);
    v17 = (_DWORD *)(v30 - 16);
    if ( (v16 & 2) == 0 && (v17[605] & 2) != 0 )
      v2 = 1;
    v18 = (v16 & 4) == 0 && (v17[605] & 4) != 0;
    v19 = v17[8];
    if ( (v19 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
      v19 = v17[8];
    }
    if ( (v19 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) )
      ++v5;
    if ( (v17[585] & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 960) && (v2 || v18) && !v4 && !(unsigned int)RIMCmIsContactSuppressed(v17) )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v17);
        v4 = v17;
      }
      v3 = a1;
      rimFinalizePointerFlags(a1, a2, v17);
    }
    else
    {
      v3 = a1;
    }
    RIMCmActiveContactsNext(a2, &v29);
    v2 = 0;
  }
  if ( v4 && (!v5 || v5 == 1 && IsContactDeliveringPointerData) )
  {
    if ( *(_QWORD *)(a2 + 960) )
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    v4[8] |= 8u;
    *(_QWORD *)(a2 + 960) = v4;
  }
  if ( *(_QWORD *)(a2 + 960) )
  {
    v20 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = ApiSetIsPointerInputTypeRedirected(v20);
    v22 = *(_QWORD *)(a2 + 960);
    v23 = IsPointerInputTypeRedirected;
    v24 = *(_DWORD *)(v22 + 2660);
    if ( (v24 & 2) != 0 || (v25 = 1, (*(_DWORD *)(v22 + 2420) & 2) == 0) )
      v25 = 0;
    if ( (v24 & 4) != 0 || (result = 1LL, (*(_DWORD *)(v22 + 2420) & 4) == 0) )
      result = 0LL;
    if ( v25 || (v26 = 0, (_DWORD)result) )
      v26 = 1;
    v27 = *(_QWORD *)(v3 + 480);
    if ( v27 )
    {
      v28 = RIMGetPointerInputType(v27);
      result = RIMGetPointerInputType(a2);
      if ( v28 == (_DWORD)result
        || (result = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(v3 + 480)), (_DWORD)result)
        || (result = rimIsPointerDevicePrimaryContactDown(a2), !(_DWORD)result) )
      {
        if ( !*(_DWORD *)(v3 + 488) || v23 )
          v8 = 0;
      }
    }
    if ( v26 && v8 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 960) + 2420LL) |= 0x2000u;
      return RIMUpdatePrimaryDevice(v3, a2);
    }
  }
  return result;
}
