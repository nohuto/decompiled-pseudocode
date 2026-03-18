/*
 * XREFs of ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1C02113CC
 * Callers:
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00EED68 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C0214DA4 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     McTemplateK0pqtqqqqqqqq_EtwWriteTransfer @ 0x1C003AAC8 (McTemplateK0pqtqqqqqqqq_EtwWriteTransfer.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C0165644 (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall DISPLAY_SOURCE::CreateNewPostCompositionConfig(
        DISPLAY_SOURCE *this,
        __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  int v6; // ebp
  __int64 v8; // rax
  int NextConfigIndex; // eax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+28h] [rbp-50h]
  LONG v16; // [rsp+30h] [rbp-48h]
  LONG v17; // [rsp+38h] [rbp-40h]
  LONG v18; // [rsp+40h] [rbp-38h]
  LONG v19; // [rsp+48h] [rbp-30h]
  LONG left; // [rsp+50h] [rbp-28h]
  LONG top; // [rsp+58h] [rbp-20h]
  LONG right; // [rsp+60h] [rbp-18h]
  LONG bottom; // [rsp+68h] [rbp-10h]

  v6 = (unsigned __int8)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 536LL) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 9642LL;
    WdLogEvent5_WdAssertion(v8);
  }
  NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 700));
  v11 = *((_DWORD *)this + 701);
  v12 = NextConfigIndex;
  *((_DWORD *)this + 700) = NextConfigIndex;
  if ( NextConfigIndex == v11 || v11 == -1 )
    *((_DWORD *)this + 701) = GetNextConfigIndex(v11);
  v13 = 9 * v12;
  *((_BYTE *)this + 4 * v13 + 2808) = v6;
  *(struct tagRECT *)((char *)this + 4 * v13 + 2812) = *a3;
  *(struct tagRECT *)((char *)this + 4 * v13 + 2828) = *a4;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    bottom = a4->bottom;
    right = a4->right;
    top = a4->top;
    left = a4->left;
    v19 = a3->bottom;
    v18 = a3->right;
    v17 = a3->top;
    v16 = a3->left;
    v15 = v6;
    v14 = *((_DWORD *)this + 4);
    McTemplateK0pqtqqqqqqqq_EtwWriteTransfer(
      v13,
      v12,
      v10,
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      left,
      top,
      right,
      bottom);
  }
}
