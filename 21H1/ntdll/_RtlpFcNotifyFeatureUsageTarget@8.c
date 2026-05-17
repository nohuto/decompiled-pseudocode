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

int __fastcall RtlpFcNotifyFeatureUsageTarget(int *a1, _DWORD *a2)
{
  int Heap; // edi
  int WnfStateData; // esi
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // edx
  int v11; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v12; // [esp+10h] [ebp-10h] BYREF
  _DWORD v13[2]; // [esp+14h] [ebp-Ch] BYREF

  v13[0] = *a2;
  v13[1] = a2[1];
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 4096);
  if ( !Heap )
    return -1073741801;
  do
  {
    v12 = 4096;
    WnfStateData = NtQueryWnfStateData((int)v13, 0, 0, (int)&v11, Heap, (int)&v12);
    if ( WnfStateData >= 0 )
    {
      v5 = 0;
      v12 &= -((v12 & 7) == 0);
      v6 = v12;
      v7 = v12 >> 3;
      if ( v12 >> 3 )
      {
        v8 = *a1;
        do
        {
          if ( *(_DWORD *)(Heap + 8 * v5) == v8 )
          {
            if ( *(_WORD *)(Heap + 8 * v5 + 4) == *((_WORD *)a1 + 2) )
              goto LABEL_12;
            v8 = *a1;
          }
          ++v5;
        }
        while ( v5 < v7 );
      }
      v9 = v12 + 8;
      if ( v12 + 8 <= 0x1000 )
      {
        v6 = v12 + 8;
        *(_DWORD *)(Heap + 8 * v7) = *a1;
        *(_WORD *)(Heap + 8 * v7 + 4) = *((_WORD *)a1 + 2);
        v12 = v9;
      }
LABEL_12:
      WnfStateData = NtUpdateWnfStateData((int)v13, Heap, v6, 0, 0, v11, 1);
    }
  }
  while ( WnfStateData == -1073741823 );
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return WnfStateData;
}
