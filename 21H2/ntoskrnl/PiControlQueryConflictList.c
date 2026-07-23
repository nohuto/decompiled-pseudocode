/*
 * XREFs of PiControlQueryConflictList @ 0x1408B39B0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x140240C80 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     IopQueryConflictList @ 0x1408B99B4 (IopQueryConflictList.c)
 */

__int64 __fastcall PiControlQueryConflictList(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  __int64 *v4; // r12
  bool v5; // zf
  _DWORD *v8; // rdx
  unsigned int v9; // r8d
  void *v10; // r15
  void *v11; // r14
  int UserModeCallersCopy; // edi
  _QWORD *v13; // rax
  int v14; // r8d
  _DWORD *v15; // rax
  int v16; // eax
  void *v18; // [rsp+30h] [rbp-20h] BYREF
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  void *v20; // [rsp+88h] [rbp+38h] BYREF

  v4 = (__int64 *)(a2 + 16);
  v5 = *((_QWORD *)a2 + 4) == 0LL;
  v19 = 0LL;
  if ( v5 || *((_DWORD *)a2 + 10) < 0x20u )
    return 3221225507LL;
  v8 = (_DWORD *)*((_QWORD *)a2 + 2);
  if ( !v8 )
    return 3221225485LL;
  v9 = *((_DWORD *)a2 + 6);
  if ( v9 < 0x28 )
    return 3221225485LL;
  if ( *v8 != 1 )
    return 3221225485LL;
  if ( v8[4] != 1 )
    return 3221225485LL;
  WORD1(v19) = *a2;
  LOWORD(v19) = WORD1(v19);
  if ( (unsigned __int16)(WORD1(v19) - 1) > 0x18Fu || (BYTE2(v19) & 1) != 0 )
    return 3221225485LL;
  v18 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v20 = 0LL;
  *((_QWORD *)&v19 + 1) = 0LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v18, v8, v9, 1u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiControlAllocateBufferForUserModeCaller(&v20, *((_DWORD *)a2 + 10), a4, *v4);
    if ( UserModeCallersCopy < 0
      || (UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)&v19 + 1, *((void **)a2 + 1), *a2, 2u, a4, 1),
          UserModeCallersCopy < 0) )
    {
      v10 = v20;
    }
    else
    {
      UserModeCallersCopy = -1073741810;
      PpDevNodeLockTree(1);
      v13 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&v19, 0x43706E50u);
      v10 = v20;
      v11 = v13;
      if ( v13 )
      {
        v15 = *(_DWORD **)(v13[39] + 40LL);
        if ( v15 )
        {
          if ( v15 != IopRootDeviceNode && (unsigned int)(v15[75] - 787) > 1 )
          {
            UserModeCallersCopy = IopQueryConflictList((_DWORD)v11, (_DWORD)v18, v14, (_DWORD)v20, *((_DWORD *)a2 + 10));
            v16 = PiControlMakeUserModeCallersCopy((void **)v4, v10, *((_DWORD *)a2 + 10), 1u, a4, 0);
            if ( v16 < 0 )
              UserModeCallersCopy = v16;
          }
        }
      }
      PpDevNodeUnlockTree(1);
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, v18);
  PiControlFreeUserModeCallersBuffer(a4, v10);
  PiControlFreeUserModeCallersBuffer(a4, *((void **)&v19 + 1));
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x43706E50u);
  *((_DWORD *)a2 + 12) = UserModeCallersCopy;
  return (unsigned int)UserModeCallersCopy;
}
