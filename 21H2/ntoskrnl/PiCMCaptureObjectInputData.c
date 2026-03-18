/*
 * XREFs of PiCMCaptureObjectInputData @ 0x14078A1A8
 * Callers:
 *     PiCMDeviceAction @ 0x14065F3BC (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140789CFC (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x140789E04 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14078A748 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x140954BA8 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140954D10 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140955184 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140955274 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409554B0 (PiCMDeleteObject.c)
 *     PiCMGetDeviceDepth @ 0x140955BAC (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140955CA4 (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x14095644C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402DF554 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14077C610 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r15d
  char PreviousMode; // r12
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  void *v10; // rcx
  unsigned int v11; // r8d
  unsigned __int64 v13; // r8

  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x1C && *(_DWORD *)a1 == 28 )
    {
      *(_DWORD *)a4 = 40;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 16) = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 24);
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x28 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v9 = (_QWORD *)(a4 + 16);
    v10 = *(void **)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v10 )
    {
      v11 = *(_DWORD *)(a4 + 24);
      if ( v11 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 16), v10, v11, 2u, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v9 = 0LL;
          *(_DWORD *)(a4 + 24) = 0;
        }
        else
        {
          v5 = 1;
          *(_WORD *)(*v9 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
        }
LABEL_19:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_34;
      }
    }
    else if ( !*(_DWORD *)(a4 + 24) )
    {
      goto LABEL_19;
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_34:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
