/*
 * XREFs of TppWorkUnposted @ 0x180112270
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x18005299C (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     TppETWCallbackDequeue @ 0x18011279C (TppETWCallbackDequeue.c)
 */

__int64 __fastcall TppWorkUnposted(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  unsigned __int32 v5; // eax
  unsigned __int32 v6; // edx
  unsigned __int32 v7; // ecx
  __int64 result; // rax

  v1 = a1;
  v2 = a1 - 200;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478LL;
  if ( *(_BYTE *)v4 )
    TppETWCallbackDequeue(*(_QWORD *)(v2 + 144), v1, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  _m_prefetchw((const void *)(v2 + 232));
  v5 = *(_DWORD *)(v2 + 232);
  while ( 1 )
  {
    v6 = v5 >> 1;
    if ( !(v5 >> 1) )
      break;
    v7 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 232), 0, v5);
    if ( v5 == v7 )
      goto LABEL_11;
  }
  v6 = 0;
LABEL_11:
  if ( v6 )
    TppBarrierAdjust((volatile signed __int64 *)(v2 + 56), -v6, 0LL, v3);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(v2 + 8))(v2);
  return result;
}
