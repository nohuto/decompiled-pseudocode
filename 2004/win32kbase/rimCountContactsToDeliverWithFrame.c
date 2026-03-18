/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C0173AEC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0173180 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x1C018085C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C01808F0 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0180944 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C0180DC4 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __int64 result; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h]
  __int128 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  _BYTE v27[32]; // [rsp+50h] [rbp-20h] BYREF

  *a2 = 0;
  *a3 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v25, a1);
  v7 = *(_QWORD *)(active + 16);
  v23 = *(_OWORD *)active;
  v24 = v7;
  while ( 1 )
  {
    v8 = RIMCmActiveContactsEnd(v27, a1);
    v13 = v24;
    v14 = *(_OWORD *)v8;
    v15 = *(_QWORD *)(v8 + 16);
    v16 = *(_QWORD *)v8;
    v26 = v15;
    v25 = v14;
    if ( (_QWORD)v23 == v16 )
    {
      result = DWORD2(v25);
      if ( DWORD2(v23) == DWORD2(v25) && v24 == v26 )
        break;
    }
    v18 = *(_DWORD *)(v24 + 16);
    if ( (v18 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
      v18 = *(_DWORD *)(v13 + 16);
    }
    if ( (v18 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
    if ( (*(_DWORD *)(v13 + 2324) & 1) != 0 )
      ++*a2;
    RIMCmActiveContactsNext(a1, &v23);
  }
  if ( !*a2 )
  {
    result = RIMCmGetButtonContact(a1);
    if ( result )
    {
      v22 = *(unsigned int *)(result + 32);
      if ( (v22 & 2) != 0 )
      {
        result = *(unsigned int *)(result + 2340);
        if ( (result & 1) != 0 )
        {
          if ( (v22 & 4) == 0 )
            result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v19, v20, v21);
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return result;
}
