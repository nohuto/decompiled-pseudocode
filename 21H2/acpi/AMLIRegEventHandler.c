/*
 * XREFs of AMLIRegEventHandler @ 0x1C00292D8
 * Callers:
 *     RegisterOperationRegionHandler @ 0x1C009F5F8 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B0ED4 (UnRegisterOperationRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C00BEDD4 (OSInitializeCallbacks.c)
 * Callees:
 *     RegEventHandler @ 0x1C00294BC (RegEventHandler.c)
 *     RegRSAccess @ 0x1C00294E4 (RegRSAccess.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     Simulator_Free_Arguments @ 0x1C0064DF4 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C006539C (Simulator_Pre_RegEventHandler.c)
 *     Simulator_TestNotifyRet @ 0x1C0065578 (Simulator_TestNotifyRet.c)
 *     RegOpcodeHandler @ 0x1C0066F34 (RegOpcodeHandler.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 AMLIRegEventHandler(unsigned int a1, unsigned int a2, ...)
{
  __int64 v2; // r9
  __int64 v3; // rsi
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned int v8; // eax
  __int64 *v9; // rcx
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // r9
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+68h] [rbp+20h]
  va_list va2; // [rsp+70h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v2 = v16;
  v3 = 0LL;
  dword_1C0081AC8 = 0;
  v5 = v16;
  v6 = v14;
  v13[0] = 0LL;
  byte_1C0081ACC = 0;
  if ( g_SimulatorCallbackObject )
  {
    result = Simulator_Pre_RegEventHandler(a1, a2, (unsigned int)va, (unsigned int)va1, (__int64)v13);
    if ( (_DWORD)result )
      return result;
    v5 = v16;
    v6 = v14;
    v3 = v13[0];
  }
  if ( a1 > 0xB )
  {
    if ( a1 != 12 )
    {
      switch ( a1 )
      {
        case 0xDu:
          v9 = &ghMapTable;
          goto LABEL_18;
        case 0xEu:
          v9 = (__int64 *)&ghGetAcpiTableVersion;
          goto LABEL_18;
        case 0xFu:
          v9 = (__int64 *)&ghCheckOsiString;
          goto LABEL_18;
        case 0x10u:
          v9 = &ghMutexObject;
          goto LABEL_18;
        case 0x11u:
          v9 = &ghQueryDLMSupportHandler;
          goto LABEL_18;
        case 0x12u:
          v9 = &ghLoadTable;
          goto LABEL_18;
      }
      if ( a1 != 19 )
      {
        if ( a1 == 20 )
        {
          v9 = &ghNativeMethodEvalObject;
          goto LABEL_18;
        }
        goto LABEL_51;
      }
      v9 = &ghUnloadTable;
LABEL_18:
      v8 = RegEventHandler(v9, v6, v5);
      goto LABEL_19;
    }
    v12 = 0x80000000LL;
LABEL_53:
    v8 = RegOpcodeHandler(a2, v6, v5, v12);
LABEL_19:
    v10 = v8;
    if ( v8 == 32772 )
      v10 = 259;
    goto LABEL_21;
  }
  if ( a1 == 11 )
  {
    v9 = &ghDestroyObj;
    goto LABEL_18;
  }
  if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7u:
        LOBYTE(v2) = 1;
LABEL_7:
        v8 = RegRSAccess(a2, v6, v5, v2);
        goto LABEL_19;
      case 8u:
        v9 = (__int64 *)&qword_1C0081AA8;
        break;
      case 9u:
        v9 = &qword_1C0081AB8;
        break;
      default:
        v9 = (__int64 *)&ghCreate;
        break;
    }
    goto LABEL_18;
  }
  switch ( a1 )
  {
    case 6u:
      v2 = 0LL;
      goto LABEL_7;
    case 1u:
      v12 = 0LL;
      goto LABEL_53;
    case 2u:
      v9 = &ghNotify;
      goto LABEL_18;
    case 3u:
      v9 = &ghFatal;
      goto LABEL_18;
    case 4u:
      v9 = (__int64 *)&ghValidateTable;
      goto LABEL_18;
    case 5u:
      v9 = (__int64 *)&ghGlobalLock;
      goto LABEL_18;
  }
LABEL_51:
  v10 = -1072431091;
  LogError(3222536205LL);
  AcpiDiagTraceAmlError(0LL, 3222536205LL);
  PrintDebugMessage(164, a1, 0, 0, 0LL);
LABEL_21:
  if ( g_SimulatorCallbackObject )
  {
    if ( v3 )
    {
      v10 = Simulator_TestNotifyRet((PVOID)v3);
      if ( (unsigned int)(*(_DWORD *)(v3 + 4) - 1) <= 2 )
        Simulator_Free_Arguments(*(unsigned int *)(v3 + 32), *(_QWORD *)(v3 + 40));
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v10;
}
