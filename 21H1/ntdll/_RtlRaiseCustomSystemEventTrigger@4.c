/*
 * XREFs of _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20
 * Callers:
 *     <none>
 * Callees:
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtQueryWnfStateData@24 @ 0x4B2F3FB0 (_NtQueryWnfStateData@24.c)
 *     _NtQueryWnfStateNameInformation@20 @ 0x4B2F3FC0 (_NtQueryWnfStateNameInformation@20.c)
 *     _NtUpdateWnfStateData@28 @ 0x4B2F4660 (_NtUpdateWnfStateData@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlGUIDFromString@8 @ 0x4B362640 (_RtlGUIDFromString@8.c)
 *     _RtlpCtContextFree@4 @ 0x4B369E26 (_RtlpCtContextFree@4.c)
 *     _RtlpCtContextInit@8 @ 0x4B369E6A (_RtlpCtContextInit@8.c)
 *     _RtlpGetSebDataAndFilterBuffer@40 @ 0x4B369F12 (_RtlpGetSebDataAndFilterBuffer@40.c)
 */

int __stdcall RtlRaiseCustomSystemEventTrigger(int a1)
{
  int WnfStateData; // esi
  int Heap; // eax
  _DWORD *v3; // ebx
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-44h] BYREF
  int v7; // [esp+10h] [ebp-40h] BYREF
  int *v8; // [esp+14h] [ebp-3Ch] BYREF
  int v9; // [esp+18h] [ebp-38h] BYREF
  UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-34h] BYREF
  int v11; // [esp+24h] [ebp-2Ch]
  int v12; // [esp+28h] [ebp-28h]
  int v13; // [esp+2Ch] [ebp-24h]
  int v14; // [esp+30h] [ebp-20h]
  _DWORD v15[2]; // [esp+34h] [ebp-1Ch] BYREF
  _BYTE v16[16]; // [esp+3Ch] [ebp-14h] BYREF

  v8 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15[0] = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v15[1] = 1099172670;
  memset(v16, 0, sizeof(v16));
  if ( !a1 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 4));
  WnfStateData = RtlGUIDFromString(&DestinationString.Length, (int)v16);
  if ( WnfStateData < 0 )
    return WnfStateData;
  if ( _InterlockedExchange(RtlpCtPublishInProgress, 1) )
    return -1073741823;
  v6 = 4096;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 4096);
  v3 = (_DWORD *)Heap;
  if ( Heap )
  {
    WnfStateData = NtQueryWnfStateData((int)v15, 0, 0, (int)&v9, Heap, (int)&v6);
    if ( WnfStateData >= 0 )
    {
      WnfStateData = NtQueryWnfStateNameInformation((int)v15, 2, 0, (int)&v7, 4);
      if ( WnfStateData >= 0 )
      {
        if ( v7 )
        {
          WnfStateData = NtQueryWnfStateNameInformation((int)v15, 1, 0, (int)&v7, 4);
          if ( WnfStateData >= 0 )
          {
            if ( v7 )
            {
              v6 = 4096;
              WnfStateData = RtlpGetSebDataAndFilterBuffer(v16, v4, v3 + 2, &v6, v11, v12, v13, v14);
              if ( WnfStateData >= 0 )
              {
                v3[1] = -1;
                *v3 = 0;
                *v3 = 4 * (v6 & 0xFFF | 0x100000);
                WnfStateData = RtlpCtContextInit(&v8, v9);
                if ( WnfStateData >= 0 )
                {
                  WnfStateData = NtUpdateWnfStateData((int)v15, (int)v3, v6 + 8, 0, 0, v9, 1);
                  if ( WnfStateData >= 0 )
                  {
                    TpPostWork(*v8);
                    goto LABEL_22;
                  }
                }
                if ( v8 )
                  RtlpCtContextFree();
              }
            }
            else
            {
              WnfStateData = -1073741653;
            }
          }
        }
        else
        {
          WnfStateData = -1073741823;
        }
      }
    }
  }
  else
  {
    WnfStateData = -1073741670;
  }
  _InterlockedExchange(RtlpCtPublishInProgress, 0);
LABEL_22:
  if ( v3 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v3);
  return WnfStateData;
}
