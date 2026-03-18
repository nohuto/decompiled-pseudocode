/*
 * XREFs of CmFcpChangeSubscriptionWrapper @ 0x140879BC0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MmQuitNextSession @ 0x140656300 (MmQuitNextSession.c)
 */

_KPROCESS *__fastcall CmFcpChangeSubscriptionWrapper(__int64 a1, __int64 a2)
{
  int v2; // eax
  struct _DMA_ADAPTER *v3; // rbx
  _KPROCESS *result; // rax
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( (v2 & 1) == 0 )
    goto LABEL_4;
  result = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(a1 + 76));
  v3 = (struct _DMA_ADAPTER *)result;
  if ( !result )
    return result;
  if ( (int)MmAttachSession(result, (__int64)v7) >= 0 )
  {
LABEL_4:
    result = (_KPROCESS *)(*(__int64 (__fastcall **)(__int64))(a1 + 64))(a2);
    if ( !v3 )
      return result;
    MmDetachSession((__int64)v3, (__int64)v7);
  }
  return (_KPROCESS *)MmQuitNextSession(v3);
}
