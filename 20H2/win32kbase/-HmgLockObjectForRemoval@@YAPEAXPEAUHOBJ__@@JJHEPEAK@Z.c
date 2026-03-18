/*
 * XREFs of ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0090878
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003A250 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgLockObjectForRemoval(struct HOBJ__ *a1, int a2, int a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rbx
  char v9; // al
  _DWORD *v10; // rdi
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r9
  _DWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]

  v3 = (unsigned int)a1;
  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  v18 = 0LL;
  v19 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v18, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !v19 )
  {
LABEL_2:
    v7 = 0LL;
    goto LABEL_3;
  }
  v10 = v18;
  v11 = gpHandleManager;
  v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v18 & 0xFFFFFF);
  v13 = *((_QWORD *)v11 + 2);
  v14 = v12;
  v15 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    goto LABEL_20;
  if ( v12 >= v15 )
    v16 = ((v12 - v15) >> 16) + 1;
  else
    v16 = 0LL;
  v17 = *(_QWORD *)(v13 + 8 * v16 + 8);
  if ( (_DWORD)v16 )
    v14 = ((1 - (_DWORD)v16) << 16) - v15 + v12;
  if ( (unsigned int)v14 >= *(_DWORD *)(v17 + 20) )
LABEL_20:
    v7 = 0LL;
  else
    v7 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
  if ( *((_BYTE *)v10 + 14) != 1 || *((_WORD *)v10 + 6) != HIWORD(v3) )
  {
LABEL_21:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
    if ( v19 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
    goto LABEL_2;
  }
  if ( *(_WORD *)(v7 + 12) != 1 || *(_DWORD *)(v7 + 8) )
  {
    *((_BYTE *)v10 + 15) |= 8u;
    goto LABEL_21;
  }
  v9 = *((_BYTE *)v10 + 15);
  if ( (v9 & 1) != 0 )
    goto LABEL_21;
  *((_BYTE *)v10 + 15) = v9 | 0x40;
  HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
  if ( v19 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
LABEL_3:
  GreReleaseHmgrSemaphore(v5, v4, v6);
  return v7;
}
