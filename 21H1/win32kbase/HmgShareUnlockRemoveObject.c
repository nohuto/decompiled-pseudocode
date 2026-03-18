/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x1C001D770
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C007F600 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0080048 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgShareUnlockRemoveObject(unsigned int a1, __int16 a2, int a3, int a4, char a5)
{
  __int64 v9; // rdi
  unsigned __int8 v10; // si
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rbx
  int v19; // eax
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+38h] [rbp-30h]

  GreAcquireHmgrSemaphore();
  v21 = 0LL;
  v22 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v21, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v22 )
  {
    v9 = v21;
    v10 = *(_BYTE *)(v21 + 14);
    if ( v10 == a5 && *(_WORD *)(v21 + 12) == HIWORD(a1) )
    {
      v11 = gpHandleManager;
      v12 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v21 & 0xFFFFFF);
      v13 = *((_QWORD *)v11 + 2);
      v14 = v12;
      v15 = *(_DWORD *)(v13 + 2056);
      if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
        goto LABEL_22;
      if ( v12 >= v15 )
        v16 = ((v12 - v15) >> 16) + 1;
      else
        v16 = 0LL;
      v17 = *(_QWORD *)(v13 + 8 * v16 + 8);
      if ( (_DWORD)v16 )
        v14 = ((1 - (_DWORD)v16) << 16) - v15 + v12;
      if ( (unsigned int)v14 >= *(_DWORD *)(v17 + 20) )
LABEL_22:
        v18 = 0LL;
      else
        v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
      TrackHmgrReferenceDecrement(v10, (struct OBJECT *)v18);
      v19 = *(_DWORD *)(v18 + 8) - 1;
      *(_DWORD *)(v18 + 8) = v19;
      if ( v19 == a3 && *(_WORD *)(v18 + 12) == a2 && (a4 || (*(_BYTE *)(v9 + 15) & 1) == 0) )
      {
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v21);
        goto LABEL_16;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
  }
  v18 = 0LL;
LABEL_16:
  if ( v22 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
  GreReleaseHmgrSemaphore();
  return v18;
}
