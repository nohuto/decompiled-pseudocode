/*
 * XREFs of ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800ADE9C
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800B158C (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CStoryboard::UnifiedTargetRect::UnifiedTargetRect(__int64 a1, __int16 a2, _OWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // eax

  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)a1 = a2 & 0xFFF;
  *(_OWORD *)(a1 + 4) = *a3;
  v4 = *(_DWORD *)(a1 + 48);
  v5 = v4 + 1;
  if ( v4 + 1 >= v4 )
  {
    if ( v5 > *(_DWORD *)(a1 + 44) )
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 24, 0x10u, 1, a3);
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 24) + 16LL * *(unsigned int *)(a1 + 48)) = *a3;
      *(_DWORD *)(a1 + 48) = v5;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return a1;
}
