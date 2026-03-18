/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x1408DD2C0
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1406A9AB0 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     PfSnBeginAppLaunch @ 0x1406B7880 (PfSnBeginAppLaunch.c)
 */

__int64 __fastcall PfSnAppLaunchScenarioControl(__int64 a1, KPROCESSOR_MODE a2)
{
  int v2; // esi
  bool v3; // zf
  NTSTATUS v4; // edi
  PVOID v5; // rbx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v2 = 0;
  v3 = *(_DWORD *)a1 == 1;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      v4 = ObReferenceObjectByHandleWithTag(
             *(HANDLE *)(a1 + 8),
             8u,
             (POBJECT_TYPE)PsProcessType,
             a2,
             0x73576650u,
             &Object,
             0LL);
      if ( v4 < 0 )
      {
        v5 = Object;
      }
      else
      {
        v5 = Object;
        if ( KeGetCurrentThread()->ApcState.Process != Object )
        {
          v2 = 1;
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
        }
        PfSnBeginAppLaunch((__int64)v5, 0LL, 9);
        v4 = 0;
        if ( v2 )
          KeUnstackDetachProcess(&ApcState);
      }
      if ( v5 )
        ObfDereferenceObjectWithTag(v5, 0x73576650u);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v4;
}
