/*
 * XREFs of RtlpFcUpdateUsageSubscriptions @ 0x180101F18
 * Callers:
 *     RtlSubscribeForFeatureUsageNotification @ 0x180101E10 (RtlSubscribeForFeatureUsageNotification.c)
 *     RtlUnsubscribeFromFeatureUsageNotifications @ 0x180101E20 (RtlUnsubscribeFromFeatureUsageNotifications.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     ZwSetSystemInformation @ 0x1800A0BB0 (ZwSetSystemInformation.c)
 */

__int64 __fastcall RtlpFcUpdateUsageSubscriptions(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  int v4; // r14d
  int v6; // ebx
  int v7; // esi
  unsigned __int64 v8; // rax
  _DWORD *Heap; // rax
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v14; // xmm0

  v4 = a3;
  if ( a2 <= 0xFFFFFFFF )
  {
    v7 = a2;
    v8 = 20LL * (unsigned int)a2;
    if ( v8 > 0xFFFFFFFF || (unsigned int)v8 >= 0xFFFFFFFC )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v8 + 4));
      v10 = (__int64)Heap;
      if ( Heap )
      {
        *Heap = v7;
        v11 = 0;
        if ( a2 )
        {
          v12 = 0LL;
          do
          {
            v13 = 5 * v12;
            ++v11;
            *(_DWORD *)(v10 + 4 * v13 + 4) = v4;
            v14 = *(_OWORD *)(a1 + 16 * v12);
            v12 = v11;
            *(_OWORD *)(v10 + 4 * v13 + 8) = v14;
          }
          while ( v11 < a2 );
        }
        v6 = ZwSetSystemInformation();
        if ( v6 >= 0 )
          v6 = 0;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
