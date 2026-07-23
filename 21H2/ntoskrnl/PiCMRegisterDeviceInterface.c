/*
 * XREFs of PiCMRegisterDeviceInterface @ 0x1408B0E7C
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBufferResultData @ 0x14062C594 (PiCMReturnBufferResultData.c)
 *     _CmValidateDeviceName @ 0x140637080 (_CmValidateDeviceName.c)
 *     IopRegisterDeviceInterface @ 0x140748630 (IopRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AF2A0 (PiCMCaptureRegisterInterfaceInputData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMRegisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  unsigned int v9; // ebx
  _WORD *v10; // rdi
  int v11; // esi
  __int64 v12; // rcx
  signed int v13; // r10d
  unsigned int v14; // edx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  __int64 v19; // rsi
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rbx
  _WORD *v23; // [rsp+58h] [rbp-31h] BYREF
  __int128 v24; // [rsp+60h] [rbp-29h] BYREF
  __int128 v25; // [rsp+70h] [rbp-19h]
  __int128 v26; // [rsp+80h] [rbp-9h]
  __int64 v27; // [rsp+90h] [rbp+7h]

  v6 = a6;
  v23 = 0LL;
  *a6 = 0;
  v9 = 0;
  v24 = 0LL;
  v27 = 0LL;
  v10 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v11 = PiCMCaptureRegisterInterfaceInputData(a1, a2, a5, (__int64)&v24);
  if ( v11 < 0 )
    goto LABEL_8;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    v13 = -1073741790;
LABEL_4:
    v14 = 0;
LABEL_5:
    v15 = PiCMReturnBufferResultData(v13, v14, 0, 0LL, 0, SHIDWORD(v27), a3, a4, a6);
    goto LABEL_6;
  }
  v19 = *((_QWORD *)&v25 + 1);
  if ( !*((_QWORD *)&v25 + 1) || DWORD1(v24) )
  {
    v13 = -1073741811;
  }
  else
  {
    v20 = *((_QWORD *)&v26 + 1);
    if ( *((_QWORD *)&v26 + 1) && (unsigned int)v27 < 2 || !a3 || a4 < 0x14 )
    {
      v13 = -1073741811;
      goto LABEL_4;
    }
    if ( a4 - 20 < 2 )
    {
      v13 = -1073741811;
      goto LABEL_4;
    }
    v13 = CmValidateDeviceName(v12, *((const wchar_t **)&v25 + 1));
    if ( v13 >= 0 )
    {
      v21 = IopRegisterDeviceInterface(v19, (int *)&v24 + 2, v20, 1, (PVOID *)&v23, 0LL);
      v10 = v23;
      v13 = v21;
      if ( v21 >= 0 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( v23[v22] );
        v9 = v22 + 1;
        if ( 2 * (unsigned __int64)v9 > a4 - 20 )
        {
          v13 = -1073741789;
          v14 = 2 * v9;
          goto LABEL_5;
        }
      }
    }
    v6 = a6;
  }
  v14 = 2 * v9;
  if ( v13 < 0 )
    goto LABEL_5;
  v15 = PiCMReturnBufferResultData(v13, v14, 0, v10, v14, SHIDWORD(v27), a3, a4, v6);
LABEL_6:
  v11 = v15;
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( *((_QWORD *)&v25 + 1) )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, *((void **)&v25 + 1));
  if ( *((_QWORD *)&v26 + 1) )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)&v26 + 1));
  return (unsigned int)v11;
}
