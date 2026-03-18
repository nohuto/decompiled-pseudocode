/*
 * XREFs of ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0086C70
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0089A90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C009262C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall DC::vReleaseRao(DC *this)
{
  unsigned int v1; // eax
  GdiHandleManager *v3; // r13
  unsigned int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // r12d
  unsigned int v8; // esi
  unsigned int v9; // ecx
  __int64 v10; // r10
  unsigned int v11; // r8d
  __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rax
  DC *v18; // rdx

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000);
  v5 = *((_QWORD *)v3 + 2);
  v6 = 0LL;
  v7 = *(unsigned __int16 *)(v5 + 2);
  v8 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v8 + ((v7 + 0xFFFF) << 16) )
  {
    v12 = 0LL;
  }
  else
  {
    if ( v4 >= v8 )
      v9 = ((v4 - v8) >> 16) + 1;
    else
      v9 = 0;
    v10 = *(_QWORD *)(v5 + 8LL * v9 + 8);
    if ( v9 )
      v11 = v4 + ((1 - v9) << 16) - v8;
    else
      v11 = v4;
    v12 = 0LL;
    if ( v11 >= *(_DWORD *)(v10 + 20) )
      v13 = 0LL;
    else
      v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                      + 16LL * (unsigned __int8)v11
                      + 8);
    if ( v13 )
      v12 = *(_QWORD *)v10 + 24LL * v11;
  }
  v14 = GdiHandleManager::DecodeIndex(v3, v4);
  v15 = v14;
  if ( v14 >= v8 + ((v7 + 0xFFFF) << 16) )
    goto LABEL_20;
  if ( v14 >= v8 )
    v16 = ((v14 - v8) >> 16) + 1;
  else
    v16 = 0;
  v17 = *(_QWORD *)(v5 + 8LL * v16 + 8);
  if ( v16 )
    v15 = ((1 - v16) << 16) - v8 + (unsigned int)v15;
  if ( (unsigned int)v15 >= *(_DWORD *)(v17 + 20) )
LABEL_20:
    v18 = 0LL;
  else
    v18 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
  if ( v18 == this )
    v6 = v12;
  *(_BYTE *)(v6 + 15) |= 4u;
}
