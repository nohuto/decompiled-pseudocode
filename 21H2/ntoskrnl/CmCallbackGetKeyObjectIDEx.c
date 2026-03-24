/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x140665BF0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x1405F2FF0 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1406FB3E0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int started; // ebx
  __int64 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+28h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-48h]
  _OWORD v14[3]; // [rsp+48h] [rbp-38h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  WORD1(v12) = -1;
  memset(v14, 0, sizeof(v14));
  *(_OWORD *)Privileges = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !a1 || a5 )
    goto LABEL_20;
  v6 = *(_QWORD *)(a2 + 8);
  if ( a3 )
    *a3 = v6;
  if ( !a4 )
  {
    started = 0;
    goto LABEL_15;
  }
  if ( (v6 & 1) == 0 )
  {
    CmpAttachToRegistryProcess((__int64)v14, a2, (__int64)a3, a4);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb(&v12, v6);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(&v12);
      if ( *(_QWORD *)(v6 + 80) && (int)CmpConstructNameWithStatus(v6, &v11) >= 0 )
      {
        started = 0;
        *(_QWORD *)a4 = v11;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack(&v12);
    }
    CmpUnlockRegistry(v8, v7);
    KiUnstackDetachProcess((__int64)v14, 0);
  }
  else
  {
LABEL_20:
    started = -1073741811;
  }
LABEL_15:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
