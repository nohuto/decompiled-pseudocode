/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C00244FC
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C00251A0 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001524 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     GetProcessorEfficiencyClass @ 0x1C0024E44 (GetProcessorEfficiencyClass.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int i; // eax
  unsigned int v4; // r11d
  _OWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF

  v8 = 0LL;
  v7 = 0;
  qword_1C001C9F8 = 0LL;
  memset(v6, 0, sizeof(v6));
  InitializeEnumerationContext((__int64)&qword_1C001C430, 32, (__int64)v6);
  ResetEnumerationContext((__int64 *)v6);
  v0 = &qword_1C001C9F8;
  if ( (unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
  {
LABEL_6:
    for ( i = 0; i < 2; ++i )
    {
      if ( !*(_DWORD *)v0 )
        break;
      v0 = (__int64 *)((char *)v0 + 4);
    }
    dword_1C001C9F4 = i;
    return 0;
  }
  while ( 1 )
  {
    v1 = v8;
    if ( (*(_QWORD *)(v8 + 272) & 0x2000000000LL) != 0 )
      break;
LABEL_5:
    if ( (unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
      goto LABEL_6;
  }
  if ( (int)GetProcessorEfficiencyClass(v8, &v7) >= 0 )
  {
    v2 = v7;
    *(_BYTE *)(v1 + 368) = v7;
    ++*((_DWORD *)&qword_1C001C9F8 + v2);
    goto LABEL_5;
  }
  InitializeEnumerationContext((__int64)&qword_1C001C430, 32, (__int64)v6);
  ResetEnumerationContext((__int64 *)v6);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
  {
    if ( (*(_QWORD *)(v8 + 272) & 0x2000000000LL) != 0 )
      *(_BYTE *)(v8 + 368) = 0;
  }
  dword_1C001C9F4 = 1;
  qword_1C001C9F8 = 0LL;
  LODWORD(qword_1C001C9F8) = dword_1C001C414;
  return v4;
}
