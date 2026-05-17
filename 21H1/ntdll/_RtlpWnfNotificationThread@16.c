/*
 * XREFs of _RtlpWnfNotificationThread@16 @ 0x4B2DEA10
 * Callers:
 *     <none>
 * Callees:
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpWnfProcessCurrentDescriptor@8 @ 0x4B2DECC3 (_RtlpWnfProcessCurrentDescriptor@8.c)
 *     _NtGetCompleteWnfStateSubscription@24 @ 0x4B2F3890 (_NtGetCompleteWnfStateSubscription@24.c)
 *     _RtlpWnfCalculateAndSetNextTimer@0 @ 0x4B33C27B (_RtlpWnfCalculateAndSetNextTimer@0.c)
 */

int __stdcall RtlpWnfNotificationThread(int a1, int a2, int a3, int a4)
{
  int result; // eax
  _DWORD *v5; // ebx
  int *Heap; // esi
  int v7; // edi
  int v8; // eax
  _DWORD v9[2]; // [esp+Ch] [ebp-14h] BYREF
  int v10; // [esp+14h] [ebp-Ch] BYREF
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v9[1] = -1;
  result = 0;
  v5 = 0;
  v9[0] = -50000000;
  Heap = 0;
  v10 = 0;
  v7 = 0;
  v11 = 0;
  v12 = 0;
  if ( !dword_4B3A664C )
    return result;
  TpSetWaitEx(a3, a2, 0, 0);
  v8 = 0;
  while ( 1 )
  {
    if ( Heap )
      goto LABEL_6;
    Heap = (int *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 4144);
    if ( !Heap )
      break;
    v8 = v12;
LABEL_6:
    result = NtGetCompleteWnfStateSubscription(v5, &v10, v8, v7, Heap, 4144);
    if ( result < 0 )
      goto LABEL_7;
    v7 = RtlpWnfProcessCurrentDescriptor(Heap, 0);
    if ( v7 == 259 )
    {
      v5 = 0;
      v8 = 0;
      v10 = 0;
      v7 = 0;
      v11 = 0;
      Heap = 0;
      v12 = 0;
    }
    else
    {
      v5 = Heap + 2;
      v10 = *Heap;
      v11 = Heap[1];
      v8 = Heap[6];
      v12 = v8;
      if ( v7 == -1073741267 )
      {
        RtlpWnfCalculateAndSetNextTimer();
        v8 = v12;
        Heap = 0;
      }
    }
  }
  result = -1073741801;
LABEL_7:
  if ( result != -2147483622 )
    result = TpSetWaitEx(a3, a2, v9, 0);
  if ( Heap )
    return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return result;
}
