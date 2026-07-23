/*
 * XREFs of EtwpProcessNotification @ 0x1800457F0
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800452B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043554 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180049AF0 (EtwProcessPrivateLoggerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

char __fastcall EtwpProcessNotification(__int64 a1, __int16 *a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
{
  __int16 v5; // r10
  char v6; // di
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx

  v5 = *(_WORD *)(a1 + 98);
  v6 = 0;
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( (unsigned __int16)((v5 & 0x3FFF) - 2) <= 1u )
    {
      if ( a2[39] < 0 && PrivateLoggerNotificationEntry )
        v8 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
      else
        v8 = *(_QWORD *)(a1 + 88);
      *a3 = v8;
      *((_QWORD *)a2 + 3) = v8;
      EtwpUpdateEnableInfoAndCallback(a1, (__int64)a2);
      goto LABEL_6;
    }
  }
  else if ( *(_DWORD *)a2 == 4 )
  {
    if ( (unsigned __int16)((v5 & 0x3FFF) - 2) <= 1u )
    {
      *a3 = *(_QWORD *)(a1 + 88);
      *a4 = EtwProcessPrivateLoggerRequest(a2);
      v6 = 1;
      *a5 = 1;
    }
  }
  else
  {
    if ( (v5 & 0x3FFF) == *(_DWORD *)a2 )
    {
      v10 = *(_QWORD *)(a1 + 88);
      *((_QWORD *)a2 + 3) = v10;
      v11 = *(_QWORD *)(a1 + 56);
      *a3 = v10;
      *a4 = (*(__int64 (__fastcall **)(__int16 *, __int64))(a1 + 48))(a2, v11);
LABEL_6:
      *a5 = 1;
      return v6;
    }
    if ( (v5 & 0x3FFF) == 0xA
      && *(_DWORD *)a2 == 7
      && *((_DWORD *)a2 + 9) == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    {
      *a4 = (*(__int64 (__fastcall **)(__int16 *, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
      *a5 = 1;
    }
  }
  return v6;
}
