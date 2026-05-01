/*
 * XREFs of PsmCrmCleanup_0 @ 0x180084550
 * Callers:
 *     PsmCrmCleanup @ 0x180062400 (PsmCrmCleanup.c)
 * Callees:
 *     sub_180036234 @ 0x180036234 (sub_180036234.c)
 *     sub_18008467C @ 0x18008467C (sub_18008467C.c)
 */

ULONG PsmCrmCleanup_0()
{
  _QWORD *v0; // rdx
  __int64 v1; // rbx
  REGHANDLE v2; // rcx
  RPC_BINDING_VECTOR *BindingVector; // [rsp+30h] [rbp+8h] BYREF

  BindingVector = ::BindingVector;
  if ( ::BindingVector )
  {
    RpcEpUnregister(&unk_18008D6B0, ::BindingVector, 0LL);
    RpcBindingVectorFree(&BindingVector);
    RpcServerUnregisterIf(&unk_18008D6B0, 0LL, 0);
  }
  v0 = P;
  if ( P )
  {
    v1 = 0LL;
    if ( dword_1800B3EE0 )
    {
      while ( 1 )
      {
        sub_180036234(&v0[18 * v1], 1);
        v1 = (unsigned int)(v1 + 1);
        if ( (unsigned int)v1 >= dword_1800B3EE0 )
          break;
        v0 = P;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  if ( qword_1800B3EE8 )
  {
    sub_180036234(qword_1800B3EE8, 1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, qword_1800B3EE8);
  }
  sub_18008467C();
  v2 = qword_1800B3270;
  qword_1800B3270 = 0LL;
  dword_1800B3250 = 0;
  return EventUnregister(v2);
}
