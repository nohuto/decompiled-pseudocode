/*
 * XREFs of _EtwpNotificationThread@16 @ 0x4B2AE380
 * Callers:
 *     <none>
 * Callees:
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

void __stdcall EtwpNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3, TP_WAIT_RESULT a4)
{
  _ETW_NOTIFICATION_HEADER *Heap; // esi
  ULONG v5; // ebx
  NTSTATUS v6; // eax
  int v7; // edi
  char v8; // al
  SIZE_T v9; // [esp-4h] [ebp-12Ch]
  _DWORD v10[2]; // [esp+Ch] [ebp-11Ch] BYREF
  PTP_WAIT Wait; // [esp+14h] [ebp-114h]
  HANDLE Handle; // [esp+18h] [ebp-110h]
  ULONG ReturnLength; // [esp+1Ch] [ebp-10Ch] BYREF
  char v14; // [esp+23h] [ebp-105h]
  _BYTE OutputBuffer[256]; // [esp+24h] [ebp-104h] BYREF

  v10[1] = -1;
  Handle = a2;
  Heap = (_ETW_NOTIFICATION_HEADER *)OutputBuffer;
  v5 = 256;
  Wait = a3;
  v14 = 0;
  v10[0] = -600000000;
  while ( 1 )
  {
    v6 = ZwTraceControl(EtwReceiveNotification, 0, 0, Heap, v5, &ReturnLength);
    v7 = v6;
    if ( v6 < 0 )
      break;
    EtwDeliverDataBlock(Heap);
LABEL_4:
    if ( v7 != 261 )
    {
      v8 = v14;
      goto LABEL_6;
    }
  }
  if ( v6 != -1073741789 )
    goto LABEL_4;
  if ( Heap != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  v5 = ReturnLength;
  LODWORD(v9) = ReturnLength;
  Heap = (_ETW_NOTIFICATION_HEADER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
  if ( Heap )
  {
    v7 = 261;
    goto LABEL_4;
  }
  v8 = 1;
LABEL_6:
  TpSetWaitEx(Wait, Handle, v8 != 0 ? (PLARGE_INTEGER)v10 : 0, 0);
  if ( Heap != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
  {
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
}
