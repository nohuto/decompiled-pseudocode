/*
 * XREFs of ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180038414
 * Callers:
 *     ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x18003837C (-TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathInfo(const unsigned __int16 *a1, __int64 a2, struct DISPLAYCONFIG_PATH_INFO *a3)
{
  DISPLAYCONFIG_PATH_INFO *v3; // rbx
  DISPLAYCONFIG_MODE_INFO *v4; // r14
  int DisplayConfigBufferSizes; // eax
  bool v8; // sf
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  __int64 v12; // rsi
  UINT32 id; // eax
  LONG DeviceInfo; // eax
  signed int v15; // edi
  const unsigned __int16 *v16; // rax
  int v17; // edx
  int v18; // ecx
  UINT32 numPathArrayElements; // [rsp+30h] [rbp-49h] BYREF
  UINT32 numModeInfoArrayElements[3]; // [rsp+34h] [rbp-45h] BYREF
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+40h] [rbp-39h] BYREF
  char v23; // [rsp+54h] [rbp-25h] BYREF

  numPathArrayElements = 0;
  v3 = 0LL;
  numModeInfoArrayElements[0] = 0;
  v4 = 0LL;
  do
  {
    if ( v3 )
    {
      (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_PATH_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v3);
      v3 = 0LL;
    }
    if ( v4 )
    {
      (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_MODE_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
      v4 = 0LL;
    }
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, numModeInfoArrayElements);
    v8 = DisplayConfigBufferSizes < 0;
    if ( DisplayConfigBufferSizes > 0 )
    {
      DisplayConfigBufferSizes = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
      v8 = DisplayConfigBufferSizes < 0;
    }
    if ( v8 )
      break;
    v9 = 72LL * numPathArrayElements;
    if ( !is_mul_ok(numPathArrayElements, 0x48uLL) )
      v9 = -1LL;
    v3 = (DISPLAYCONFIG_PATH_INFO *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v9);
    if ( !v3 )
      goto LABEL_35;
    v10 = (unsigned __int64)numModeInfoArrayElements[0] << 6;
    if ( !is_mul_ok(numModeInfoArrayElements[0], 0x40uLL) )
      v10 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)(*(__int64 (__fastcall **)(WPF::HeapBase *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                 WPF::g_pProcessHeap,
                                                 v10);
    v4 = modeInfoArray;
    if ( !modeInfoArray )
    {
      DisplayConfigBufferSizes = -2147024882;
      break;
    }
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 v3,
                                 numModeInfoArrayElements,
                                 modeInfoArray,
                                 0LL);
    if ( DisplayConfigBufferSizes > 0 )
      DisplayConfigBufferSizes = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
  }
  while ( DisplayConfigBufferSizes == -2147024774 );
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v12 = 0LL;
    if ( numPathArrayElements )
    {
      while ( 1 )
      {
        memset_0(&requestPacket, 0, 0x54uLL);
        requestPacket.type = DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME;
        requestPacket.adapterId = v3[v12].sourceInfo.adapterId;
        id = v3[v12].sourceInfo.id;
        requestPacket.size = 84;
        requestPacket.id = id;
        DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
        v15 = DeviceInfo;
        if ( DeviceInfo > 0 )
          v15 = (unsigned __int16)DeviceInfo | 0x80070000;
        if ( v15 >= 0 )
        {
          v16 = a1;
          do
          {
            v17 = *(const unsigned __int16 *)((char *)v16 + &v23 - (char *)a1);
            v18 = *v16 - v17;
            if ( v18 )
              break;
            ++v16;
          }
          while ( v17 );
          if ( !v18 )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= numPathArrayElements )
          goto LABEL_35;
      }
      if ( (_DWORD)v12 != -1 )
      {
        *(_OWORD *)&a3->sourceInfo.adapterId.LowPart = *(_OWORD *)&v3[(int)v12].sourceInfo.adapterId.LowPart;
        *(_OWORD *)&a3->sourceInfo.statusFlags = *(_OWORD *)&v3[(int)v12].sourceInfo.statusFlags;
        *(_OWORD *)&a3->targetInfo.modeInfoIdx = *(_OWORD *)&v3[(int)v12].targetInfo.modeInfoIdx;
        *(_OWORD *)&a3->targetInfo.refreshRate.Numerator = *(_OWORD *)&v3[(int)v12].targetInfo.refreshRate.Numerator;
        *(_QWORD *)&a3->targetInfo.statusFlags = *(_QWORD *)&v3[(int)v12].targetInfo.statusFlags;
        goto LABEL_29;
      }
    }
  }
LABEL_35:
  v15 = -2147024809;
LABEL_29:
  if ( v3 )
    (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_PATH_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
  if ( v4 )
    (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_MODE_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  return (unsigned int)v15;
}
