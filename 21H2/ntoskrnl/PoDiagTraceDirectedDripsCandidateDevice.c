/*
 * XREFs of PoDiagTraceDirectedDripsCandidateDevice @ 0x1408E8144
 * Callers:
 *     IoDiagTraceDirectedDripsCandidateDevices @ 0x1408B46F8 (IoDiagTraceDirectedDripsCandidateDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PoDiagTraceDirectedDripsCandidateDevice()
{
  __int64 v0; // r9
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-49h] BYREF
  __int64 v3; // [rsp+38h] [rbp-41h] BYREF
  __int64 v4; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v6; // [rsp+70h] [rbp-9h]
  __int64 v7; // [rsp+78h] [rbp-1h]
  __int64 *v8; // [rsp+80h] [rbp+7h]
  __int64 v9; // [rsp+88h] [rbp+Fh]
  _DWORD *v10; // [rsp+90h] [rbp+17h]
  __int64 v11; // [rsp+98h] [rbp+1Fh]
  __int64 v12; // [rsp+A0h] [rbp+27h]
  _DWORD v13[2]; // [rsp+A8h] [rbp+2Fh] BYREF
  int *v14; // [rsp+B0h] [rbp+37h]
  __int64 v15; // [rsp+B8h] [rbp+3Fh]

  if ( PopTriggerDiagHandleRegistered && (unsigned int)dword_140C02228 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
    {
      v3 = PopWnfCsEnterScenarioId;
      v7 = 8LL;
      v6 = &v3;
      v4 = *(_QWORD *)(v0 + 32);
      v8 = &v4;
      v10 = v13;
      v12 = *(_QWORD *)(v0 + 48);
      v13[0] = *(unsigned __int16 *)(v0 + 40);
      v2 = *(_DWORD *)(v0 + 156);
      v14 = &v2;
      v9 = 8LL;
      v11 = 2LL;
      v13[1] = v1;
      v15 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02228, (unsigned __int8 *)byte_140027261, 0LL, 0LL, 7u, &v5);
    }
  }
}
