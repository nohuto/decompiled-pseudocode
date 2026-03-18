/*
 * XREFs of VidSchiIncrementContextReference @ 0x1C00130A0
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C001270C (VidSchiCreateContextInternal.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0014BD0 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C00166B0 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C001773C (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiReportHwHang @ 0x1C0044C40 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1C00AE010 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIncrementContextReference(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 72));
  if ( (_DWORD)result == 1 )
  {
    if ( !*(_BYTE *)(a1 + 908) )
    {
      WdLogSingleEntry5(0LL, 281LL, 3840LL, a1, 0LL, 0LL);
      __debugbreak();
      JUMPOUT(0x1C0029099LL);
    }
    result = *(_QWORD *)(a1 + 104);
    _InterlockedIncrement64((volatile signed __int64 *)(result + 24));
  }
  return result;
}
