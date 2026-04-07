/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800B1C6C
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B4690 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180015018 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x18008E308 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 *     ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800AE57C (--0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800B1760 (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_RecordUnionRect(_QWORD *a1, __int64 a2, RECT *a3)
{
  unsigned int v5; // eax
  __int16 v6; // bx
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned int v15; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[24]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-48h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
  v15 = 0;
  v6 = v5;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget((__int64)a1, v5, &v15) < 0 )
  {
    CStoryboard::UnifiedTargetRect::UnifiedTargetRect((__int64)v16, v6, a3);
    v13 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet((__int64)(a1 + 15), (__int64)v16);
    v11 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x7FDu);
    DynArrayImpl<0>::~DynArrayImpl<0>(v17);
  }
  else
  {
    v7 = 56LL * v15;
    UnionRect((LPRECT)(a1[15] + v7 + 4), a3, (const RECT *)(a1[15] + v7 + 4));
    v8 = v7 + a1[15];
    v9 = *(_DWORD *)(v8 + 48);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x7F7u);
      return (unsigned int)v11;
    }
    if ( v10 > *(_DWORD *)(v8 + 44) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet(v8 + 24, 0x10u, 1, a3);
      v11 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC0u);
      if ( v11 < 0 )
        goto LABEL_9;
    }
    else
    {
      v11 = 0;
      *(RECT *)(*(_QWORD *)(v8 + 24) + 16LL * *(unsigned int *)(v8 + 48)) = *a3;
      *(_DWORD *)(v8 + 48) = v10;
    }
  }
  return (unsigned int)v11;
}
