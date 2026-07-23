/*
 * XREFs of PopDirectedDripsSendSuspendResumeNotification @ 0x1408E3B0C
 * Callers:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E3768 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     PopUmpoSendLegacyEvent @ 0x140775048 (PopUmpoSendLegacyEvent.c)
 *     PopSuspendResumeInvocation @ 0x14077983C (PopSuspendResumeInvocation.c)
 */

__int64 __fastcall PopDirectedDripsSendSuspendResumeNotification(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 result; // rax
  struct _DMA_ADAPTER *i; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _DMA_ADAPTER *v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF

  v4 = a2;
  if ( a1 )
  {
    for ( i = 0LL; ; i = v10 )
    {
      result = MmGetNextSession(i);
      v10 = (struct _DMA_ADAPTER *)result;
      if ( !result )
        break;
      v12 = 0LL;
      LODWORD(v12) = MmGetSessionId(result);
      BYTE4(v12) = v4;
      *(_WORD *)((char *)&v12 + 5) = 1;
      PopSuspendResumeInvocation(&v12, v7, v8, v9);
    }
  }
  else
  {
    v12 = 0LL;
    BYTE4(v12) = a2;
    PopSuspendResumeInvocation(&v12, a2, a3, a4);
    v11 = 0LL;
    if ( v4 )
    {
      *(_QWORD *)&v11 = 0x400000000LL;
      WORD6(v11) = 256;
    }
    else
    {
      *(_QWORD *)&v11 = 0x1200000003LL;
      WORD6(v11) = 1;
      PopUmpoSendLegacyEvent(&v11);
      DWORD1(v11) = 7;
    }
    return PopUmpoSendLegacyEvent(&v11);
  }
  return result;
}
