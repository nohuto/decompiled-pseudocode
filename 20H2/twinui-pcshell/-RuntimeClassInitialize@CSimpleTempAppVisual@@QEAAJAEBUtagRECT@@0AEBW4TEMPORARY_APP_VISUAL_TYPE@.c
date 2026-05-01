/*
 * XREFs of ?RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@@Z @ 0x18042C6DC
 * Callers:
 *     ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEBUtagRECT@@AEBU2@AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@AEBQEAU4@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEBUtagRECT@@1AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@3AEAPEAUIApplicationView@@@Z @ 0x18042C250 (--$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEBUtagRECT@@AEBU2@AEBW4TEMPORARY_APP_VISUAL_TYPE.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18001DB14 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CSimpleTempAppVisual::RuntimeClassInitialize(
        CSimpleTempAppVisual *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const enum TEMPORARY_APP_VISUAL_TYPE *a4,
        HWND *a5,
        HWND *a6,
        struct IApplicationView *a7)
{
  LONG top; // r10d
  LONG right; // r11d
  LONG bottom; // ebx
  LONG v11; // edx
  LONG left; // eax
  LONG v13; // r9d
  LONG v14; // r8d

  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  *((_DWORD *)this + 12) = a2->left;
  *((_DWORD *)this + 13) = top;
  *((_DWORD *)this + 14) = right;
  *((_DWORD *)this + 15) = bottom;
  v11 = a3->top;
  left = a3->left;
  v13 = a3->right;
  v14 = a3->bottom;
  *((_DWORD *)this + 16) = left;
  *((_DWORD *)this + 17) = v11;
  *((_DWORD *)this + 18) = v13;
  *((_DWORD *)this + 19) = v14;
  *((_DWORD *)this + 4) = *(_DWORD *)a4;
  *((_QWORD *)this + 4) = *a5;
  *((_QWORD *)this + 5) = *a6;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 3, (__int64)a7);
  return 0LL;
}
