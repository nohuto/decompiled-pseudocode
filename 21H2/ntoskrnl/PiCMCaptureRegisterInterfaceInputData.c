/*
 * XREFs of PiCMCaptureRegisterInterfaceInputData @ 0x1408AF2A0
 * Callers:
 *     PiCMRegisterDeviceInterface @ 0x1408B0E7C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureRegisterInterfaceInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // r13
  int UserModeCallersCopy; // esi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  _QWORD *v9; // r15
  void *v10; // rax
  unsigned int v11; // r8d
  _QWORD *v12; // r15
  void *v13; // rax
  unsigned int v14; // r8d
  int v16; // [rsp+34h] [rbp-44h]
  int v17; // [rsp+38h] [rbp-40h]

  v16 = 0;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_44;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a1 + a2;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x2C && *(_DWORD *)a1 == 44 )
    {
      *(_DWORD *)a4 = 56;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 24) = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 28);
      *(_QWORD *)(a4 + 40) = *(unsigned int *)(a1 + 32);
      *(_DWORD *)(a4 + 48) = *(_DWORD *)(a1 + 36);
      *(_DWORD *)(a4 + 52) = *(_DWORD *)(a1 + 40);
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
    if ( a2 >= 0x38 )
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
      *(_QWORD *)(a4 + 48) = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)a4 != 56 )
        UserModeCallersCopy = -1073741811;
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v9 = (_QWORD *)(a4 + 24);
    v10 = *(void **)(a4 + 24);
    *(_QWORD *)(a4 + 24) = 0LL;
    if ( v10 )
    {
      v11 = *(_DWORD *)(a4 + 32);
      if ( v11 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v10, v11, 2u, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v9 = 0LL;
          *(_DWORD *)(a4 + 32) = 0;
        }
        else
        {
          v16 = 1;
          *(_WORD *)(*v9 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 32) >> 1) - 2) = 0;
        }
LABEL_27:
        v12 = (_QWORD *)(a4 + 40);
        v13 = *(void **)(a4 + 40);
        *(_QWORD *)(a4 + 40) = 0LL;
        if ( v13 )
        {
          v14 = *(_DWORD *)(a4 + 48);
          if ( v14 >= 2 )
          {
            UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 40), v13, v14, 2u, PreviousMode, 1);
            if ( UserModeCallersCopy < 0 )
            {
              *v12 = 0LL;
              *(_DWORD *)(a4 + 48) = 0;
            }
            else
            {
              v17 = 1;
              *(_WORD *)(*v12 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 48) >> 1) - 2) = 0;
            }
LABEL_44:
            if ( UserModeCallersCopy >= 0 )
              return (unsigned int)UserModeCallersCopy;
            goto LABEL_45;
          }
          if ( *(_DWORD *)(a4 + 48) >= 2u )
            goto LABEL_44;
        }
        else if ( !*(_DWORD *)(a4 + 48) )
        {
          goto LABEL_44;
        }
        goto LABEL_36;
      }
      if ( *(_DWORD *)(a4 + 32) >= 2u )
        goto LABEL_27;
    }
    else if ( !*(_DWORD *)(a4 + 32) )
    {
      goto LABEL_27;
    }
LABEL_36:
    UserModeCallersCopy = -1073741811;
  }
LABEL_45:
  if ( v16 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 24));
  if ( v17 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 40));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
