/*
 * XREFs of KiOrAffinityEx @ 0x1402FEC10
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x14023B5A0 (PpmPerfApplyProcessorStates.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140264320 (KiTryPopulateLogicalProcessorInformation.c)
 *     KiComputeCpuSetAffinity @ 0x140292BA4 (KiComputeCpuSetAffinity.c)
 *     PpmParkSteerInterrupts @ 0x1402FF620 (PpmParkSteerInterrupts.c)
 *     KiForwardTick @ 0x140303740 (KiForwardTick.c)
 *     EmonAddProfileSource @ 0x14051FB70 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x14052AF40 (Amd64AddProfileSource.c)
 *     KeOrAffinityEx @ 0x14056C230 (KeOrAffinityEx.c)
 *     KeOrAffinityEx2 @ 0x14056C250 (KeOrAffinityEx2.c)
 *     KiStartProfileTarget @ 0x140571A40 (KiStartProfileTarget.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057A2A0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmUpdateProcessorPolicy @ 0x14081ACB4 (PpmUpdateProcessorPolicy.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiOrAffinityEx(char *a1, _WORD *a2, _BYTE *a3, unsigned __int16 a4)
{
  unsigned __int16 v8; // cx
  char *v9; // rbp
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r9
  unsigned int v13; // r15d
  unsigned __int16 v14; // ax
  signed __int64 v15; // r14
  __int64 v16; // r10
  _QWORD *v17; // r8
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v21; // rdx
  unsigned __int16 v22; // cx
  __int64 v23; // r8
  __int64 v24; // rcx
  _BYTE v25[272]; // [rsp+20h] [rbp-148h] BYREF

  memset(v25, 0, 0x108uLL);
  if ( !a3 )
  {
    a3 = v25;
    a4 = 32;
  }
  v8 = *(_WORD *)a1;
  v9 = (char *)a2;
  v10 = *a2;
  v11 = v8;
  *((_WORD *)a3 + 1) = a4;
  v12 = v10;
  if ( v8 >= v10 )
  {
    v12 = v8;
    v11 = v10;
    v9 = a1;
  }
  *(_WORD *)a3 = v12;
  v13 = 0;
  if ( v12 > a4 )
    *(_WORD *)a3 = a4;
  if ( v11 > a4 )
    v11 = a4;
  if ( v12 > a4 )
    v12 = a4;
  v14 = 0;
  if ( v11 )
  {
    v15 = a1 - (char *)a2;
    v16 = v11;
    v17 = a2 + 4;
    v14 = v11;
    do
    {
      v18 = (*v17 | *(_QWORD *)((char *)v17 + v15)) == 0LL;
      *(_QWORD *)((char *)v17 + a3 - (_BYTE *)a2) = *v17 | *(_QWORD *)((char *)v17 + v15);
      if ( !v18 )
        v13 = 1;
      ++v17;
      --v16;
    }
    while ( v16 );
  }
  if ( v14 < v12 )
  {
    v21 = 8LL * v14;
    v22 = v12 - v14;
    v14 = v12;
    v23 = v22;
    do
    {
      v24 = *(_QWORD *)&v9[v21 + 8];
      *(_QWORD *)&a3[v21 + 8] = v24;
      if ( v24 )
        v13 = 1;
      v21 += 8LL;
      --v23;
    }
    while ( v23 );
  }
  if ( a3 != v25 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; v14 < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v19 + 8] = 0LL )
      v19 = v14++;
  }
  return v13;
}
