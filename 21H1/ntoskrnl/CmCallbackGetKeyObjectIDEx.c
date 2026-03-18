/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x14061AC90
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbStackShared @ 0x1406260F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, int a5)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  struct _LOOKASIDE_LIST_EX *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  int started; // ebx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+28h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-48h]
  _OWORD v18[3]; // [rsp+48h] [rbp-38h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  WORD1(v16) = -1;
  memset(v18, 0, sizeof(v18));
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
    CmpAttachToRegistryProcess(v18);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v16, v6, v7, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(&v16);
      if ( *(_QWORD *)(v6 + 80) && (int)CmpConstructNameWithStatus(v6, &v15) >= 0 )
      {
        started = 0;
        *a4 = v15;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack(&v16);
    }
    CmpUnlockRegistry(v10, v9);
    KiUnstackDetachProcess((__int64)v18, 0LL, v12, v13);
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
