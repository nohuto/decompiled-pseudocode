/*
 * XREFs of CmFcpChangeSubscriptionWrapper @ 0x1409234E0
 * Callers:
 *     <none>
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

ULONG_PTR __fastcall CmFcpChangeSubscriptionWrapper(__int64 a1, __int64 a2)
{
  int v2; // eax
  void *v3; // rbx
  ULONG_PTR result; // rax
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( (v2 & 1) == 0 )
    goto LABEL_4;
  result = MmGetSessionById(*(_DWORD *)(a1 + 76));
  v3 = (void *)result;
  if ( !result )
    return result;
  if ( (int)MmAttachSession(result) >= 0 )
  {
LABEL_4:
    result = (*(__int64 (__fastcall **)(__int64))(a1 + 64))(a2);
    if ( !v3 )
      return result;
    MmDetachSession((__int64)v3, (__int64)v7);
  }
  return ObfDereferenceObject(v3);
}
