/*
 * XREFs of ExpRaiseHardError @ 0x140951A4C
 * Callers:
 *     ExRaiseHardError @ 0x1409517E0 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x140951DE0 (NtRaiseHardError.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x1403FF9E0 (ExpSystemErrorHandler.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     LpcSendWaitReceivePort @ 0x1406DB8E0 (LpcSendWaitReceivePort.c)
 *     PsCaptureExceptionPort @ 0x140707008 (PsCaptureExceptionPort.c)
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
  _DWORD v28[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-2C8h]
  int v30; // [rsp+B8h] [rbp-2C0h]
  unsigned int v31; // [rsp+BCh] [rbp-2BCh]
  unsigned int v32; // [rsp+C0h] [rbp-2B8h]
  unsigned int v33; // [rsp+C4h] [rbp-2B4h]
  char v34[616]; // [rsp+C8h] [rbp-2B0h] BYREF

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
  v28[0] = 7340104;
  v28[1] = 9;
  v28[10] = a1 & 0xEFFFFFFF;
  v30 = a6;
  v33 = v22;
  v32 = a2;
  if ( a4 )
    memmove(v34, a4, 8LL * a2);
  v29 = MEMORY[0xFFFFF78000000014];
  v27 = 688LL;
  v23 = LpcSendWaitReceivePort((__int64)v16, 0x20000, (__int64)v28, (unsigned __int64)v28, &v27, 0LL);
  if ( v17 == 1 )
    HalPutDmaAdapter(v16);
  if ( v23 >= 0 )
  {
    if ( v31 <= 0xA )
      v11 = v31;
    *a7 = v11;
  }
  return (unsigned int)v23;
}
