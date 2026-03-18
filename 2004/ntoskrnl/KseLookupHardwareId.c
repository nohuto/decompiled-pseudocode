/*
 * XREFs of KseLookupHardwareId @ 0x1408BD5E4
 * Callers:
 *     AhcCacheQueryHwId @ 0x14097CBDC (AhcCacheQueryHwId.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     AslStringPatternMatchW @ 0x140740240 (AslStringPatternMatchW.c)
 *     KsepCacheLookup @ 0x140749D10 (KsepCacheLookup.c)
 */

__int64 __fastcall KseLookupHardwareId(WCHAR *SourceString)
{
  WCHAR v1; // r12
  WCHAR *v2; // r14
  ULONG_PTR v3; // rdi
  unsigned int v5; // ebp
  unsigned __int16 v6; // ax
  WCHAR *v7; // rcx
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rsi
  unsigned __int16 *v12; // rdx
  _OWORD v13[2]; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h]

  v1 = *SourceString;
  v2 = SourceString + 1;
  v3 = qword_140C50430;
  v13[0] = 0LL;
  if ( v1 != 42 )
    v2 = SourceString;
  v13[1] = 0LL;
  v5 = -1073741275;
  DestinationString = 0LL;
  v15 = 0LL;
  v6 = *v2;
  if ( *v2 )
  {
    v7 = v2;
    while ( v6 != 42 && v6 != 63 )
    {
      v6 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    for ( i = *(_QWORD **)(v3 + 32); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v3 + 32) )
        goto LABEL_10;
      v12 = (unsigned __int16 *)i[3];
      if ( v1 == 42 )
      {
        if ( *v12 != 42 )
          continue;
        ++v12;
      }
      if ( (unsigned int)AslStringPatternMatchW(v2, v12) )
      {
        v5 = 0;
        goto LABEL_10;
      }
    }
  }
LABEL_8:
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.Buffer, SourceString);
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  if ( KsepCacheLookup(v3, (__int64)v13) )
    v5 = 0;
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease(v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
