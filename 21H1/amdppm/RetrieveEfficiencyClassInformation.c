/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C00333E8
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C0032FDC (InitializeEnergyEstimation.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001860 (EnumerateNextDevice.c)
 *     InitializeEnumerationContext @ 0x1C0001BBC (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0001BD4 (ResetEnumerationContext.c)
 *     GetProcessorEfficiencyClass @ 0x1C0032F14 (GetProcessorEfficiencyClass.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // r10d
  unsigned int i; // eax
  _OWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF

  v8 = 0LL;
  v7 = 0;
  qword_1C00139D8 = 0LL;
  memset(v6, 0, sizeof(v6));
  InitializeEnumerationContext((__int64)&qword_1C0013410, 32, (__int64)v6);
  ResetEnumerationContext((__int64 *)v6);
  v0 = &qword_1C00139D8;
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
  {
    v1 = v8;
    if ( (*(_QWORD *)(v8 + 272) & 0x2000000000LL) != 0 )
    {
      if ( (int)GetProcessorEfficiencyClass(v8, &v7) < 0 )
      {
        InitializeEnumerationContext((__int64)&qword_1C0013410, 32, (__int64)v6);
        ResetEnumerationContext((__int64 *)v6);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
        {
          if ( (*(_QWORD *)(v8 + 272) & 0x2000000000LL) != 0 )
            *(_BYTE *)(v8 + 368) = 0;
        }
        dword_1C00139D4 = 1;
        qword_1C00139D8 = 0LL;
        LODWORD(qword_1C00139D8) = dword_1C00133F4;
        return v3;
      }
      v2 = v7;
      *(_BYTE *)(v1 + 368) = v7;
      ++*((_DWORD *)&qword_1C00139D8 + v2);
    }
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( !*(_DWORD *)v0 )
      break;
    v0 = (__int64 *)((char *)v0 + 4);
  }
  dword_1C00139D4 = i;
  return 0;
}
