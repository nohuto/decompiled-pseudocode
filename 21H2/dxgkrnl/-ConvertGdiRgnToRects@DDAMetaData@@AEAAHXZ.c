/*
 * XREFs of ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C02A09E8
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C02A0730 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016E9EC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C02A0D20 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertGdiRgnToRects(DDAMetaData *this)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct tagRECT *DirtyRectData; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  void *Buffer; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 112LL))(
         *((_QWORD *)this + 8),
         0LL,
         0LL);
  v3 = v2;
  v4 = ((unsigned __int64)v2 - 32) >> 4;
  if ( (unsigned int)v4 <= *((_DWORD *)this + 5) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)this + 4), v2, 0);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *))(*((_QWORD *)this + 7) + 112LL))(
            *((_QWORD *)this + 8),
            v3,
            Buffer) )
    {
      v16 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v16 + 24) = 1158LL;
      goto LABEL_11;
    }
  }
  else
  {
    v5 = 0;
    if ( *((_DWORD *)this + 11) )
    {
      v6 = (unsigned int *)(**((_QWORD **)this + 6) + 16LL);
      while ( 1 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*((_QWORD *)this + 7) + 96LL))(
               *((_QWORD *)this + 9),
               *(v6 - 2),
               *(v6 - 1),
               *v6,
               v6[1]);
        if ( !v9 )
          break;
        if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
                *((_QWORD *)this + 8),
                *((_QWORD *)this + 8),
                *((_QWORD *)this + 9),
                2LL) )
        {
          v17 = WdLogNewEntry5_WdError(v11, v10);
          *(_QWORD *)(v17 + 24) = 1132LL;
          WdLogEvent5_WdError(v17);
          return v9;
        }
        ++v5;
        v6 += 6;
        if ( v5 >= *((_DWORD *)this + 11) )
          goto LABEL_7;
      }
      v16 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v16 + 24) = 1126LL;
      goto LABEL_11;
    }
LABEL_7:
    v12 = *((_QWORD *)this + 7);
    DirtyRectData = DDAMetaData::GetDirtyRectData(this, 1u);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, struct tagRECT *))(v12 + 120))(*((_QWORD *)this + 8), DirtyRectData) )
    {
      v16 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v16 + 24) = 1140LL;
LABEL_11:
      WdLogEvent5_WdError(v16);
      return 0LL;
    }
    *((_DWORD *)this + 11) = 0;
    LODWORD(v4) = 1;
    *((_DWORD *)this + 4) = 1;
  }
  *((_DWORD *)this + 6) = v4;
  return 1LL;
}
