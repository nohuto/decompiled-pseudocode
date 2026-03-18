/*
 * XREFs of HmgUnlock @ 0x1C00AD474
 * Callers:
 *     GreUnlockRegion @ 0x1C00D0700 (GreUnlockRegion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgUnlock(unsigned int a1)
{
  __int16 v1; // ebx^2
  unsigned int v2; // edi
  GdiHandleManager *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]

  v1 = HIWORD(a1);
  v12 = 0LL;
  v13 = 0;
  v2 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v12, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v13 )
  {
    if ( *(_BYTE *)(v12 + 14) == 4 && *(_WORD *)(v12 + 12) == v1 )
    {
      v4 = gpHandleManager;
      v5 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v12 & 0xFFFFFF);
      v6 = *((_QWORD *)v4 + 2);
      v7 = v5;
      v8 = *(_DWORD *)(v6 + 2056);
      if ( v5 < v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
      {
        if ( v5 >= v8 )
          v9 = ((v5 - v8) >> 16) + 1;
        else
          v9 = 0;
        v10 = *(_QWORD *)(v6 + 8LL * v9 + 8);
        if ( v9 )
          v7 = ((1 - v9) << 16) - v8 + v5;
        if ( (unsigned int)v7 >= *(_DWORD *)(v10 + 20) )
          v11 = 0LL;
        else
          v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
        if ( v11 && *(_WORD *)(v11 + 12) && *(struct _KTHREAD **)(v11 + 16) == KeGetCurrentThread() )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
          v2 = 1;
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v12);
    if ( v13 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v12);
  }
  return v2;
}
