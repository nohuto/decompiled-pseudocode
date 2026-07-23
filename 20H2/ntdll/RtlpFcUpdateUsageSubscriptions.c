/*
 * XREFs of RtlpFcUpdateUsageSubscriptions @ 0x180102078
 * Callers:
 *     RtlSubscribeForFeatureUsageNotification @ 0x180101F70 (RtlSubscribeForFeatureUsageNotification.c)
 *     RtlUnsubscribeFromFeatureUsageNotifications @ 0x180101F80 (RtlUnsubscribeFromFeatureUsageNotifications.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     ZwSetSystemInformation @ 0x1800A05E0 (ZwSetSystemInformation.c)
 */

__int64 __fastcall RtlpFcUpdateUsageSubscriptions(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  int v4; // r14d
  NTSTATUS v6; // ebx
  int v7; // esi
  unsigned __int64 v8; // rax
  ULONG v9; // ebp
  _DWORD *Heap; // rax
  _DWORD *v11; // rdi
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm0

  v4 = a3;
  if ( a2 <= 0xFFFFFFFF )
  {
    v7 = a2;
    v8 = 20LL * (unsigned int)a2;
    if ( v8 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v9 = v8 + 4;
    if ( (unsigned int)v8 >= 0xFFFFFFFC )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
      v11 = Heap;
      if ( Heap )
      {
        *Heap = v7;
        v12 = 0;
        if ( a2 )
        {
          v13 = 0LL;
          do
          {
            v14 = 5 * v13;
            ++v12;
            v11[v14 + 1] = v4;
            v15 = *(_OWORD *)(a1 + 16 * v13);
            v13 = v12;
            *(_OWORD *)&v11[v14 + 2] = v15;
          }
          while ( v12 < a2 );
        }
        v6 = ZwSetSystemInformation(SystemFeatureUsageSubscriptionInformation, v11, v9);
        if ( v6 >= 0 )
          v6 = 0;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
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
