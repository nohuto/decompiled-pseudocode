/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x14065AA10
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1406E2750 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1407127C0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5)
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
    CmpAttachToRegistryProcess(v14);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb(&v12, v6);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(&v12);
      if ( *(_QWORD *)(v6 + 80) && (int)CmpConstructNameWithStatus(v6, &v11) >= 0 )
      {
        started = 0;
        *a4 = v11;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack(&v12);
    }
    CmpUnlockRegistry(v8, v7);
    KiUnstackDetachProcess((__int64)v14, 0LL);
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
