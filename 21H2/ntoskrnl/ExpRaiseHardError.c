/*
 * XREFs of ExpRaiseHardError @ 0x1409565F8
 * Callers:
 *     ExRaiseHardError @ 0x1409562E0 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x140956990 (NtRaiseHardError.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x1404098F0 (ExpSystemErrorHandler.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     LpcSendWaitReceivePort @ 0x14060E670 (LpcSendWaitReceivePort.c)
 *     PsCaptureExceptionPort @ 0x1406418C8 (PsCaptureExceptionPort.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall ExpRaiseHardError(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v7; // r13d
  unsigned int v8; // r14d
  void *CurrentServerSiloGlobals; // r15
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v11; // ebx
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rcx
  _KPROCESS *Process; // r10
  int v17; // r11d
  struct _DMA_ADAPTER *v18; // rdi
  char v19; // si
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // r15d
  int v25; // r14d
  int v27; // [rsp+5Ch] [rbp-31Ch]
  __int64 v29; // [rsp+78h] [rbp-300h] BYREF
  _DWORD v30[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-2C8h]
  int v32; // [rsp+B8h] [rbp-2C0h]
  unsigned int v33; // [rsp+BCh] [rbp-2BCh]
  int v34; // [rsp+C0h] [rbp-2B8h]
  unsigned int v35; // [rsp+C4h] [rbp-2B4h]
  char v36[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  v7 = a2;
  v8 = a1;
  v27 = a2;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, a2);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 0;
  *a7 = 0;
  if ( v7 > 0x4D )
    return 3221225485LL;
  v13 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo(v15, v14) )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 224) = 2;
    v13 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v17 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v17 && (v8 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 224) || v13) )
  {
    ExpSystemErrorHandler(v8, v7, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == *((_KPROCESS **)CurrentServerSiloGlobals + 110) )
  {
    if ( (v8 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(v8, v7, a3, a5, PreviousMode != 0);
LABEL_37:
    *a7 = 0;
    return 0LL;
  }
  v18 = 0LL;
  v19 = 0;
  if ( !v17 && ((Process[1].ActiveProcessors.Bitmap[9] & 1) != 0 || (v8 & 0x10000000) != 0) )
  {
    v18 = (struct _DMA_ADAPTER *)PsCaptureExceptionPort((__int64)Process);
    if ( v18 )
      v19 = 1;
    else
      v18 = (struct _DMA_ADAPTER *)*((_QWORD *)CurrentServerSiloGlobals + 111);
  }
  if ( v18
    && ((CurrentThread = KeGetCurrentThread(), (CurrentThread->MiscFlags & 0x400) != 0)
     || CurrentThread->ApcStateIndex == 1
      ? (Teb = 0LL)
      : (Teb = CurrentThread->Teb),
        Teb) )
  {
    v22 = (Teb[5808] & 0x10) == 0;
    v23 = 0;
    if ( !v22 )
      v23 = -1073741823;
    v24 = a3;
    if ( v23 < 0 )
    {
      if ( v19 == 1 )
        HalPutDmaAdapter(v18);
      v18 = 0LL;
    }
  }
  else
  {
    v24 = a3;
  }
  if ( !v18 )
    goto LABEL_37;
  v30[0] = 7340104;
  v30[1] = 9;
  v30[10] = v8 & 0xEFFFFFFF;
  v32 = a6;
  v35 = v24;
  v34 = v27;
  if ( a4 )
    memmove(v36, a4, 8LL * v7);
  v31 = MEMORY[0xFFFFF78000000014];
  v29 = 688LL;
  v25 = LpcSendWaitReceivePort((int)v18, 0x20000, (int)v30, (__int64)v30, (__int64)&v29, 0LL);
  if ( v19 == 1 )
    HalPutDmaAdapter(v18);
  if ( v25 >= 0 )
  {
    if ( v33 <= 0xA )
      v11 = v33;
    *a7 = v11;
  }
  return (unsigned int)v25;
}
