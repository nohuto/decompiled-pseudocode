/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x140720E20
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1407C0690 (CmpConstructNameWithStatus.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int started; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-31h] BYREF
  __int128 v17; // [rsp+28h] [rbp-29h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-19h]
  __int128 v19; // [rsp+48h] [rbp-9h] BYREF
  _OWORD v20[3]; // [rsp+58h] [rbp+7h] BYREF

  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  CmpInitializeThreadInfo((__int64)&v19);
  v16 = 0LL;
  v17 = 0LL;
  WORD1(v17) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !v8 || a5 )
    goto LABEL_20;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v7 )
    *v7 = v9;
  if ( !a4 )
  {
    started = 0;
    goto LABEL_15;
  }
  if ( (v9 & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v20);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb(&v17, v9);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(&v17);
      if ( *(_QWORD *)(v9 + 80) && (int)CmpConstructNameWithStatus(v9, &v16) >= 0 )
      {
        started = 0;
        *a4 = v16;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack(&v17);
    }
    CmpUnlockRegistry(v11, v10, v13, v14);
    CmpDetachFromRegistryProcess(v20);
  }
  else
  {
LABEL_20:
    started = -1073741811;
  }
LABEL_15:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmCleanupThreadInfo((__int64 *)&v19);
  return (unsigned int)started;
}
