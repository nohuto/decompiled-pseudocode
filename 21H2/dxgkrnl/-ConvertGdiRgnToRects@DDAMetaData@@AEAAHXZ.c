/*
 * XREFs of ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C0326308
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0325F94 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C03266FC (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertGdiRgnToRects(DDAMetaData *this)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int *v7; // rbx
  unsigned int v8; // r15d
  unsigned int (__fastcall *v9)(_QWORD, struct tagRECT *); // rbx
  struct tagRECT *DirtyRectData; // rax
  __int64 v11; // rbx
  const wchar_t *v12; // r9
  void *Buffer; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 112LL))(
         *((_QWORD *)this + 8),
         0LL,
         0LL);
  v4 = v2;
  v5 = ((unsigned __int64)v2 - 32) >> 4;
  if ( (unsigned int)v5 <= *((_DWORD *)this + 5) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((const void ***)this + 4), v2, 0, v3);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *))(*((_QWORD *)this + 7) + 112LL))(
            *((_QWORD *)this + 8),
            v4,
            Buffer) )
    {
      v11 = 1161LL;
      WdLogSingleEntry1(2LL, 1161LL);
      v12 = L"Failed to get dirty rects from region";
      goto LABEL_11;
    }
  }
  else
  {
    v6 = 0;
    if ( *((_DWORD *)this + 11) )
    {
      v7 = (unsigned int *)(**((_QWORD **)this + 6) + 16LL);
      while ( 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*((_QWORD *)this + 7) + 96LL))(
               *((_QWORD *)this + 9),
               *(v7 - 2),
               *(v7 - 1),
               *v7,
               v7[1]);
        if ( !v8 )
          break;
        if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
                *((_QWORD *)this + 8),
                *((_QWORD *)this + 8),
                *((_QWORD *)this + 9),
                2LL) )
        {
          WdLogSingleEntry1(2LL, 1135LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to combine move rect with dirty region",
            1135LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return v8;
        }
        ++v6;
        v7 += 6;
        if ( v6 >= *((_DWORD *)this + 11) )
          goto LABEL_7;
      }
      v11 = 1129LL;
      WdLogSingleEntry1(2LL, 1129LL);
      v12 = L"Failed to set tmp region to current dirty rect";
      goto LABEL_11;
    }
LABEL_7:
    v9 = *(unsigned int (__fastcall **)(_QWORD, struct tagRECT *))(*((_QWORD *)this + 7) + 120LL);
    DirtyRectData = DDAMetaData::GetDirtyRectData(this, 1u);
    if ( !v9(*((_QWORD *)this + 8), DirtyRectData) )
    {
      v11 = 1143LL;
      WdLogSingleEntry1(2LL, 1143LL);
      v12 = L"Failed to get bounding box";
LABEL_11:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
      return 0LL;
    }
    *((_DWORD *)this + 11) = 0;
    LODWORD(v5) = 1;
    *((_DWORD *)this + 4) = 1;
  }
  *((_DWORD *)this + 6) = v5;
  return 1LL;
}
