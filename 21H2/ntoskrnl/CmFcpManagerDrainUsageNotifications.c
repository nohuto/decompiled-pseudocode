/*
 * XREFs of CmFcpManagerDrainUsageNotifications @ 0x1407CAF10
 * Callers:
 *     CmFcpManagerSoftwareHiveReady @ 0x1407CAE80 (CmFcpManagerSoftwareHiveReady.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x14087DC14 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerDrainUsageNotificationsWorker @ 0x14087E8A0 (CmFcpManagerDrainUsageNotificationsWorker.c)
 *     CmFcpManagerRetryUsageNotificationsWorker @ 0x14087EA30 (CmFcpManagerRetryUsageNotificationsWorker.c)
 * Callees:
 *     RtlFindNextForwardRunSet @ 0x1402581FC (RtlFindNextForwardRunSet.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6AB8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6E9C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x1404EDB60 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     RtlUpdateSwapReference @ 0x1407CAFDC (RtlUpdateSwapReference.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x140919C48 (RtlpFcSendFeatureUsageNotifications.c)
 */

__int64 __fastcall CmFcpManagerDrainUsageNotifications(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r12
  _DWORD *v7; // rsi
  int v8; // r15d
  int NextForwardRunSet; // eax
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // r14d
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-10h]
  unsigned int v22; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+60h] BYREF

  v23 = 0LL;
  v3 = a1;
  v4 = (_QWORD *)(a1 + 304);
  v5 = *v4 & 1LL;
  RtlUpdateSwapReference(v4, ((_BYTE)v5 - 1) & 1, a3);
  RtlpFcBufferManagerReferenceBuffers(v3 + 112, (__int64)&v17, &v23);
  v6 = v23;
  v7 = *(_DWORD **)(v3 + 8 * v5 + 344);
  v18[1] = 0;
  v22 = 0;
  v8 = 0;
  v16 = *(_QWORD *)(v23 + 64);
  v17 = *(_QWORD *)(v23 + 56);
  v19 = v7 + 2;
  v18[0] = 64;
  NextForwardRunSet = RtlFindNextForwardRunSet((__int64)v18, 0, &v22);
  if ( NextForwardRunSet )
  {
    do
    {
      v11 = v22;
      v12 = v22 + NextForwardRunSet;
      if ( v22 < v22 + NextForwardRunSet )
      {
        v13 = 3LL * v22;
        do
        {
          if ( !v7[v13 + 4] || a2 )
          {
            v14 = RtlpFcSendFeatureUsageNotifications(&v7[v13 + 5], v17, v16);
            v15 = v7[v13 + 4] + 1;
            v7[v13 + 4] = v15;
            if ( v14 >= 0 || v14 == -1073741275 || v15 < 5 )
            {
              *(_QWORD *)&v7[v13 + 4] = 0LL;
              v7[v13 + 6] = 0;
              _bittestandreset(v7 + 2, v11);
              --*v7;
            }
            else
            {
              ++v8;
            }
          }
          ++v11;
          v13 += 3LL;
        }
        while ( v11 < v12 );
      }
      NextForwardRunSet = RtlFindNextForwardRunSet((__int64)v18, v12, &v22);
    }
    while ( NextForwardRunSet );
    v3 = a1;
    v6 = v23;
  }
  result = RtlpFcBufferManagerDereferenceBuffers(v3 + 112, v6);
  if ( v8 )
    return CmFcpManagerArmFeatureUsageRetryTimer(v3);
  return result;
}
