/*
 * XREFs of RIMFreeInputBuffer @ 0x1C0156890
 * Callers:
 *     NtRIMFreeInputBuffer @ 0x1C01543D0 (NtRIMFreeInputBuffer.c)
 * Callees:
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00274C8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     RIMFreeUserMem @ 0x1C015B300 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(char *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  int v5; // edx
  char v6; // si
  struct RawInputManagerObject *v7; // rdi
  int v8; // edx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 83, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  result = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal(v7) )
    {
      RIMLockExclusive((__int64)v7 + 568);
      RIMFreeUserMem(v7, v2);
      *((_QWORD *)v7 + 72) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v7 + 568, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v6 = -69;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 84, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    *((_QWORD *)v7 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v7 + 104, 0LL);
    KeLeaveCriticalRegion();
    result = ObfDereferenceObject(v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    return WPP_RECORDER_SF_d((_DWORD)gRimLog, v5, 1, 85, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v6);
  }
  return result;
}
