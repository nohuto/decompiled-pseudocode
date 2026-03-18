/*
 * XREFs of HmgLockIgnoreOwner @ 0x1C0017C00
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgLockIgnoreOwner(unsigned int a1, char a2)
{
  __int16 v3; // edi^2
  __int64 v4; // rbx
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int16 v13; // cx
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  v14 = 0LL;
  v3 = HIWORD(a1);
  v15 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v14, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v15 )
  {
    if ( *(_BYTE *)(v14 + 14) == a2 && *(_WORD *)(v14 + 12) == v3 )
    {
      v6 = gpHandleManager;
      v7 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v14 & 0xFFFFFF);
      v8 = *((_QWORD *)v6 + 2);
      v9 = v7;
      v10 = *(_DWORD *)(v8 + 2056);
      if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
        goto LABEL_15;
      if ( v7 >= v10 )
        v11 = ((v7 - v10) >> 16) + 1;
      else
        v11 = 0;
      v12 = *(_QWORD *)(v8 + 8LL * v11 + 8);
      if ( v11 )
        v9 = ((1 - v11) << 16) - v10 + v7;
      if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_15:
        v4 = 0LL;
      else
        v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
      v13 = *(_WORD *)(v4 + 12);
      if ( !v13 || *(struct _KTHREAD **)(v4 + 16) == KeGetCurrentThread() )
      {
        *(_WORD *)(v4 + 12) = v13 + 1;
        *(_QWORD *)(v4 + 16) = KeGetCurrentThread();
      }
      else
      {
        v4 = 0LL;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v14);
    if ( v15 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v14);
  }
  return v4;
}
