/*
 * XREFs of _TppCallbackCheckThreadAfterCallback@4 @ 0x4B2B638B
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 * Callees:
 *     _TppCheckForTransactions@0 @ 0x4B2B68E9 (_TppCheckForTransactions@0.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     _RtlSetThreadSubProcessTag@4 @ 0x4B2DF1C0 (_RtlSetThreadSubProcessTag@4.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

void __thiscall TppCallbackCheckThreadAfterCallback(int this)
{
  _GUID *p_ActivityId; // edi
  struct _TEB *v3; // eax
  int v4; // eax
  int v5; // edx
  size_t v6; // [esp-4h] [ebp-74h]
  size_t v7; // [esp-4h] [ebp-74h]
  __int64 Buf2; // [esp+Ch] [ebp-64h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+18h] [ebp-58h] BYREF

  if ( this )
  {
    p_ActivityId = &NtCurrentTeb()->ActivityId;
    LODWORD(v6) = 8;
    v3 = NtCurrentTeb();
    p_ActivityId->Data1 = *(_DWORD *)(this + 136);
    p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
    p_ActivityId->Data1 = *(_DWORD *)(this + 140);
    *(_QWORD *)&p_ActivityId->Data2 = *(_QWORD *)(this + 144);
    Buf2 = 0LL;
    if ( memcmp(v3->WorkingOnBehalfTicket, &Buf2, v6)
      && ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadWorkOnBehalfTicket, &Buf2, 8u) >= 0 )
    {
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = Buf2;
    }
    if ( (*(_BYTE *)(this + 40) & 1) != 0 && (*(_BYTE *)(this + 56) & 1) == 0 )
    {
      RtlDeactivateActivationContextUnsafeFast(this, HIDWORD(v7));
      *(_BYTE *)(this + 40) &= ~1u;
    }
    if ( *(_DWORD *)(this + 44) && (*(_BYTE *)(this + 56) & 2) == 0 )
    {
      RtlSetThreadSubProcessTag(0);
      *(_DWORD *)(this + 44) = 0;
    }
    v4 = *(_DWORD *)(this + 72);
    if ( v4 && (*(_BYTE *)(v4 + 268) & 1) == 0 )
    {
      if ( NtCurrentTeb()->IsImpersonating && (*(_BYTE *)(this + 56) & 4) == 0 )
      {
        LODWORD(v7) = 80;
        memset(&ExceptionRecord, 0, v7);
        ExceptionRecord.ExceptionInformation[0] = *(_DWORD *)(this + 48);
        ExceptionRecord.ExceptionInformation[1] = *(_DWORD *)(this + 52);
        ExceptionRecord.ExceptionCode = -1073740016;
        ExceptionRecord.NumberParameters = 2;
        RtlRaiseException(&ExceptionRecord);
      }
      v5 = *(_DWORD *)(this + 56);
      if ( (v5 & 0x10) == 0 && (unsigned __int8)TppCheckForTransactions() )
      {
        DbgPrintEx(
          84,
          0,
          (int)"ThreadPool: callback %p(%p) returned with a transaction uncleared\n",
          *(_DWORD *)(this + 48));
        LODWORD(v7) = 80;
        memset(&ExceptionRecord, 0, v7);
        ExceptionRecord.ExceptionCode = -1073740003;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( (v5 & 0x20) == 0 && NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        DbgPrintEx(
          84,
          0,
          (int)"ThreadPool: callback %p(%p) returned with the loader lock held\n",
          *(_DWORD *)(this + 48));
        LODWORD(v7) = 80;
        memset(&ExceptionRecord, 0, v7);
        ExceptionRecord.ExceptionCode = -1073740002;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( (v5 & 0x40) == 0 && NtCurrentTeb()->PreferredLanguages )
      {
        DbgPrintEx(
          84,
          0,
          (int)"ThreadPool: callback %p(%p) returned with preferred languages set\n",
          *(_DWORD *)(this + 48));
        LODWORD(v7) = 80;
        memset(&ExceptionRecord, 0, v7);
        ExceptionRecord.ExceptionCode = -1073740001;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( (v5 & 0x80u) == 0 )
      {
        if ( NtCurrentTeb()->SavedPriorityState )
        {
          DbgPrintEx(
            84,
            0,
            (int)"ThreadPool: callback %p(%p) returned with background priorities set\n",
            *(_DWORD *)(this + 48));
          LODWORD(v7) = 80;
          memset(&ExceptionRecord, 0, v7);
          ExceptionRecord.ExceptionCode = -1073740000;
          ExceptionRecord.NumberParameters = 0;
          RtlRaiseException(&ExceptionRecord);
        }
      }
    }
  }
}
