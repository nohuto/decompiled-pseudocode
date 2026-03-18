/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C0179E1C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01794B0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018655C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01865F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0186644 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C0186AC4 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-40h]
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  _BYTE v21[32]; // [rsp+50h] [rbp-20h] BYREF

  *a2 = 0;
  *a3 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v19, a1);
  v7 = *(_QWORD *)(active + 16);
  v17 = *(_OWORD *)active;
  v18 = v7;
  while ( 1 )
  {
    v8 = RIMCmActiveContactsEnd(v21, a1);
    v10 = v18;
    v11 = *(_OWORD *)v8;
    v12 = *(_QWORD *)(v8 + 16);
    v13 = *(_QWORD *)v8;
    v20 = v12;
    v19 = v11;
    if ( (_QWORD)v17 == v13 )
    {
      result = DWORD2(v19);
      if ( DWORD2(v17) == DWORD2(v19) && v18 == v20 )
        break;
    }
    v15 = *(_DWORD *)(v18 + 16);
    if ( (v15 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
      v15 = *(_DWORD *)(v10 + 16);
    }
    if ( (v15 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    if ( (*(_DWORD *)(v10 + 2324) & 1) != 0 )
      ++*a2;
    RIMCmActiveContactsNext(a1, &v17);
  }
  if ( !*a2 )
  {
    result = RIMCmGetButtonContact(a1);
    if ( result )
    {
      v16 = *(unsigned int *)(result + 32);
      if ( (v16 & 2) != 0 )
      {
        result = *(unsigned int *)(result + 2340);
        if ( (result & 1) != 0 )
        {
          if ( (v16 & 4) == 0 )
            result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return result;
}
