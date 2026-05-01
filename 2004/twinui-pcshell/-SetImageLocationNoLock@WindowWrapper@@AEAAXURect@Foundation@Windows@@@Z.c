/*
 * XREFs of ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x1800705CC
 * Callers:
 *     ?v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ @ 0x180070500 (-v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ.c)
 *     ?SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x180070550 (-SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f787ce11dee42df79c5ec7bca65a6817___ @ 0x18007067C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f787ce11dee42df79c5ec7bca65a6817.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall WindowWrapper::SetImageLocationNoLock(__int64 a1, float *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  float *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 588)
    && (*(float *)(a1 + 732) != *a2
     || *(float *)(a1 + 736) != a2[1]
     || *(float *)(a1 + 740) != a2[2]
     || *(float *)(a1 + 744) != a2[3]) )
  {
    if ( *(_QWORD *)(a1 + 304) )
    {
      *(_QWORD *)v7 = a1;
      v8 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f787ce11dee42df79c5ec7bca65a6817___(
             v5,
             CurrentThreadId,
             v7);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x190,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
        __debugbreak();
      }
    }
  }
  *(_OWORD *)(a1 + 716) = *(_OWORD *)a2;
}
