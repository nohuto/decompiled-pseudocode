/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x14066FA70
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x14061B4F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x140675D10 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  __int64 v6; // rdi
  int started; // ebx
  __int64 v9; // [rsp+20h] [rbp-60h] BYREF
  __int128 v10; // [rsp+28h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-48h]
  _OWORD v12[3]; // [rsp+48h] [rbp-38h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  WORD1(v10) = -1;
  memset(v12, 0, sizeof(v12));
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
    CmpAttachToRegistryProcess(v12);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb(&v10, v6);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)&v10);
      if ( *(_QWORD *)(v6 + 80) && (int)CmpConstructNameWithStatus(v6, &v9) >= 0 )
      {
        started = 0;
        *a4 = v9;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)&v10);
    }
    CmpUnlockRegistry();
    KiUnstackDetachProcess((__int64)v12, 0);
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
