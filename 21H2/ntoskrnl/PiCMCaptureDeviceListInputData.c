/*
 * XREFs of PiCMCaptureDeviceListInputData @ 0x140604EC4
 * Callers:
 *     PiCMGetDeviceIdList @ 0x140604994 (PiCMGetDeviceIdList.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureDeviceListInputData(_DWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r15d
  char PreviousMode; // r12
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
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
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int64)a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x14 && *a1 == 20 )
    {
      *(_DWORD *)a4 = 24;
      *(_DWORD *)(a4 + 4) = a1[1];
      *(_QWORD *)(a4 + 8) = (unsigned int)a1[2];
      *(_DWORD *)(a4 + 16) = a1[3];
      *(_DWORD *)(a4 + 20) = a1[4];
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x18 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_QWORD *)(a4 + 16) = *((_QWORD *)a1 + 2);
      if ( *(_DWORD *)a4 != 24 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v9 = (_QWORD *)(a4 + 8);
    v10 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    if ( v10 )
    {
      v11 = *(unsigned int *)(a4 + 16);
      if ( (unsigned int)v11 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy(a4 + 8, v10, v11, 2LL, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v9 = 0LL;
          *(_DWORD *)(a4 + 16) = 0;
        }
        else
        {
          v5 = 1;
          *(_WORD *)(*v9 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 16) >> 1) - 2) = 0;
        }
LABEL_19:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_36;
      }
    }
    else if ( !*(_DWORD *)(a4 + 16) )
    {
      goto LABEL_19;
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_36:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 8));
  *(_OWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
