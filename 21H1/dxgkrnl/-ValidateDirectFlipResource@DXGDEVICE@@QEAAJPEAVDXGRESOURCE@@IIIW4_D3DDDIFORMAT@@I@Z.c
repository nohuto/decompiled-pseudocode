/*
 * XREFs of ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C015F3A8
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C015EF98 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0140940 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::ValidateDirectFlipResource(
        ADAPTER_RENDER **this,
        struct DXGRESOURCE *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        enum _D3DDDIFORMAT a6,
        unsigned int a7)
{
  unsigned int v7; // r14d
  __int64 v9; // rax
  _QWORD *v10; // r12
  unsigned int v11; // r15d
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  void *v14; // rax
  ADAPTER_RENDER *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r14
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  struct _DXGKARG_DESCRIBEALLOCATION v27; // [rsp+20h] [rbp-30h] BYREF
  DXGDEVICE *v28; // [rsp+90h] [rbp+40h]
  unsigned int v29; // [rsp+A0h] [rbp+50h]

  v29 = a3;
  v28 = (DXGDEVICE *)this;
  v7 = a3;
  if ( (*((_DWORD *)a2 + 1) & 1) != 0 && (v9 = *((_QWORD *)a2 + 7)) != 0 && *(_DWORD *)(v9 + 132) == a7 )
  {
    v10 = *(_QWORD **)(v9 + 136);
    v11 = 0;
    if ( !a7 )
      return 0LL;
    while ( 1 )
    {
      v12 = v10 - 6;
      v13 = *((_DWORD *)v10 - 11);
      if ( (v13 & 0x2000) == 0 )
        break;
      if ( v7 != ((v13 >> 6) & 0xF) )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
        v24[4] = v7;
        v24[3] = a2;
        v26 = (*((_DWORD *)v12 + 1) >> 6) & 0xF;
        v24[6] = -1073741811LL;
        v24[5] = v26;
        goto LABEL_18;
      }
      v14 = (void *)v12[2];
      v15 = this[2];
      memset(&v27.Width, 0, 40);
      v27.hAllocation = v14;
      v16 = ADAPTER_RENDER::DdiDescribeAllocation(v15, &v27, a3);
      v18 = v16;
      if ( v16 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v17, a2);
        v25[4] = v28;
        v25[3] = v18;
        v25[5] = v12[2];
        v25[6] = v12;
        WdLogEvent5_WdError(v25);
        return (unsigned int)v18;
      }
      if ( a4 != v27.Width || a5 != v27.Height || a6 != v27.Format )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, a2, a3);
        v20[3] = a2;
        v20[4] = a6;
        v20[5] = v27.Format;
        v20[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v20);
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
        v24[3] = a4;
        v24[4] = v27.Width;
        v24[5] = a5;
        v24[6] = v27.Height;
        goto LABEL_18;
      }
      v10 = (_QWORD *)*v10;
      ++v11;
      v7 = v29;
      this = (ADAPTER_RENDER **)v28;
      if ( v11 >= a7 )
        return 0LL;
    }
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v24[3] = a2;
    v24[5] = -1073741811LL;
    v24[4] = v12;
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v24[3] = a2;
    v24[4] = -1073741811LL;
  }
LABEL_18:
  WdLogEvent5_WdWarning(v24);
  return 3221225485LL;
}
