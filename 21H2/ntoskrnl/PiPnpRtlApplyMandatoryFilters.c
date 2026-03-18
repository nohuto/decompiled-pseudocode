/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x14077D454
 * Callers:
 *     PiCMMandatoryFilterCallback @ 0x1406CF4C0 (PiCMMandatoryFilterCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     PiDqQueryApplyObjectEvent @ 0x140775D50 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x1407792B4 (PiDqQueryEnumObject.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14077CB00 (IopDeviceInterfaceFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14078BEA4 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406E5780 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14077C860 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14077D2F8 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x14077D580 (SeQuerySessionIdTokenEx.c)
 *     PiAuVerifyAccessToObject @ 0x14078A644 (PiAuVerifyAccessToObject.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int64 a4,
        struct _SECURITY_SUBJECT_CONTEXT *SessionId,
        _BYTE *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT *v6; // rdi
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS SessionIdToken; // ecx
  __int64 v13; // r8
  _BYTE *v14; // rax
  int v15; // ebx
  int v16; // ebx
  BOOLEAN IsServiceSession[24]; // [rsp+30h] [rbp-18h] BYREF

  v6 = SessionId;
  IsServiceSession[0] = 0;
  ClientToken = SessionId->ClientToken;
  if ( !SessionId->ClientToken )
    ClientToken = SessionId->PrimaryToken;
  SessionIdToken = SeQuerySessionIdTokenEx(ClientToken, (PULONG)&SessionId, IsServiceSession);
  if ( SessionIdToken >= 0 )
  {
    if ( IsServiceSession[0] )
    {
      LOBYTE(SessionId) = 0;
      SessionIdToken = PiAuVerifyAccessToObject(
                         0xF0000u,
                         PiAuLocalSystemSecurityObject,
                         (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
                         v6,
                         (__int64)&SessionId);
      if ( SessionIdToken < 0 )
        return (unsigned int)SessionIdToken;
      if ( (_BYTE)SessionId )
      {
        v14 = a6;
LABEL_13:
        *v14 = 1;
        return (unsigned int)SessionIdToken;
      }
    }
    v14 = a6;
    v15 = a3 - 1;
    if ( v15 )
    {
      v16 = v15 - 2;
      if ( v16 )
      {
        if ( v16 != 2 )
          goto LABEL_13;
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v13, (__int64)v6, a6);
      }
      else
      {
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, (__int64)a2, a4, (int)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)PiPnpRtlApplyMandatoryDeviceFilters(a1, (__int64)a2, a4, (__int64)v6, a6);
    }
  }
  return (unsigned int)SessionIdToken;
}
