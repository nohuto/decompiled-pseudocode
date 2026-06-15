/*
 * XREFs of ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CAD60
 * Callers:
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800056A0 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056BC0 (-QueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056EA0 (-QueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180068540 (-QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CServerAudioSessionControl@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CCA70 (-QueryInterface@CServerAudioSessionControl@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110660 (-QueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PersistedEndpointPolicyRule@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801133A0 (-QueryInterface@PersistedEndpointPolicyRule@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EndpointIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013F600 (-QueryInterface@EndpointIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneTopology@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180141120 (-QueryInterface@PhoneTopology@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TelephonyController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180143630 (-QueryInterface@TelephonyController@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TelephonyControllerCallInstance@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180144300 (-QueryInterface@TelephonyControllerCallInstance@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::QueryInterface(CUnknown *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
      *a3 = this;
      (*(void (__fastcall **)(CUnknown *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
