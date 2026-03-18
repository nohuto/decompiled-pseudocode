/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x140866420
 * Callers:
 *     EtwpRegTraceCallback @ 0x140937D20 (EtwpRegTraceCallback.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbStackShared @ 0x1405F0AD0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpConstructAndCacheName @ 0x140708F74 (CmpConstructAndCacheName.c)
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
  const UNICODE_STRING *v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+28h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-48h]
  _OWORD v13[3]; // [rsp+48h] [rbp-38h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  WORD1(v11) = -1;
  memset(v13, 0, sizeof(v13));
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
    CmpAttachToRegistryProcess((__int64)v13);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v11, v5, v7, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)&v11);
      if ( *(_QWORD *)(v5 + 80) && (int)CmpConstructAndCacheName(v5, &v10) >= 0 )
      {
        started = 0;
        *ObjectName = v10;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)&v11);
    }
    CmpUnlockRegistry();
    KiUnstackDetachProcess((__int64)v13, 0LL);
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
