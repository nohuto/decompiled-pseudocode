/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AAEXXZ @ 0x143A83
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     ?_lambda_invoker_stdcall_@_lambda_59cd825230cec494f5a31678eb230c23_@@CGXPAX@Z @ 0xF01F2 (-_lambda_invoker_stdcall_@_lambda_59cd825230cec494f5a31678eb230c23_@@CGXPAX@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 */

void __thiscall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(int **this)
{
  int CurrentThreadWin32Thread; // eax
  int *v3; // edx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    _InterlockedDecrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
  if ( (unsigned int)dword_2689E8 > 6 && _tlgKeywordOn(&dword_2689E8, 1LL) )
  {
    v3 = *this;
    v4 = **this;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_2689E8,
      byte_253F6F,
      (const GUID *)(v3 + 1),
      (const GUID *)v3[9],
      (const char **)&v4);
  }
  Win32FreeToPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside, *this);
}
