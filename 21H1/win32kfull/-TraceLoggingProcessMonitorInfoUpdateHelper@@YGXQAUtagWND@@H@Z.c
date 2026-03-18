/*
 * XREFs of ?TraceLoggingProcessMonitorInfoUpdateHelper@@YGXQAUtagWND@@H@Z @ 0x25BC6
 * Callers:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YGXQAUtagWND@@@Z @ 0x190C2 (-TraceLoggingProcessUsageDataAggregationHelper@@YGXQAUtagWND@@@Z.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 */

void __fastcall TraceLoggingProcessMonitorInfoUpdateHelper(int a1, int a2)
{
  _DWORD *v2; // ebx
  struct tagMONITOR *v3; // edx
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // esi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+4h] [ebp-Ch]

  v2 = *(_DWORD **)(*(_DWORD *)(a1 + 8) + 232);
  if ( v2 )
  {
    v3 = _MonitorFromWindowInternal(0, v10, v11);
    v4 = v2 + 138;
    if ( v3 )
    {
      v5 = (_DWORD *)(*((_DWORD *)v3 + 5) + 16);
      *v4 = *v5++;
      v2[139] = *v5++;
      v2[140] = *v5;
      v2[141] = v5[1];
      if ( a2 )
      {
        v6 = v2[142];
        v7 = v2[145] | 1;
        v2[145] = v7;
        if ( v6 != *(unsigned __int16 *)(*((_DWORD *)v3 + 5) + 52) )
        {
          v2[144] = v6;
          v2[145] = v7 | 2;
        }
      }
      else
      {
        v8 = *(unsigned __int16 *)(*((_DWORD *)v3 + 5) + 52);
        if ( v2[132] )
        {
          v9 = v2[142];
          if ( v9 != v8 )
          {
            v2[145] |= 4u;
            v2[144] = v9;
          }
        }
        else
        {
          v2[143] = v8;
        }
      }
      v2[142] = *(unsigned __int16 *)(*((_DWORD *)v3 + 5) + 52);
    }
    else
    {
      v2[142] = 0;
      *v4 = 0;
      v2[139] = 0;
      v2[140] = 0;
      v2[141] = 0;
    }
  }
}
