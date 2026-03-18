/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x1405E5670
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1405E8840 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbStackShared @ 0x1405F0AD0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, int a5)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  struct _LOOKASIDE_LIST_EX *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  int started; // ebx
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+28h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-48h]
  _OWORD v16[3]; // [rsp+48h] [rbp-38h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  WORD1(v14) = -1;
  memset(v16, 0, sizeof(v16));
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
    CmpAttachToRegistryProcess(v16);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v14, v6, v7, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(&v14);
      if ( *(_QWORD *)(v6 + 80) && (int)CmpConstructNameWithStatus(v6, &v13) >= 0 )
      {
        started = 0;
        *a4 = v13;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack(&v14);
    }
    CmpUnlockRegistry(v10, v9);
    KiUnstackDetachProcess((__int64)v16, 0LL);
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
