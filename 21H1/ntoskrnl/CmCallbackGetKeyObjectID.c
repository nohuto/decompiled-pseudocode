/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x140865100
 * Callers:
 *     EtwpRegTraceCallback @ 0x140936A80 (EtwpRegTraceCallback.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbStackShared @ 0x1406260F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpConstructAndCacheName @ 0x1406E5394 (CmpConstructAndCacheName.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  unsigned __int64 v5; // rdi
  NTSTATUS started; // ebx
  __int64 v7; // r8
  struct _LOOKASIDE_LIST_EX *v8; // r9
  __int64 v9; // r8
  _DWORD *v10; // r9
  const UNICODE_STRING *v12; // [rsp+20h] [rbp-60h] BYREF
  __int128 v13; // [rsp+28h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-48h]
  _OWORD v15[3]; // [rsp+48h] [rbp-38h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  WORD1(v13) = -1;
  memset(v15, 0, sizeof(v15));
  *(_OWORD *)Privileges = 0LL;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !Cookie )
    goto LABEL_16;
  v5 = *((_QWORD *)Object + 1);
  if ( ObjectID )
    *ObjectID = v5;
  if ( !ObjectName )
  {
    started = 0;
    goto LABEL_17;
  }
  if ( (v5 & 1) == 0 )
  {
    CmpAttachToRegistryProcess((__int64)v15, (__int64)Object, (__int64)ObjectID, ObjectName);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v13, v5, v7, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)&v13);
      if ( *(_QWORD *)(v5 + 80) && (int)CmpConstructAndCacheName(v5, &v12) >= 0 )
      {
        started = 0;
        *ObjectName = v12;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)&v13);
    }
    CmpUnlockRegistry();
    KiUnstackDetachProcess((__int64)v15, 0LL, v9, v10);
  }
  else
  {
LABEL_16:
    started = -1073741811;
  }
LABEL_17:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return started;
}
