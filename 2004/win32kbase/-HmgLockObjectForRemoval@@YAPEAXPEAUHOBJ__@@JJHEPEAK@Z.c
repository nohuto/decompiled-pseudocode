/*
 * XREFs of ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0026DF8
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00939F0 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgLockObjectForRemoval(struct HOBJ__ *a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  char v4; // al
  _DWORD *v5; // rdi
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // r9
  _DWORD *v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]

  v1 = (unsigned int)a1;
  GreAcquireHmgrSemaphore();
  v13 = 0LL;
  v14 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v13, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !v14 )
  {
LABEL_2:
    v2 = 0LL;
    goto LABEL_3;
  }
  v5 = v13;
  v6 = gpHandleManager;
  v7 = GdiHandleManager::DecodeIndex(gpHandleManager, *v13 & 0xFFFFFF);
  v8 = *((_QWORD *)v6 + 2);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 2056);
  if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    goto LABEL_20;
  if ( v7 >= v10 )
    v11 = ((v7 - v10) >> 16) + 1;
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
  if ( (_DWORD)v11 )
    v9 = ((1 - (_DWORD)v11) << 16) - v10 + v7;
  if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_20:
    v2 = 0LL;
  else
    v2 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
  if ( *((_BYTE *)v5 + 14) != 1 || *((_WORD *)v5 + 6) != HIWORD(v1) )
  {
LABEL_21:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
    if ( v14 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
    goto LABEL_2;
  }
  if ( *(_WORD *)(v2 + 12) != 1 || *(_DWORD *)(v2 + 8) )
  {
    *((_BYTE *)v5 + 15) |= 8u;
    goto LABEL_21;
  }
  v4 = *((_BYTE *)v5 + 15);
  if ( (v4 & 1) != 0 )
    goto LABEL_21;
  *((_BYTE *)v5 + 15) = v4 | 0x40;
  HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
  if ( v14 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
LABEL_3:
  GreReleaseHmgrSemaphore();
  return v2;
}
