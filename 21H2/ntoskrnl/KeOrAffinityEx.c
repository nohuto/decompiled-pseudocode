/*
 * XREFs of KeOrAffinityEx @ 0x1402D0100
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14022DD90 (KeQueryLogicalProcessorRelationship.c)
 *     KiForwardTick @ 0x1402CC8D0 (KiForwardTick.c)
 *     PpmPerfApplyProcessorStates @ 0x140398AA0 (PpmPerfApplyProcessorStates.c)
 *     EmonAddProfileSource @ 0x1404D3000 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DD700 (Amd64AddProfileSource.c)
 *     KiStartProfileTarget @ 0x14051C2E0 (KiStartProfileTarget.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405236F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmUpdateProcessorPolicy @ 0x14078CA90 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KeOrAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  unsigned __int16 *v6; // r9
  unsigned __int16 v7; // r10
  unsigned int v8; // r11d
  unsigned __int16 v9; // cx
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v14; // rdx
  _BYTE v15[176]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v15, 0, 0xA8uLL);
  if ( !a3 )
    a3 = v15;
  v6 = a2;
  v7 = *a1;
  if ( *a1 >= *a2 )
  {
    v7 = *a2;
    v6 = a1;
  }
  *((_WORD *)a3 + 1) = 20;
  v8 = 0;
  v9 = 0;
  for ( *(_WORD *)a3 = *v6; v9 < v7; ++v9 )
  {
    v10 = 4LL * v9;
    v11 = (*(_QWORD *)&a2[v10 + 4] | *(_QWORD *)&a1[v10 + 4]) == 0LL;
    *(_QWORD *)&a3[v10 * 2 + 8] = *(_QWORD *)&a2[v10 + 4] | *(_QWORD *)&a1[v10 + 4];
    if ( !v11 )
      v8 = 1;
  }
  for ( ; v9 < *v6; ++v9 )
  {
    v14 = *(_QWORD *)&v6[4 * v9 + 4];
    *(_QWORD *)&a3[8 * v9 + 8] = v14;
    if ( v14 )
      v8 = 1;
  }
  if ( a3 != v15 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; v9 < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v12 + 8] = 0LL )
      v12 = v9++;
  }
  return v8;
}
