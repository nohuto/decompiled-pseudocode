/*
 * XREFs of DisplayBootBitmap @ 0x1403B3710
 * Callers:
 *     DisplayFilter @ 0x1404B46B0 (DisplayFilter.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     InbvReleaseResources @ 0x1403B3768 (InbvReleaseResources.c)
 *     InbvIsBootDriverInstalled @ 0x1403B3810 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     InbvAcquireLock @ 0x1404FD35C (InbvAcquireLock.c)
 *     InbvGetResourceAddress @ 0x1404FD420 (InbvGetResourceAddress.c)
 *     InbvReleaseLock @ 0x1404FD48C (InbvReleaseLock.c)
 *     InbvSetTextColor @ 0x1404FD520 (InbvSetTextColor.c)
 *     InbvSolidColorFill @ 0x1404FD550 (InbvSolidColorFill.c)
 *     RotBarInit @ 0x1404FD6D0 (RotBarInit.c)
 *     PsCreateSystemThread @ 0x1406EE030 (PsCreateSystemThread.c)
 */

int __fastcall DisplayBootBitmap(char a1)
{
  int v1; // ebx
  __int64 (__fastcall *v3)(_QWORD, _QWORD, _QWORD); // rax
  __int64 ResourceAddress; // rsi
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, _QWORD, _QWORD); // rax
  void (__fastcall *v11)(__int64, _QWORD, _QWORD); // rax
  HANDLE ThreadHandle; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( byte_140CF4D00 )
  {
    ((void (*)(void))InbvAcquireLock)();
    RotBarSelection = 0;
    InbvReleaseLock();
  }
  ShowProgressBar = 0;
  if ( a1 )
  {
    InbvSetTextColor(15LL);
    InbvSolidColorFill(0, 0, 639, 479, 0);
    InbvSolidColorFill(0, 421, 639, 479, 0);
    ResourceAddress = InbvGetResourceAddress(6LL);
    v3 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))InbvGetResourceAddress(7LL);
    v5 = qword_140C509E8;
    v1 = 0;
    v6 = v3;
    if ( qword_140C509E8 )
    {
      v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_140C509E8 + 72);
      if ( v3 )
      {
        LODWORD(v3) = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))v3)(32LL, 80LL, 631LL, 400LL);
        v5 = qword_140C509E8;
      }
    }
    if ( v6 )
    {
      if ( v5 )
      {
        v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v5 + 96);
        if ( v3 )
        {
          LODWORD(v3) = v3(v6, 0LL, 419LL);
          v5 = qword_140C509E8;
        }
      }
    }
    if ( ResourceAddress )
    {
      if ( v5 )
      {
        v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v5 + 96);
        if ( v3 )
          LODWORD(v3) = v3(ResourceAddress, 0LL, 0LL);
      }
    }
LABEL_29:
    if ( !byte_140CF4D00 )
      return (int)v3;
    goto LABEL_30;
  }
  if ( !(unsigned __int8)InbvIsBootDriverInstalled() )
  {
    LODWORD(v3) = InbvReleaseResources();
    return (int)v3;
  }
  qword_140C509F0 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
  v7 = InbvGetResourceAddress(1LL);
  v8 = InbvGetResourceAddress(4LL);
  v5 = qword_140C509E8;
  v9 = v8;
  if ( v7 )
  {
    v1 = 1;
    if ( qword_140C509E8 )
    {
      v10 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140C509E8 + 96);
      if ( v10 )
      {
        v10(v7, 0LL, 0LL);
        v5 = qword_140C509E8;
      }
    }
  }
  if ( v9 )
  {
    if ( v5 )
    {
      v11 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v5 + 96);
      if ( v11 )
        v11(v9, 0LL, 0LL);
    }
  }
  if ( !byte_140CF4D00 )
  {
    ThreadHandle = 0LL;
    LODWORD(v3) = PsCreateSystemThread(&ThreadHandle, 0, 0LL, 0LL, 0LL, InbvRotateGuiBootDisplay, 0LL);
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = ZwClose(ThreadHandle);
      byte_140CF4D00 = 1;
    }
    goto LABEL_29;
  }
LABEL_30:
  InbvAcquireLock(v5);
  RotBarSelection = v1;
  if ( v1 == 1 )
    RotBarInit();
  LODWORD(v3) = InbvReleaseLock();
  return (int)v3;
}
