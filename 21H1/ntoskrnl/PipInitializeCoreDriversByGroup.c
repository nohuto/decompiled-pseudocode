/*
 * XREFs of PipInitializeCoreDriversByGroup @ 0x140A564C0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x14035FF08 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x14035FFAC (PnpLockDeviceActionQueue.c)
 *     PnpRequestDeviceAction @ 0x14036BAD4 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     IopGetDriverNameFromKeyNode @ 0x140727F90 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x1407934A0 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407934E8 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140793514 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407ABA90 (PipApplyFunctionToServiceInstances.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     HdlspKernelAddLogEntry @ 0x1409EC9AC (HdlspKernelAddLogEntry.c)
 *     PnpInitializeBootStartDriver @ 0x140A57548 (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeCoreDriversByGroup(int a1, __int64 a2)
{
  int v2; // r12d
  __int64 v4; // rax
  UNICODE_STRING **v5; // rdi
  UNICODE_STRING *v6; // rbx
  UNICODE_STRING *v7; // r14
  int DriverNameFromKeyNode; // esi
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // r9
  void *v13; // [rsp+20h] [rbp-40h]
  HANDLE v14; // [rsp+30h] [rbp-30h]
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+58h]

  v17 = 0LL;
  v2 = 0;
  Handle = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = 96LL;
      v2 = 1;
    }
    else
    {
      if ( a1 != 2 )
        return;
      v4 = 112LL;
    }
  }
  else
  {
    v4 = 80LL;
  }
  v5 = (UNICODE_STRING **)(v4 + a2);
  if ( v4 + a2 )
  {
    v6 = *v5;
    PnpCoreDriverGroupLoadPhase = a1;
    while ( v6 != (UNICODE_STRING *)v5 )
    {
      v7 = v6;
      v6 = *(UNICODE_STRING **)&v6->Length;
      if ( SLODWORD(v7[3].Buffer) >= 0 )
      {
        P[1] = 0LL;
        Handle = 0LL;
        DriverNameFromKeyNode = IopOpenRegistryKeyEx(&Handle, 0LL, v7 + 2, 0x20019u);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, (PUNICODE_STRING)P);
          if ( DriverNameFromKeyNode >= 0 )
          {
            DriverNameFromKeyNode = PnpInitializeBootStartDriver(
                                      (unsigned int)P,
                                      (int)v7 + 32,
                                      *(_QWORD *)(*(_QWORD *)&v7[3].Length + 56LL),
                                      *(_QWORD *)&v7[3].Length,
                                      a2 + 16,
                                      0,
                                      v2);
            if ( DriverNameFromKeyNode >= 0 )
            {
              v9 = v17;
              if ( v17 )
              {
                PnpLockDeviceActionQueue();
                PipApplyFunctionToServiceInstances(
                  v10,
                  (UNICODE_STRING *)(*(_QWORD *)(v9 + 48) + 24LL),
                  v11,
                  v12,
                  v13,
                  v9,
                  v14);
                PnpUnlockDeviceActionQueue();
                PnpWaitForEmptyDeviceActionQueue();
                PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
                if ( PnpWaitForEmptyDeviceEventQueue() < 0 && HeadlessGlobals && HeadlessGlobals[1] )
                  HdlspKernelAddLogEntry(0x12u, 0LL);
              }
            }
          }
        }
        if ( Handle )
          ZwClose(Handle);
        if ( P[1] )
          ExFreePoolWithTag(P[1], 0);
        if ( DriverNameFromKeyNode < 0 )
          *(_DWORD *)(*(_QWORD *)&v7[3].Length + 104LL) |= 0x20000u;
      }
    }
  }
}
