/*
 * XREFs of CmFcpManagerDrainUsageNotifications @ 0x140832E84
 * Callers:
 *     CmFcpManagerSoftwareHiveReady @ 0x140832DF0 (CmFcpManagerSoftwareHiveReady.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140922C5C (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerDrainUsageNotificationsWorker @ 0x140923590 (CmFcpManagerDrainUsageNotificationsWorker.c)
 *     CmFcpManagerRetryUsageNotificationsWorker @ 0x140923720 (CmFcpManagerRetryUsageNotificationsWorker.c)
 * Callees:
 *     RtlFindNextForwardRunSet @ 0x140247B20 (RtlFindNextForwardRunSet.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403C78DC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403C7984 (RtlpFcBufferManagerReferenceBuffers.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x14053FF38 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     RtlUpdateSwapReference @ 0x1408331DC (RtlUpdateSwapReference.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x1409BF008 (RtlpFcSendFeatureUsageNotifications.c)
 */

__int64 __fastcall CmFcpManagerDrainUsageNotifications(__int64 a1, char a2)
{
  __int64 v2; // r13
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r12
  _DWORD *v6; // rsi
  int v7; // r15d
  __int64 v8; // rax
  int NextForwardRunSet; // eax
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // r14d
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+60h] BYREF

  v22 = 0LL;
  v2 = a1;
  v3 = (_QWORD *)(a1 + 304);
  v4 = *v3 & 1LL;
  RtlUpdateSwapReference(v3, ((_BYTE)v4 - 1) & 1);
  RtlpFcBufferManagerReferenceBuffers(v2 + 112, (__int64)&v21, &v22);
  v5 = v22;
  v6 = *(_DWORD **)(v2 + 8 * v4 + 344);
  v21 = 0;
  *(_QWORD *)&v18 = 64LL;
  v7 = 0;
  v8 = *(_QWORD *)(v22 + 64);
  *(_QWORD *)((char *)&v18 + 4) = 0LL;
  v16 = v8;
  v17 = *(_QWORD *)(v22 + 56);
  *((_QWORD *)&v18 + 1) = v6 + 2;
  NextForwardRunSet = RtlFindNextForwardRunSet((__int64)&v18, 0, &v21);
  if ( NextForwardRunSet )
  {
    do
    {
      v11 = v21;
      v12 = v21 + NextForwardRunSet;
      if ( v21 < v21 + NextForwardRunSet )
      {
        v13 = 3LL * v21;
        do
        {
          if ( !v6[v13 + 4] || a2 )
          {
            v14 = RtlpFcSendFeatureUsageNotifications(&v6[v13 + 5], v17, v16);
            v15 = v6[v13 + 4] + 1;
            v6[v13 + 4] = v15;
            if ( v14 >= 0 || v14 == -1073741275 || v15 < 5 )
            {
              *(_QWORD *)&v6[v13 + 4] = 0LL;
              v6[v13 + 6] = 0;
              _bittestandreset(v6 + 2, v11);
              --*v6;
            }
            else
            {
              ++v7;
            }
          }
          ++v11;
          v13 += 3LL;
        }
        while ( v11 < v12 );
      }
      NextForwardRunSet = RtlFindNextForwardRunSet((__int64)&v18, v12, &v21);
    }
    while ( NextForwardRunSet );
    v2 = a1;
    v5 = v22;
  }
  result = RtlpFcBufferManagerDereferenceBuffers(v2 + 112, v5);
  if ( v7 )
    return CmFcpManagerArmFeatureUsageRetryTimer(v2);
  return result;
}
