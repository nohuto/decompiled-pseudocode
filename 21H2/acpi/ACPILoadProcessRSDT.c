/*
 * XREFs of ACPILoadProcessRSDT @ 0x1C00BD9F8
 * Callers:
 *     ACPIInitialize @ 0x1C00BE48C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0023BB0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008E978 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIPccInitialize @ 0x1C00AFC38 (ACPIPccInitialize.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00BC660 (ACPIRegDumpAcpiTables.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C00BDCC8 (ACPILoadAddDynamicDataBlockTable.c)
 *     ACPILoadProcessFADT @ 0x1C00BEF88 (ACPILoadProcessFADT.c)
 */

__int64 ACPILoadProcessRSDT()
{
  char v0; // r12
  char v1; // r13
  int v2; // ebx
  _DWORD *v3; // rax
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  int **v7; // r14
  int *v8; // rsi
  int v9; // eax
  _DWORD *v10; // rax
  _OWORD *Pool2; // rax
  int v13; // eax
  unsigned __int16 v14; // r9
  PVOID v15; // rsi
  __int64 v16; // [rsp+28h] [rbp-40h]
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  PVOID v18; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v1 = 0;
  LOBYTE(P) = 0;
  v2 = 0;
  v3 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  v4 = v3;
  if ( !v3 || (v5 = *v3) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431079;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x12u,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
LABEL_59:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x1Au,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    return (unsigned int)-1072431079;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x13u,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      *v3);
  v6 = 0;
  v7 = (int **)(v4 + 2);
  do
  {
    v8 = *v7;
    v9 = **v7;
    if ( v9 == 1414742611 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x14u,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          *v7);
      goto LABEL_14;
    }
    if ( v9 != 1413763923 && v9 != 1346584902 && v9 != 1128878145 && v9 != 1413763920 && v9 != 1413694288 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = **v7;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x15u,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          v16);
      }
      goto LABEL_14;
    }
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
    v18 = Pool2;
    if ( !Pool2 )
      goto LABEL_50;
    *Pool2 = *(_OWORD *)v8;
    Pool2[1] = *((_OWORD *)v8 + 1);
    *((_DWORD *)Pool2 + 8) = v8[8];
    *((_DWORD *)Pool2 + 1) = 36;
    if ( ACPIRegReadAMLRegistryEntry((__int64 *)&v18) )
      v8 = (int *)v18;
    else
      ExFreePoolWithTag(v18, 0);
    switch ( *v8 )
    {
      case 1128878145:
        if ( !v1 )
        {
          v1 = 1;
          *((_QWORD *)AcpiInformation + 4) = v8;
          break;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 23;
          goto LABEL_49;
        }
        break;
      case 1346584902:
        if ( !v0 )
        {
          v0 = 1;
          *((_QWORD *)AcpiInformation + 1) = v8;
          v13 = ACPILoadProcessFADT();
          goto LABEL_31;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 22;
          goto LABEL_49;
        }
        break;
      case 1413694288:
        if ( !(_BYTE)P )
        {
          LOBYTE(P) = 1;
          v13 = ACPIPccInitialize((__int64)v8);
          goto LABEL_31;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 24;
LABEL_49:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            v14,
            (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
        }
        break;
      case 1413763920:
      case 1413763923:
        v13 = ACPILoadAddDynamicDataBlockTable(v8, 0LL);
LABEL_31:
        v2 = v13;
        break;
    }
    if ( v2 < 0 )
      goto LABEL_20;
LABEL_14:
    ++v6;
    ++v7;
  }
  while ( v6 < v5 );
  if ( !AcpiLoadSimulatorTable && !g_SimulatorCallbackObject )
    goto LABEL_19;
  v10 = (_DWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
  P = v10;
  if ( v10 )
  {
    *v10 = 1413763923;
    v10[1] = 36;
    *((_WORD *)v10 + 4) = 1;
    v10[6] = 1;
    v10[8] = 1;
    *(_DWORD *)((char *)v10 + 10) = 1413894989;
    *((_QWORD *)v10 + 2) = 0x7274616C756D6973LL;
    v10[7] = 1413894989;
    if ( !ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
    {
      ExFreePoolWithTag(P, 0);
LABEL_19:
      ACPIRegDumpAcpiTables();
      goto LABEL_20;
    }
    v15 = P;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x19u,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
        P);
    v2 = ACPILoadAddDynamicDataBlockTable(v15, 0LL);
    if ( v2 >= 0 )
      goto LABEL_19;
    ExFreePoolWithTag(v15, 0);
  }
  else
  {
LABEL_50:
    v2 = -1073741670;
  }
LABEL_20:
  if ( !v0 )
    goto LABEL_59;
  return (unsigned int)v2;
}
