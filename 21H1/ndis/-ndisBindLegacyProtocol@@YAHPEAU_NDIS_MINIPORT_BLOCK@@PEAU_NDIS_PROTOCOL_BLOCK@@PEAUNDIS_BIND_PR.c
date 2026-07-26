/*
 * XREFs of ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011FCD8
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0103C4C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018924 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C0028C4C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x1C00296A4 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C0029D78 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002A6DC (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C0096DFC (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01044CC (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0104E18 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0105174 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisBindLegacyProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _NDIS_PROTOCOL_BLOCK *this,
        struct NDIS_BIND_PROTOCOL_LINK *a3)
{
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _NDIS_BIND_PATHS *BindPaths; // r14
  _UNICODE_STRING *Paths; // r14
  _DEVICE_OBJECT *PhysicalDeviceObject; // r12
  __m128i v10; // xmm0
  __int16 v11; // ax
  wchar_t *PoolWithTag; // rax
  int v13; // edx
  int v14; // r9d
  void *m_AdditionalContext; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // edx
  int v21; // r9d
  int v23; // [rsp+28h] [rbp-E0h]
  void *v24; // [rsp+40h] [rbp-C8h]
  _UNICODE_STRING Destination_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING Source_8; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v28[4]; // [rsp+98h] [rbp-70h] BYREF
  _UNICODE_STRING v29; // [rsp+B8h] [rbp-50h]
  _UNICODE_STRING *v30; // [rsp+C8h] [rbp-40h]
  unsigned int v31; // [rsp+F0h] [rbp-18h]
  struct _KEVENT Event; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+170h] [rbp+68h] BYREF

  v33 = -1073741823;
  Destination_8 = 0LL;
  Source_8 = 0LL;
  DestinationString = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xAu,
      (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
      (char)a1,
      this);
  WAIT_FOR_PROTO_MUTEX(this);
  if ( !ndisIsMiniportStarted(a1)
    || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
    || PnPDeviceState == NdisPnPDeviceStopped )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        6u,
        0xBu,
        (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
        (char)a1,
        this);
  }
  else if ( a1->EthDB )
  {
    BindPaths = a1->BindPaths;
    this->BindDeviceName = &a1->MiniportName;
    Paths = BindPaths->Paths;
    this->RootDeviceName = Paths;
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    if ( ndisReferenceProtocol(this, 7u) )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
      Source_8 = *Paths;
      v10 = (__m128i)Source_8;
      Source_8.MaximumLength -= ndisDeviceStr.Length;
      Source_8.Length = _mm_cvtsi128_si32(v10) - ndisDeviceStr.Length;
      Source_8.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
      v11 = Paths->Length - ndisDeviceStr.Length;
      Destination_8.Length = 0;
      Destination_8.MaximumLength = this->Name.Length + DestinationString.Length + v11 + 2;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination_8.MaximumLength, 0x2020444Eu);
      Destination_8.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Destination_8.MaximumLength);
        RtlCopyUnicodeString(&Destination_8, &this->Name);
        RtlAppendUnicodeStringToString(&Destination_8, &DestinationString);
        RtlAppendUnicodeStringToString(&Destination_8, &Source_8);
        ndisUpdateMinimumStackVersion(a1, this->MajorNdisVersion, this->MinorNdisVersion);
        v28[0] = 0LL;
        v28[1] = this;
        v28[3] = a1;
        v29 = Destination_8;
        v30 = Paths;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        if ( !this->Ref.Closing )
        {
          v33 = 0;
          this->BindingAdapter = a1;
          m_AdditionalContext = a3->BindState.m_AdditionalContext;
          if ( m_AdditionalContext )
          {
            a3->BindState.m_AdditionalContext = 0LL;
            ndisOpenAdapterLegacyProtocol(
              *(int **)m_AdditionalContext,
              0LL,
              *((void ***)m_AdditionalContext + 1),
              *((unsigned int **)m_AdditionalContext + 2),
              *((enum _NDIS_MEDIUM **)m_AdditionalContext + 3),
              *((_DWORD *)m_AdditionalContext + 8),
              *((struct _NDIS_PROTOCOL_BLOCK **)m_AdditionalContext + 5),
              *((void **)m_AdditionalContext + 6),
              *((struct _UNICODE_STRING **)m_AdditionalContext + 7),
              0,
              0LL,
              (int *)&v33);
            v18 = *((_QWORD *)m_AdditionalContext + 1);
            if ( *(_QWORD *)v18 )
              *(_DWORD *)(*(_QWORD *)v18 + 224LL) |= 0x20000000u;
          }
          else
          {
            v23 = (int)PhysicalDeviceObject;
            ((void (__fastcall *)(unsigned int *, _QWORD *, _UNICODE_STRING *, _UNICODE_STRING *))this->BindAdapterHandler)(
              &v33,
              v28,
              Paths,
              &Destination_8);
          }
          v19 = v33;
          if ( v33 == 259 )
          {
            ndisWaitForKernelObject(&Event);
            v19 = v31;
            v33 = v31;
          }
          this->BindingAdapter = 0LL;
          if ( !v19 )
            ndisNotifyWmiBindUnbind(a1, this, 1u);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ZZL(*((_QWORD *)WPP_GLOBAL_Control + 8), v16, v17, 0xCu, v23, (__int64)&this->Name);
        }
        ExFreePoolWithTag(Destination_8.Buffer, 0);
        this->BindDeviceName = 0LL;
        ndisDereferenceProtocol(this, v20, 7u, v21);
      }
      else
      {
        ndisDereferenceProtocol(this, v13, 7u, v14);
      }
    }
  }
  RELEASE_PROT_MUTEX(this);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v33;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xDu,
      (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
      (char)a1,
      (char)this,
      v24);
  }
  return v33;
}
