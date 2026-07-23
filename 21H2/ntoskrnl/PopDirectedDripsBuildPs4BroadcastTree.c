/*
 * XREFs of PopDirectedDripsBuildPs4BroadcastTree @ 0x1408F8F50
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408F8C20 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x1408F84EC (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x1408F90E0 (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x1408F9118 (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsVisitDevice @ 0x1408F92D0 (PopDirectedDripsVisitDevice.c)
 *     PopDirectedDripsVisitPs4Device @ 0x1408F9324 (PopDirectedDripsVisitPs4Device.c)
 */

__int64 __fastcall PopDirectedDripsBuildPs4BroadcastTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  int v13; // eax
  _QWORD *v14; // rax
  unsigned int v15; // r8d
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF

  v17[1] = v17;
  v17[0] = v17;
  PopDirectedDripsInsertQueueDevice(v17);
  while ( 1 )
  {
    v5 = v17[0];
    if ( (_QWORD *)v17[0] == v17 )
      return 0;
    if ( *(_QWORD **)(v17[0] + 8LL) != v17 || (v6 = *(_QWORD *)v17[0], *(_QWORD *)(*(_QWORD *)v17[0] + 8LL) != v17[0]) )
      __fastfail(3u);
    v17[0] = *(_QWORD *)v17[0];
    *(_QWORD *)(v6 + 8) = v17;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    if ( (*(_DWORD *)(v5 + 32) & 0x20000) == 0 )
    {
      PopDirectedDripsVisitDevice(a2, v5, a3, 4LL);
      v7 = v5 - 728;
      if ( v5 == 728 )
        goto LABEL_22;
      do
      {
        if ( (*(_DWORD *)(v7 + 760) & 1) != 0 )
          break;
        v7 = *(_QWORD *)(v7 + 16);
      }
      while ( v7 );
      if ( !v7 )
      {
LABEL_22:
        *(_DWORD *)(v5 + 32) |= 0x40000u;
        PopDirectedDripsDiagTraceProblemDevice(v5 - 728, a3, 3);
        v10 = 3221225659LL;
LABEL_23:
        PopDirectedDripsFlushDeviceQueue(v17, v9, v10);
        return v15;
      }
      v8 = PopDirectedDripsVisitPs4Device(v7, v17, a2, a3);
      v10 = (unsigned int)v8;
      if ( v8 < 0 )
        goto LABEL_23;
      v11 = *(_QWORD **)(v7 + 8);
      v12 = (_QWORD *)v7;
      while ( v11 )
      {
        v12 = v11;
        v11 = (_QWORD *)v11[1];
      }
      while ( v12 != (_QWORD *)v7 )
      {
        v13 = PopDirectedDripsVisitPs4Device(v12, v17, a2, a3);
        v10 = (unsigned int)v13;
        if ( v13 < 0 )
          goto LABEL_23;
        v14 = (_QWORD *)*v12;
        if ( *v12 )
        {
          do
          {
            v12 = v14;
            v14 = (_QWORD *)v14[1];
          }
          while ( v14 );
        }
        else
        {
          v12 = (_QWORD *)v12[2];
        }
      }
    }
  }
}
