/*
 * XREFs of HmgPentryFromPobj @ 0x1C0082780
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreSelectBrushInternal @ 0x1C00CE700 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C00CE780 (GreSelectPenInternal.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgPentryFromPobj(_DWORD *a1)
{
  GdiHandleManager *v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rdx

  v2 = gpHandleManager;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)*a1 | (*a1 >> 8) & 0xFF0000);
  v4 = *((_QWORD *)v2 + 2);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    v9 = 0LL;
  }
  else
  {
    v7 = ((v3 - v6) >> 16) + 1;
    if ( v3 < v6 )
      v7 = 0LL;
    v8 = *(_QWORD *)(v4 + 8 * v7 + 8);
    if ( (_DWORD)v7 )
      v3 += ((1 - (_DWORD)v7) << 16) - v6;
    v9 = 0LL;
    if ( v3 < *(_DWORD *)(v8 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                   + 16LL * (unsigned __int8)v3
                   + 8) )
    {
      v9 = *(_QWORD *)v8 + 24LL * v3;
    }
  }
  v10 = GdiHandleManager::DecodeIndex(v2, v5);
  v11 = *(_DWORD *)(v4 + 2056);
  v12 = v10;
  if ( v10 >= v11 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    goto LABEL_19;
  v13 = ((v10 - v11) >> 16) + 1;
  if ( v10 < v11 )
    v13 = 0LL;
  v14 = *(_QWORD *)(v4 + 8 * v13 + 8);
  if ( (_DWORD)v13 )
    v12 = ((1 - (_DWORD)v13) << 16) - v11 + (unsigned int)v12;
  if ( (unsigned int)v12 >= *(_DWORD *)(v14 + 20) )
LABEL_19:
    v15 = 0LL;
  else
    v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
  if ( v15 != a1 )
    return 0LL;
  return v9;
}
