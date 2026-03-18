/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x14063BC00
 * Callers:
 *     PiDqQueryEnumObject @ 0x140641DA4 (PiDqQueryEnumObject.c)
 *     PiUEventApplyAdditionalFilters @ 0x140649748 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406CEBD0 (IopDeviceInterfaceFilterCallback.c)
 *     PiCMMandatoryFilterCallback @ 0x1406D96C0 (PiCMMandatoryFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x1406EC1AC (PiCMValidateDeviceInstance.c)
 *     IoGetDeviceInterfaceAlias @ 0x140727720 (IoGetDeviceInterfaceAlias.c)
 *     PiDqQueryApplyObjectEvent @ 0x14075EE34 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     SeQuerySessionIdTokenEx @ 0x14063BB10 (SeQuerySessionIdTokenEx.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14063C738 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1406410B8 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiAuVerifyAccessToObject @ 0x1406CB0D0 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DF688 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
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
  BOOLEAN IsServiceSession[40]; // [rsp+30h] [rbp-28h] BYREF

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
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v13, v6, a6);
      }
      else
      {
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, a2, a4, (_DWORD)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)PiPnpRtlApplyMandatoryDeviceFilters(a1, a2, a4, (_DWORD)v6, (__int64)a6);
    }
  }
  return (unsigned int)SessionIdToken;
}
