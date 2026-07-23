/*
 * XREFs of KdPullRemoteFileEx @ 0x1409B7780
 * Callers:
 *     KdPullRemoteFile @ 0x1409B7724 (KdPullRemoteFile.c)
 * Callees:
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     KdpCloseRemoteFile @ 0x1409B7970 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x1409B7BD0 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1409B7DFC (KdpReadRemoteFile.c)
 */

__int64 __fastcall KdPullRemoteFileEx(
        const void **a1,
        __int64 (__fastcall *a2)(__int64, const void **, unsigned __int64),
        __int64 (__fastcall *a3)(__int64, __int64, PVOID, _QWORD),
        void (__fastcall *a4)(__int64, _QWORD),
        __int64 a5)
{
  PVOID PoolWithTag; // r14
  int RemoteFile; // ebx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdi
  int v14; // r9d
  __int64 v15; // r15
  unsigned int v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-38h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KdPitchDebugger )
    return 3221226324LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x6F49644Bu);
  if ( !PoolWithTag )
    return 3221225495LL;
  RemoteFile = KdpCreateRemoteFile(&v17, &v18, a1);
  if ( RemoteFile >= 0
    && (memmove(PoolWithTag, a1[1], *(unsigned __int16 *)a1),
        *((_WORD *)PoolWithTag + ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0,
        v11 = v18,
        DbgPrintEx(
          0,
          0,
          "KdPullRemoteFile(%p): About to overwrite %ls and preallocate to %I64x\n",
          KeGetCurrentThread(),
          (const wchar_t *)PoolWithTag,
          v18),
        RemoteFile = a2(a5, a1, v11),
        RemoteFile >= 0)
    && (v12 = 0LL, v11) )
  {
    v13 = v17;
    do
    {
      v16 = 0;
      v14 = v11;
      if ( v11 > 0x2000 )
        v14 = 0x2000;
      RemoteFile = KdpReadRemoteFile(v13, v12, (_DWORD)PoolWithTag, v14, (__int64)&v16);
      if ( RemoteFile < 0 )
        break;
      v15 = v16;
      if ( !v16 )
        break;
      RemoteFile = a3(a5, v12, PoolWithTag, v16);
      if ( RemoteFile < 0 )
        break;
      v12 += v15;
      v11 -= v15;
    }
    while ( v11 );
  }
  else
  {
    v13 = v17;
  }
  if ( v13 )
    KdpCloseRemoteFile(v13);
  a4(a5, (unsigned int)RemoteFile);
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)RemoteFile;
}
