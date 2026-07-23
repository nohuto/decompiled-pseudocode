/*
 * XREFs of KeAndAffinityEx @ 0x1402CE930
 * Callers:
 *     PpmParkReportParkedCores @ 0x140228C20 (PpmParkReportParkedCores.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14022DD90 (KeQueryLogicalProcessorRelationship.c)
 *     KiGetDeepIdleProcessors @ 0x14029DB20 (KiGetDeepIdleProcessors.c)
 *     PpmParkSteerInterrupts @ 0x1402CD760 (PpmParkSteerInterrupts.c)
 *     KeIsSubsetAffinityEx @ 0x140513880 (KeIsSubsetAffinityEx.c)
 *     PspSetEffectiveJobLimits @ 0x14060F644 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProfile @ 0x1408BC218 (KeInitializeProfile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KeAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  _BYTE *v6; // r9
  unsigned __int16 v7; // dx
  unsigned int v8; // r10d
  unsigned __int16 v9; // cx
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rdx
  _BYTE v14[176]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v14, 0, 0xA8uLL);
  v6 = v14;
  v7 = *a2;
  if ( a3 )
    v6 = a3;
  v8 = 0;
  v9 = 0;
  if ( *a1 < v7 )
    v7 = *a1;
  *(_WORD *)v6 = v7;
  if ( v7 )
  {
    do
    {
      v10 = 4LL * v9;
      v11 = (*(_QWORD *)&a2[v10 + 4] & *(_QWORD *)&a1[v10 + 4]) == 0LL;
      *(_QWORD *)&v6[v10 * 2 + 8] = *(_QWORD *)&a2[v10 + 4] & *(_QWORD *)&a1[v10 + 4];
      if ( !v11 )
        v8 = 1;
      ++v9;
    }
    while ( v9 < *(_WORD *)v6 );
  }
  if ( v6 != v14 )
  {
    *((_DWORD *)v6 + 1) = 0;
    *((_WORD *)v6 + 1) = 20;
    if ( v9 < 0x14u )
    {
      do
      {
        v12 = v9++;
        *(_QWORD *)&v6[8 * v12 + 8] = 0LL;
      }
      while ( v9 < *((_WORD *)v6 + 1) );
    }
  }
  return v8;
}
