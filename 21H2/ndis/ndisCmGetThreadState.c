/*
 * XREFs of ndisCmGetThreadState @ 0x1C0035F5C
 * Callers:
 *     ndisCmSetThreadState @ 0x1C0009150 (ndisCmSetThreadState.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C0035EE4 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ndisIfCreateCompartment @ 0x1C00B2688 (ndisIfCreateCompartment.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0013DA0 (NdisGetSessionCompartmentId.c)
 */

_DWORD *__fastcall ndisCmGetThreadState(PETHREAD Thread, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // rax
  __int64 v7; // rcx
  PACCESS_TOKEN v8; // rax
  void *v9; // rsi
  unsigned int CurrentProcessSessionId; // eax
  NTSTATUS v11; // ebx
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-20h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+68h] [rbp+20h] BYREF

  result = PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  if ( result )
  {
    *a2 = *result;
    *a3 = result[1];
    result = (_DWORD *)ObfDereferenceObject(result);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  if ( !*a2 )
  {
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    }
    else
    {
      v8 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v9 = v8;
      if ( v8
        && (v11 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation),
            PsDereferenceImpersonationToken(v9),
            v11 >= 0) )
      {
        CurrentProcessSessionId = (unsigned int)TokenInformation;
      }
      else
      {
        CurrentProcessSessionId = PsGetThreadSessionId(Thread);
      }
    }
    result = (_DWORD *)NdisGetSessionCompartmentId(CurrentProcessSessionId);
    *a2 = (_DWORD)result;
  }
  return result;
}
