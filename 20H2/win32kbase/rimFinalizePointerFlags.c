/*
 * XREFs of rimFinalizePointerFlags @ 0x1C017A154
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0177CBC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     rimPenButtonsPolicyApply @ 0x1C017A84C (rimPenButtonsPolicyApply.c)
 *     RIMCmGetButtonContact @ 0x1C017E994 (RIMCmGetButtonContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C017E9B0 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C017E9EC (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C017EA1C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C017EA68 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  int v5; // r10d
  bool v8; // si
  bool v9; // di
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // r8
  __int64 v21; // r9

  v3 = a3[605];
  v5 = a3[665];
  v8 = (v5 & 4) == 0 && (v3 & 4) != 0;
  v9 = (v5 & 4) != 0 && (v3 & 4) == 0;
  if ( !(unsigned int)RIMCmIsContactDeliveringPointerData(a3)
    && (unsigned int)RIMCmIsContactSuppressed(a3)
    && (unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(a3) )
  {
    a3[605] &= 0x3000000u;
    v12 = a3[605];
  }
  else
  {
    if ( (a3[2] & 0x10) == 0 )
    {
      a3[605] |= 0x4000u;
      a3[8] |= 1u;
    }
    if ( v8 )
      v13 = 0x10000;
    else
      v13 = v9 ? 0x40000 : 0x20000;
    v14 = (unsigned int)v13 | a3[605];
    a3[605] = v14;
    v12 = v14;
    if ( (a3[8] & 8) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 480);
      if ( v15 == a2 )
      {
        if ( *(_DWORD **)(v15 + 960) != a3 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v14, v14, v10, v11);
          v12 = a3[605];
        }
        v12 |= 0x2000u;
        a3[605] = v12;
      }
    }
  }
  if ( (v12 & 0x1000000) == 0 )
    a3[605] = v12 & 0xFDFFFFFF;
  result = (unsigned int)a3[8];
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v19 = *(_DWORD *)(RIMCmGetButtonContact(a2) + 2420);
      if ( (v19 & 0x10) != 0 )
      {
        if ( (v19 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20, v21);
        a3[605] |= 0x10u;
      }
      if ( (v19 & 0x20) != 0 )
      {
        if ( (v19 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20, v21);
        a3[605] |= 0x20u;
      }
      if ( (v19 & 0x40) != 0 )
      {
        if ( (v19 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20, v21);
        a3[605] |= 0x40u;
      }
    }
    result = (unsigned int)(*(_DWORD *)(a2 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      result = rimPenButtonsPolicyApply(a2, a3);
  }
  a3[605] &= ~0x1000000u;
  return result;
}
