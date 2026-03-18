/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x1405D7C84
 * Callers:
 *     PiDqQueryEnumObject @ 0x1405D73F4 (PiDqQueryEnumObject.c)
 *     PiUEventApplyAdditionalFilters @ 0x140648158 (PiUEventApplyAdditionalFilters.c)
 *     IopGetDeviceInterfaces @ 0x1406BE69C (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x1406C1CD8 (PiCMValidateDeviceInstance.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406FC330 (IopDeviceInterfaceFilterCallback.c)
 *     PiCMMandatoryFilterCallback @ 0x140706B40 (PiCMMandatoryFilterCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x140719730 (IoGetDeviceInterfaceAlias.c)
 *     PiDqQueryApplyObjectEvent @ 0x140750254 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1405D7A64 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1405D7B28 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x1405D7DD0 (SeQuerySessionIdTokenEx.c)
 *     PiAuVerifyAccessToObject @ 0x1406F7FE0 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14070D258 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        __int64 a2,
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
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, a2, a4, (int)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)PiPnpRtlApplyMandatoryDeviceFilters(a1, a2, a4, (__int64)v6, a6);
    }
  }
  return (unsigned int)SessionIdToken;
}
