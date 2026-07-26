/*
 * XREFs of ?ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C00666F4
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C0066A50 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall ndisIMQueueDeviceInstance(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        void *a3)
{
  unsigned int v6; // ebx
  _NDIS_PENDING_IM_INSTANCE *PoolWithTag; // rax
  int v8; // edx
  _NDIS_PENDING_IM_INSTANCE *v9; // rdi
  unsigned __int16 v10; // ax
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rsi

  v6 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x31u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  PoolWithTag = (_NDIS_PENDING_IM_INSTANCE *)ExAllocatePoolWithTag(NonPagedPoolNx, a2->Length + 34LL, 0x6964444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Context = a3;
    v10 = a2->Length + 2;
    v9->Name.Length = 0;
    v9->Name.MaximumLength = v10;
    v9->Name.Buffer = (wchar_t *)&v9[1];
    RtlUpcaseUnicodeString(&v9->Name, a2, 0);
    PendingDeviceList = a1->PendingDeviceList;
    if ( PendingDeviceList )
    {
      while ( !RtlEqualUnicodeString(&v9->Name, &PendingDeviceList->Name, 1u) )
      {
        PendingDeviceList = PendingDeviceList->Next;
        if ( !PendingDeviceList )
        {
          PendingDeviceList = a1->PendingDeviceList;
          goto LABEL_9;
        }
      }
      ExFreePoolWithTag(v9, 0);
      v6 = 65539;
    }
    else
    {
LABEL_9:
      v9->Next = PendingDeviceList;
      a1->PendingDeviceList = v9;
    }
  }
  else
  {
    v6 = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1u,
      0x32u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v6);
  return v6;
}
