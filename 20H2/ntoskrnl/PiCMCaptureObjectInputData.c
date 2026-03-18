/*
 * XREFs of PiCMCaptureObjectInputData @ 0x1406EC7D8
 * Callers:
 *     PiCMGetDeviceStatus @ 0x1406D8D5C (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x1406EC1AC (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectList @ 0x1406EC3CC (PiCMGetObjectList.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14072AD04 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072AF5C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14072FDC4 (PiCMGetDeviceDepth.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140765574 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1408B25D4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408B278C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408B28A8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408B2998 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B2BD4 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408B331C (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B3B28 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14023F6C0 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14063D900 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r15d
  char PreviousMode; // r12
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  void *v10; // rcx
  unsigned __int64 v12; // r8
  unsigned int v13; // r8d

  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_16;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
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
    v12 = a1 + a2;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < a1 )
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
  if ( UserModeCallersCopy < 0 )
    goto LABEL_33;
  v9 = (_QWORD *)(a4 + 16);
  v10 = *(void **)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  if ( !v10 )
  {
    if ( !*(_DWORD *)(a4 + 24) )
      goto LABEL_16;
    goto LABEL_32;
  }
  v13 = *(_DWORD *)(a4 + 24);
  if ( v13 >= 2 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 16), v10, v13, 2u, PreviousMode, 1);
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
LABEL_16:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_33;
  }
LABEL_32:
  UserModeCallersCopy = -1073741811;
LABEL_33:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
