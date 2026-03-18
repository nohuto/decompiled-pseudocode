/*
 * XREFs of KseLookupHardwareId @ 0x1408BC2C4
 * Callers:
 *     AhcCacheQueryHwId @ 0x14097B83C (AhcCacheQueryHwId.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     AslStringPatternMatchW @ 0x14073E6C0 (AslStringPatternMatchW.c)
 *     KsepCacheLookup @ 0x140748190 (KsepCacheLookup.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rsi
  unsigned __int16 *v15; // rdx
  _OWORD v16[2]; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]

  v1 = *SourceString;
  v2 = SourceString + 1;
  v3 = qword_140C50560;
  v16[0] = 0LL;
  if ( v1 != 42 )
    v2 = SourceString;
  v16[1] = 0LL;
  v5 = -1073741275;
  DestinationString = 0LL;
  v18 = 0LL;
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
      v15 = (unsigned __int16 *)i[3];
      if ( v1 == 42 )
      {
        if ( *v15 != 42 )
          continue;
        ++v15;
      }
      if ( (unsigned int)AslStringPatternMatchW(v2, v15) )
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
  if ( KsepCacheLookup(v3, (__int64)v16) )
    v5 = 0;
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease(v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return v5;
}
