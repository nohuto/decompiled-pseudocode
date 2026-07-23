/*
 * XREFs of ExpRaiseHardError @ 0x140952DEC
 * Callers:
 *     ExRaiseHardError @ 0x140952B80 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x140953180 (NtRaiseHardError.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x140400C70 (ExpSystemErrorHandler.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     PsCaptureExceptionPort @ 0x1406B1148 (PsCaptureExceptionPort.c)
 *     LpcSendWaitReceivePort @ 0x1406FE950 (LpcSendWaitReceivePort.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  void *CurrentServerSiloGlobals; // r15
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v11; // ebx
  char v13; // dl
  _KPROCESS *Process; // r10
  int v15; // r11d
  struct _DMA_ADAPTER *v16; // rdi
  char v17; // si
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // r15d
  int v23; // r14d
  __int64 v27; // [rsp+78h] [rbp-300h] BYREF
  __int128 v28[2]; // [rsp+80h] [rbp-2F8h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp-2D0h]
  __int64 v30; // [rsp+B0h] [rbp-2C8h]
  int v31; // [rsp+B8h] [rbp-2C0h]
  unsigned int v32; // [rsp+BCh] [rbp-2BCh]
  unsigned int v33; // [rsp+C0h] [rbp-2B8h]
  unsigned int v34; // [rsp+C4h] [rbp-2B4h]
  char v35[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 0;
  *a7 = 0;
  if ( a2 > 0x4D )
    return 3221225485LL;
  v13 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 224) = 2;
    v13 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v15 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 224) || v13) )
  {
    ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == *((_KPROCESS **)CurrentServerSiloGlobals + 110) )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
LABEL_37:
    *a7 = 0;
    return 0LL;
  }
  v16 = 0LL;
  v17 = 0;
  if ( !v15 && ((Process[1].ActiveProcessors.Bitmap[9] & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v16 = (struct _DMA_ADAPTER *)PsCaptureExceptionPort((__int64)Process);
    if ( v16 )
      v17 = 1;
    else
      v16 = (struct _DMA_ADAPTER *)*((_QWORD *)CurrentServerSiloGlobals + 111);
  }
  if ( v16
    && ((CurrentThread = KeGetCurrentThread(), (CurrentThread->MiscFlags & 0x400) != 0)
     || CurrentThread->ApcStateIndex == 1
      ? (Teb = 0LL)
      : (Teb = CurrentThread->Teb),
        Teb) )
  {
    v20 = (Teb[5808] & 0x10) == 0;
    v21 = 0;
    if ( !v20 )
      v21 = -1073741823;
    v22 = a3;
    if ( v21 < 0 )
    {
      if ( v17 == 1 )
        HalPutDmaAdapter(v16);
      v16 = 0LL;
    }
  }
  else
  {
    v22 = a3;
  }
  if ( !v16 )
    goto LABEL_37;
  *(_QWORD *)&v28[0] = 0x900700048LL;
  v29 = a1 & 0xEFFFFFFF;
  v31 = a6;
  v34 = v22;
  v33 = a2;
  if ( a4 )
    memmove(v35, a4, 8LL * a2);
  v30 = MEMORY[0xFFFFF78000000014];
  v27 = 688LL;
  v23 = LpcSendWaitReceivePort((__int64)v16, 0x20000, v28, (unsigned __int64)v28, &v27, 0LL);
  if ( v17 == 1 )
    HalPutDmaAdapter(v16);
  if ( v23 >= 0 )
  {
    if ( v32 <= 0xA )
      v11 = v32;
    *a7 = v11;
  }
  return (unsigned int)v23;
}
