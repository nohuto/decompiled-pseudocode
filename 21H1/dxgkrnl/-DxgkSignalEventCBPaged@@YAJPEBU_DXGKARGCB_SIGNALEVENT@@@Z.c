/*
 * XREFs of ?DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C0234838
 * Callers:
 *     DxgkSignalEventCB @ 0x1C003FF90 (DxgkSignalEventCB.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkSignalEventCBPaged(const struct _DXGKARGCB_SIGNALEVENT *a1)
{
  __int64 v2; // rbp
  HANDLE hEvent; // rcx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v2 = *((_QWORD *)a1->hDxgkProcess + 4);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 56), &ApcState);
  hEvent = a1->hEvent;
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(hEvent, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v7 = Object;
  v8 = v4;
  if ( v4 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v9 + 24) = a1->hEvent;
    *(_QWORD *)(v9 + 32) = v2;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    KeSetEvent((PRKEVENT)Object, 0, 0);
    ObfDereferenceObject(v7);
  }
  KeUnstackDetachProcess(&ApcState);
  return v8;
}
