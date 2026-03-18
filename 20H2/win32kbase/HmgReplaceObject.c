/*
 * XREFs of HmgReplaceObject @ 0x1C0037A90
 * Callers:
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0037A40 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgReplaceObject(unsigned int *a1, __int128 *a2)
{
  unsigned int v2; // eax
  unsigned int v5; // esi
  __int128 v6; // xmm0
  __int16 v7; // ax
  __int16 v8; // r8
  __int16 v9; // dx
  __int64 v10; // rax
  GdiHandleManager *v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+38h] [rbp-28h]
  __int128 v24; // [rsp+48h] [rbp-18h]
  __int64 v25; // [rsp+58h] [rbp-8h]

  v2 = *a1;
  v22 = 0LL;
  v23 = 0;
  v5 = 1;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v22, (unsigned __int16)v2 | (v2 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v23 )
  {
    v6 = *a2;
    v7 = *((_WORD *)a1 + 7);
    v8 = *((_WORD *)a2 + 7);
    v25 = *((_QWORD *)a2 + 2);
    v9 = v8 & 0x4000 | v7 & 0x8000;
    *((_WORD *)a2 + 7) = v7 & 0x4000 | v8 & 0x8000;
    v10 = *(_QWORD *)a1;
    *((_WORD *)a1 + 7) = v9;
    *(_QWORD *)a2 = v10;
    *((_WORD *)a2 + 6) = *((_WORD *)a1 + 6);
    *((_DWORD *)a2 + 2) = a1[2];
    *((_QWORD *)a2 + 2) = *((_QWORD *)a1 + 2);
    v11 = gpHandleManager;
    v12 = (unsigned __int16)*a1 | (*a1 >> 8) & 0xFF0000;
    v24 = v6;
    v13 = GdiHandleManager::DecodeIndex(gpHandleManager, v12);
    v14 = *((_QWORD *)v11 + 2);
    v15 = v13;
    v16 = *(_DWORD *)(v14 + 2056);
    if ( v13 < v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    {
      if ( v13 >= v16 )
        v17 = ((v13 - v16) >> 16) + 1;
      else
        v17 = 0LL;
      v18 = *(_QWORD *)(v14 + 8 * v17 + 8);
      if ( (_DWORD)v17 )
        v15 = ((1 - (_DWORD)v17) << 16) - v16 + v13;
      if ( (unsigned int)v15 < *(_DWORD *)(v18 + 20) )
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8) = a2;
    }
    v19 = v24;
    a1[2] = DWORD2(v24);
    v20 = v25;
    *(_QWORD *)a1 = v19;
    LOWORD(v19) = WORD6(v24);
    *((_QWORD *)a1 + 2) = v20;
    *((_WORD *)a1 + 6) = v19;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v22);
    if ( v23 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v22);
  }
  else
  {
    return 0;
  }
  return v5;
}
