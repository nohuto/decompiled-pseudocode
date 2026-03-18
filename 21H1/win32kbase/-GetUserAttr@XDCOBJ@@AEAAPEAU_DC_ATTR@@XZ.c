/*
 * XREFs of ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0083970
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00779B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct _DC_ATTR *__fastcall XDCOBJ::GetUserAttr(XDCOBJ *this)
{
  GdiHandleManager *v1; // rbp
  _DWORD *v2; // r14
  unsigned int v3; // eax
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  unsigned int v6; // r10d
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v1 = gpHandleManager;
  v2 = *(_DWORD **)this;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000);
  v4 = *((_QWORD *)v1 + 2);
  v5 = 0LL;
  v6 = v3;
  v7 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v7 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    v10 = 0LL;
  }
  else
  {
    v8 = ((v3 - v7) >> 16) + 1;
    if ( v3 < v7 )
      v8 = 0LL;
    v9 = *(_QWORD *)(v4 + 8 * v8 + 8);
    if ( (_DWORD)v8 )
      v3 += ((1 - (_DWORD)v8) << 16) - v7;
    v10 = 0LL;
    if ( v3 < *(_DWORD *)(v9 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                   + 16LL * (unsigned __int8)v3
                   + 8) )
    {
      v10 = *(_QWORD *)v9 + 24LL * v3;
    }
  }
  v11 = GdiHandleManager::DecodeIndex(v1, v6);
  v12 = *(_DWORD *)(v4 + 2056);
  v13 = v11;
  if ( v11 < v12 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    v14 = ((v11 - v12) >> 16) + 1;
    if ( v11 < v12 )
      v14 = 0LL;
    v15 = *(_QWORD *)(v4 + 8 * v14 + 8);
    if ( (_DWORD)v14 )
      v13 = ((1 - (_DWORD)v14) << 16) - v12 + (unsigned int)v13;
    if ( (unsigned int)v13 < *(_DWORD *)(v15 + 20) )
      v5 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
  }
  if ( v5 == v2 && v10 )
    return *(struct _DC_ATTR **)(v10 + 16);
  else
    return 0LL;
}
