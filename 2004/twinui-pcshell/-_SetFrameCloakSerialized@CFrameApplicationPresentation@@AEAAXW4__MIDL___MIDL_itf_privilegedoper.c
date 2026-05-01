/*
 * XREFs of ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18018B3A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&_::Run @ 0x1800839F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__-_--Run.c)
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x180083D70 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?Hide@CFrameApplicationPresentation@@UEAAJXZ @ 0x18018A150 (-Hide@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___ @ 0x180188BD0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_SetFrameCloakSerialized(__int64 a1, unsigned int a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_DWORD *)(a1 + 212) )
    return (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                            + 24LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             *(_QWORD *)(a1 + 128),
             a2);
  DWORD2(v3) = a2;
  *(_QWORD *)&v3 = a1;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___((_DWORD *)a1, &v3);
}
