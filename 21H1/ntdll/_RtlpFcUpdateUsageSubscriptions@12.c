/*
 * XREFs of _RtlpFcUpdateUsageSubscriptions@12 @ 0x4B3698AF
 * Callers:
 *     _RtlSubscribeForFeatureUsageNotification@8 @ 0x4B369810 (_RtlSubscribeForFeatureUsageNotification@8.c)
 *     _RtlUnsubscribeFromFeatureUsageNotifications@8 @ 0x4B369830 (_RtlUnsubscribeFromFeatureUsageNotifications@8.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _ZwSetSystemInformation@12 @ 0x4B2F4420 (_ZwSetSystemInformation@12.c)
 */

int __fastcall RtlpFcUpdateUsageSubscriptions(_DWORD *a1, unsigned int a2, unsigned __int8 a3)
{
  int v4; // esi
  _DWORD *Heap; // eax
  void *v6; // ebx
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  unsigned int v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // edi
  SIZE_T v13; // [esp-4h] [ebp-24h]
  _DWORD *v14; // [esp+Ch] [ebp-14h]
  int v16; // [esp+18h] [ebp-8h] BYREF
  SIZE_T Size; // [esp+1Ch] [ebp-4h] BYREF

  LODWORD(Size) = 4;
  v4 = RtlULongLongToUInt(&v16, 20 * a2, (20 * (unsigned __int64)a2) >> 32);
  if ( v4 >= 0 )
  {
    v4 = RtlULongPtrAdd(4u, v16, (int *)&Size);
    if ( v4 >= 0 )
    {
      LODWORD(v13) = Size;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v13);
      v6 = Heap;
      v14 = Heap;
      if ( Heap )
      {
        *Heap = a2;
        if ( a2 )
        {
          v7 = Heap + 1;
          v8 = a1;
          v16 = a3;
          v9 = a2;
          do
          {
            v10 = v8;
            *v7 = a3;
            v11 = v7 + 1;
            v8 += 4;
            v7 += 5;
            *v11 = *v10++;
            *++v11 = *v10++;
            *++v11 = *v10;
            v11[1] = v10[1];
            --v9;
          }
          while ( v9 );
          v6 = v14;
        }
        v4 = ZwSetSystemInformation(SystemFeatureUsageSubscriptionInformation, v6, Size);
        if ( v4 >= 0 )
          v4 = 0;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return v4;
}
