/*
 * XREFs of RIMCmDeactivateContact @ 0x1C017E80C
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C015D440 (RIMEndAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01779B8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0178B10 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017ACDC (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C017B2EC (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C00D3740 (memset.c)
 *     RIMCmIsContactSuppressed @ 0x1C017EA1C (RIMCmIsContactSuppressed.c)
 *     rimReleaseCursor @ 0x1C017EC60 (rimReleaseCursor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMCmDeactivateContact(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rsi
  int v7; // ebp
  _QWORD *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  int v11; // eax
  int IsContactSuppressed; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD *result; // rax

  v4 = a1 + 230;
  v7 = -__CFSHR__(*(_DWORD *)(a2 + 32), 3);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v8 = (_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v9 + 8) != a2 + 16 )
    goto LABEL_21;
  v10 = *(_QWORD **)(a2 + 24);
  if ( (_QWORD *)*v10 != v8 )
    goto LABEL_21;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  v11 = a1[238];
  if ( !v11 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3, a4);
    v11 = a1[238];
  }
  a1[238] = v11 - 1;
  IsContactSuppressed = RIMCmIsContactSuppressed(a2);
  v16 = (unsigned int)a1[239];
  if ( !IsContactSuppressed )
  {
    if ( !(_DWORD)v16 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v14, v15);
      LODWORD(v16) = a1[239];
    }
    v16 = (unsigned int)(v16 - 1);
    a1[239] = v16;
  }
  if ( a1[238] < (unsigned int)v16 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v14, v15);
  if ( !v7 && (a1[180] > 1u || (a1[78] & 0x20) != 0) )
    rimReleaseCursor(a1, *(unsigned int *)(a2 + 4));
  result = memset((void *)a2, 0, 0xB18uLL);
  if ( !v7 )
  {
    result = *(_QWORD **)v4;
    if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) == v4 )
    {
      *v8 = result;
      *(_QWORD *)(a2 + 24) = v4;
      result[1] = v8;
      *(_QWORD *)v4 = v8;
      return result;
    }
LABEL_21:
    __fastfail(3u);
  }
  return result;
}
