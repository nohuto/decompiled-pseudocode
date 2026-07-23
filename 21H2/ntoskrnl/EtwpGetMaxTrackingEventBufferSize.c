/*
 * XREFs of EtwpGetMaxTrackingEventBufferSize @ 0x14061B780
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x14061B674 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpSendDbgId @ 0x14093CF20 (EtwpSendDbgId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetMaxTrackingEventBufferSize(__int64 a1)
{
  int v2; // edx
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 *v5; // r8
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx

  v2 = 0;
  v3 = (_QWORD *)(a1 + 112);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( NtBuildLabEx[v8] );
    v2 = (v8 + 24) & 0xFFFFFFF8;
    do
    {
      v9 = *((_DWORD *)v4 + 5);
      v4 = (_QWORD *)*v4;
      v2 += (v9 + 19) & 0xFFFFFFF8;
    }
    while ( v4 != v3 );
  }
  v5 = *(__int64 **)(a1 + 1024);
  while ( v5 != (__int64 *)(a1 + 1024) )
  {
    v10 = *((_DWORD *)v5 + 4) + 16 * *((_DWORD *)v5 + 6) + 27;
    v5 = (__int64 *)*v5;
    v2 += v10 & 0xFFFFFFF8;
  }
  v6 = *(_DWORD *)(a1 + 136);
  if ( v6 )
    v2 += (32 * v6 + 23) & 0xFFFFFFF8;
  result = (unsigned int)(v2 + 72);
  if ( !v2 )
    return 0LL;
  return result;
}
