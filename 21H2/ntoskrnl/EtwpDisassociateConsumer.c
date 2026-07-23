/*
 * XREFs of EtwpDisassociateConsumer @ 0x1406213C0
 * Callers:
 *     EtwpRealtimeDeliverBuffer @ 0x14063AAF8 (EtwpRealtimeDeliverBuffer.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

void __fastcall EtwpDisassociateConsumer(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 **v4; // rax
  struct _KEVENT *v5; // rcx

  v3 = *a2;
  if ( *(__int64 **)(v3 + 8) != a2 || (v4 = (__int64 **)a2[1], *v4 != a2) )
    __fastfail(3u);
  *v4 = (__int64 *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  --*(_DWORD *)(a1 + 360);
  v5 = (struct _KEVENT *)a2[6];
  *((_BYTE *)a2 + 90) |= 4u;
  KeSetEvent(v5, 0, 0);
  HalPutDmaAdapter((PADAPTER_OBJECT)a2);
}
