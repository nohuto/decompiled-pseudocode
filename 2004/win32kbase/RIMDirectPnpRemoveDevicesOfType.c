/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x1C0015D10
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C0015CE0 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C00166B0 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00AABB0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(__int64 a1, int a2)
{
  int v2; // r14d
  int v4; // edx
  int v5; // esi
  _QWORD *v6; // rdi
  int v7; // edx
  __int64 i; // rbx
  int v10; // ecx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 91, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((char *)Object + 104);
    if ( *((_BYTE *)v6 + 81) )
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 92, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      for ( i = v6[53]; i; i = *(_QWORD *)(i + 40) )
      {
        v10 = *(_DWORD *)(i + 184);
        if ( (v10 & 0x2000) == 0 && (v10 & 0x400) == 0 && *(unsigned __int8 *)(i + 48) == v2 )
        {
          *(_DWORD *)(i + 184) = v10 | 8;
          rimOnPnpRemoveComplete(v6, i);
        }
      }
    }
    v6[14] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v4, 1, 93, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v5);
  }
  return (unsigned int)v5;
}
