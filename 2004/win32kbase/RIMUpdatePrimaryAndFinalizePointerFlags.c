/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017A0EC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0173180 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C0160DE0 (RIMGetPointerInputType.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0162444 (RIMUpdatePrimaryDevice.c)
 *     rimFinalizePointerFlags @ 0x1C017C584 (rimFinalizePointerFlags.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1C017CA48 (rimIsPointerDevicePrimaryContactDown.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018085C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01808F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0180944 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180E1C (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180E4C (RIMCmIsContactSuppressed.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C01CBFCC (ApiSetIsPointerInputTypeRedirected.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rbx
  BOOL v21; // r15d
  int v22; // eax
  unsigned int v23; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v25; // rdx
  int v26; // r12d
  int v27; // r8d
  int v28; // ecx
  int v29; // r14d
  __int64 v30; // rcx
  int v31; // ebx
  __int128 v32; // [rsp+20h] [rbp-50h] BYREF
  __int64 v33; // [rsp+30h] [rbp-40h]
  __int128 v34; // [rsp+38h] [rbp-38h] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h]
  _BYTE v36[32]; // [rsp+50h] [rbp-20h] BYREF
  int IsContactDeliveringPointerData; // [rsp+B8h] [rbp+48h]

  v2 = 0;
  v3 = a1;
  IsContactDeliveringPointerData = 0;
  v4 = 0LL;
  v5 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v34, a2);
  v8 = 1;
  v9 = *(_QWORD *)(active + 16);
  v32 = *(_OWORD *)active;
  v33 = v9;
  while ( 1 )
  {
    v10 = RIMCmActiveContactsEnd(v36, a2);
    v15 = *(_OWORD *)v10;
    v16 = *(_QWORD *)(v10 + 16);
    v17 = *(_QWORD *)v10;
    v35 = v16;
    v34 = v15;
    if ( (_QWORD)v32 == v17 )
    {
      result = DWORD2(v34);
      if ( DWORD2(v32) == DWORD2(v34) && v33 == v35 )
        break;
    }
    v19 = *(unsigned int *)(v33 + 2644);
    v20 = (_DWORD *)(v33 - 16);
    LOBYTE(v11) = 2;
    if ( (v19 & 2) == 0 && (v20[605] & 2) != 0 )
      v2 = 1;
    v21 = (v19 & 4) == 0 && (v20[605] & 4) != 0;
    v22 = v20[8];
    if ( (v22 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v11, v13, v14);
      v22 = v20[8];
    }
    if ( (v22 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v11, v13, v14);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v20) )
      ++v5;
    if ( (v20[585] & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 960) && (v2 || v21) && !v4 && !(unsigned int)RIMCmIsContactSuppressed(v20) )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v20);
        v4 = v20;
      }
      v3 = a1;
      rimFinalizePointerFlags(a1, a2, v20);
    }
    else
    {
      v3 = a1;
    }
    RIMCmActiveContactsNext(a2, &v32);
    v2 = 0;
  }
  if ( v4 && (!v5 || v5 == 1 && IsContactDeliveringPointerData) )
  {
    if ( *(_QWORD *)(a2 + 960) )
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
    v4[8] |= 8u;
    *(_QWORD *)(a2 + 960) = v4;
  }
  if ( *(_QWORD *)(a2 + 960) )
  {
    v23 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = ApiSetIsPointerInputTypeRedirected(v23);
    v25 = *(_QWORD *)(a2 + 960);
    v26 = IsPointerInputTypeRedirected;
    v27 = *(_DWORD *)(v25 + 2660);
    if ( (v27 & 2) != 0 || (v28 = 1, (*(_DWORD *)(v25 + 2420) & 2) == 0) )
      v28 = 0;
    if ( (v27 & 4) != 0 || (result = 1LL, (*(_DWORD *)(v25 + 2420) & 4) == 0) )
      result = 0LL;
    if ( v28 || (v29 = 0, (_DWORD)result) )
      v29 = 1;
    v30 = *(_QWORD *)(v3 + 480);
    if ( v30 )
    {
      v31 = RIMGetPointerInputType(v30);
      result = RIMGetPointerInputType(a2);
      if ( v31 == (_DWORD)result
        || (result = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(v3 + 480)), (_DWORD)result)
        || (result = rimIsPointerDevicePrimaryContactDown(a2), !(_DWORD)result) )
      {
        if ( !*(_DWORD *)(v3 + 488) || v26 )
          v8 = 0;
      }
    }
    if ( v29 && v8 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 960) + 2420LL) |= 0x2000u;
      return RIMUpdatePrimaryDevice(v3, a2);
    }
  }
  return result;
}
