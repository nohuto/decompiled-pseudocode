/*
 * XREFs of _RtlpFcNotifyFeatureUsageTarget@8 @ 0x4B375B93
 * Callers:
 *     _RtlpFcSendFeatureUsageNotifications@12 @ 0x4B375C97 (_RtlpFcSendFeatureUsageNotifications@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtQueryWnfStateData@24 @ 0x4B2F3FB0 (_NtQueryWnfStateData@24.c)
 *     _NtUpdateWnfStateData@28 @ 0x4B2F4660 (_NtUpdateWnfStateData@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpFcNotifyFeatureUsageTarget(int *a1, WNF_STATE_NAME *a2)
{
  PVOID Heap; // edi
  NTSTATUS updated; // esi
  ULONG v5; // edx
  ULONG v6; // ecx
  ULONG v7; // esi
  int v8; // eax
  ULONG v9; // edx
  SIZE_T v11; // [esp-4h] [ebp-24h]
  ULONG ChangeStamp; // [esp+Ch] [ebp-14h] BYREF
  ULONG BufferSize; // [esp+10h] [ebp-10h] BYREF
  WNF_STATE_NAME StateName; // [esp+14h] [ebp-Ch] BYREF

  StateName = *a2;
  LODWORD(v11) = 4096;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  if ( !Heap )
    return -1073741801;
  do
  {
    BufferSize = 4096;
    updated = NtQueryWnfStateData(&StateName, 0, 0, &ChangeStamp, Heap, &BufferSize);
    if ( updated >= 0 )
    {
      v5 = 0;
      BufferSize &= -((BufferSize & 7) == 0);
      v6 = BufferSize;
      v7 = BufferSize >> 3;
      if ( BufferSize >> 3 )
      {
        v8 = *a1;
        do
        {
          if ( *((_DWORD *)Heap + 2 * v5) == v8 )
          {
            if ( *((_WORD *)Heap + 4 * v5 + 2) == *((_WORD *)a1 + 2) )
              goto LABEL_12;
            v8 = *a1;
          }
          ++v5;
        }
        while ( v5 < v7 );
      }
      v9 = BufferSize + 8;
      if ( BufferSize + 8 <= 0x1000 )
      {
        v6 = BufferSize + 8;
        *((_DWORD *)Heap + 2 * v7) = *a1;
        *((_WORD *)Heap + 4 * v7 + 2) = *((_WORD *)a1 + 2);
        BufferSize = v9;
      }
LABEL_12:
      updated = NtUpdateWnfStateData(&StateName, Heap, v6, 0, 0, ChangeStamp, 1u);
    }
  }
  while ( updated == -1073741823 );
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return updated;
}
