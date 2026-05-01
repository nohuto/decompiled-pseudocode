/*
 * XREFs of _lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator() @ 0x18013BAEC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___::Run @ 0x18013CA10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x18013D948 (McTemplateU0dddd_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18013D9E4 (McTemplateU0q_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator()(_DWORD *a1)
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebp
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    result = (_UNKNOWN **)McTemplateU0dddd_EventWriteTransfer(
                            (_DWORD)a1,
                            (unsigned int)&ImmersiveShell_AppManager_ModeChange_Start,
                            a1[2],
                            0,
                            a1[3],
                            0);
  for ( i = 0; i < a1[4]; ++i )
  {
    v9 = 0LL;
    v4 = *(_QWORD *)a1;
    v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)a1 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( v5(v4, i, &GUID_8ec4fc3a_ddb1_4e84_a7fc_210ec0ffee84, &v9) >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q_EventWriteTransfer(v6, &ImmersiveShell_AppManager_ModeChanged_Start, i);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, (unsigned int)a1[3]);
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q_EventWriteTransfer(v7, &ImmersiveShell_AppManager_ModeChanged_Stop, i);
    }
    result = (_UNKNOWN **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    return (_UNKNOWN **)McTemplateU0dddd_EventWriteTransfer(
                          (_DWORD)a1,
                          (unsigned int)&ImmersiveShell_AppManager_ModeChange_Stop,
                          a1[2],
                          0,
                          a1[3],
                          0);
  return result;
}
