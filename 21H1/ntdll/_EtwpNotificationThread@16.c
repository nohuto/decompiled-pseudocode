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

_BYTE *__stdcall EtwpNotificationThread(int a1, int a2, int a3, int a4)
{
  _BYTE *Heap; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  char v8; // al
  _BYTE *result; // eax
  _DWORD v10[2]; // [esp+Ch] [ebp-11Ch] BYREF
  int v11; // [esp+14h] [ebp-114h]
  int v12; // [esp+18h] [ebp-110h]
  int v13; // [esp+1Ch] [ebp-10Ch] BYREF
  char v14; // [esp+23h] [ebp-105h]
  _BYTE v15[256]; // [esp+24h] [ebp-104h] BYREF

  v10[1] = -1;
  v12 = a2;
  Heap = v15;
  v5 = 256;
  v11 = a3;
  v14 = 0;
  v10[0] = -600000000;
  while ( 1 )
  {
    v6 = ZwTraceControl(16, 0, 0, Heap, v5, &v13);
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
  if ( Heap != v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  v5 = v13;
  Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, v13);
  if ( Heap )
  {
    v7 = 261;
    goto LABEL_4;
  }
  v8 = 1;
LABEL_6:
  TpSetWaitEx(v11, v12, v8 != 0 ? v10 : 0, 0);
  result = v15;
  if ( Heap != v15 )
  {
    if ( Heap )
      return (_BYTE *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return result;
}
