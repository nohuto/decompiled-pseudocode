/*
 * XREFs of ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x18042C308
 * Callers:
 *     ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x18042C46C (-_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x18042BD90 (-_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z.c)
 *     ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x18042BDD4 (-_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::_UpdateAutoGutter(__int64 a1, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 *v8; // rbx
  unsigned __int8 v9; // r14
  int v10; // edx
  __int64 *v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  char v14; // r14
  char v15; // r15
  __int64 v17[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v17[0] = 0LL;
  if ( a2 == 0x2000 )
  {
    v8 = (__int64 *)(a1 + 240);
    v9 = 1;
    if ( *(_QWORD *)(a1 + 240) )
      goto LABEL_7;
    v10 = 0;
  }
  else
  {
    v8 = (__int64 *)(a1 + 248);
    v9 = 0;
    if ( *(_QWORD *)(a1 + 248) )
      goto LABEL_7;
    v10 = 1;
  }
  CDropFeedbackItem::_RegisterAutoGutter(a1, v10, a3);
LABEL_7:
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(v17, v8);
  v11 = (__int64 *)v17[0];
  if ( v17[0] )
  {
    v12 = ((v9 ^ 1u) + 1) << 6;
    v13 = *(_DWORD *)(a1 + 72);
    v14 = ((unsigned int)v12 & *(_DWORD *)(a1 + 160)) != 0;
    v15 = ((unsigned int)v12 & v13) != 0;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v17[0] + 32LL))(v17[0], v12, a4, 0LL);
    if ( v14 != v15 )
      CDropFeedbackItem::_PaintAutoGutter(a1, v11, 0);
    if ( *(_BYTE *)(a1 + 157) )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x80000) == 0 )
        v4 = a4;
      (*(void (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(*v11 + 24))(v11, a3, v4, 0LL);
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
}
