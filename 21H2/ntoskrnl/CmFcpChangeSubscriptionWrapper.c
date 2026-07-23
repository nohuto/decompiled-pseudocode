/*
 * XREFs of CmFcpChangeSubscriptionWrapper @ 0x14087E520
 * Callers:
 *     <none>
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmQuitNextSession @ 0x140622350 (MmQuitNextSession.c)
 */

ULONG_PTR __fastcall CmFcpChangeSubscriptionWrapper(__int64 a1, __int64 a2)
{
  int v2; // eax
  struct _DMA_ADAPTER *v3; // rbx
  ULONG_PTR result; // rax
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( (v2 & 1) == 0 )
    goto LABEL_4;
  result = MmGetSessionById(*(unsigned int *)(a1 + 76), a2);
  v3 = (struct _DMA_ADAPTER *)result;
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
  return MmQuitNextSession(v3);
}
