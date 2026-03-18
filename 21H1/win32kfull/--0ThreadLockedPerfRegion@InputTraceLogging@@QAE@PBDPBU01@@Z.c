/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _NtUserSetCursorPos@8 @ 0xAE922 (_NtUserSetCursorPos@8.c)
 *     ?OnPointerCursorOperation@@YGXXZ @ 0xAF582 (-OnPointerCursorOperation@@YGXXZ.c)
 *     _NtUserSendInput@12 @ 0xAF922 (_NtUserSendInput@12.c)
 *     _EditionHandleMitSignal@4 @ 0xAFAEE (_EditionHandleMitSignal@4.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 *     _ProcessHidRawInput@4 @ 0x14434F (_ProcessHidRawInput@4.c)
 *     _EditionLLMouseButtonHook@28 @ 0x1479C6 (_EditionLLMouseButtonHook@28.c)
 *     _EditionLLMouseWheelHook@24 @ 0x147BBA (_EditionLLMouseWheelHook@24.c)
 *     _NtUserInjectTouchInput@8 @ 0x165800 (_NtUserInjectTouchInput@8.c)
 *     _OnPTPMouseOperation@0 @ 0x178BB9 (_OnPTPMouseOperation@0.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z @ 0x9AEC8 (-Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 */

int **__thiscall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        int **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  PKTHREAD CurrentThread; // eax
  int *v5; // eax
  int CurrentThreadWin32Thread; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  int *v9; // edx
  int v11; // [esp+Ch] [ebp-4h] BYREF

  *this = 0;
  if ( InputTraceLogging::Enabled(1) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( W32GetThreadWin32Thread(CurrentThread) )
    {
      v5 = (int *)Win32AllocateFromPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      *this = v5;
      if ( v5 )
      {
        *v5 = (int)a2;
        (*this)[9] = 0;
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
        if ( CurrentThreadWin32Thread )
          _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
        if ( a3 && *(_DWORD *)a3 )
        {
          v7 = (_DWORD *)(*(_DWORD *)a3 + 4);
          v8 = *this + 5;
          *v8 = *v7++;
          *++v8 = *v7++;
          *++v8 = *v7;
          v8[1] = v7[1];
          (*this)[9] = (int)(*this + 5);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( (unsigned int)dword_2689E8 > 6 && _tlgKeywordOn(&dword_2689E8, 1LL) )
        {
          v9 = *this;
          v11 = **this;
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (int)&dword_2689E8,
            (int)&unk_253F91,
            (int)(v9 + 1),
            v9[9],
            (int)&v11);
        }
        PushW32ThreadLock(
          (int)this,
          *this + 10,
          (int)_lambda_59cd825230cec494f5a31678eb230c23_::_lambda_invoker_stdcall_);
      }
    }
  }
  return this;
}
