/*
 * XREFs of xxxGetListBoxInfo @ 0x1C0248FD0
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C01FA400 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX @ 0x1C01D41D0 (unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX.c)
 */

__int64 __fastcall xxxGetListBoxInfo(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 *v9; // r14
  PRKPROCESS *v11; // rdi
  __int64 v12; // rcx
  int v13; // esi
  unsigned __int64 v14; // rdi
  __int64 v15; // rax

  v5 = 0;
  v9 = (unsigned __int64 *)unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX(a1, a2, a3, a4);
  if ( v9 )
  {
    v11 = *(PRKPROCESS **)(a1[2] + 424LL);
    if ( v11 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v7, v6, v8) )
    {
      v13 = 0;
    }
    else
    {
      v13 = 1;
      KeAttachProcess(*v11);
    }
    v14 = *v9;
    if ( *v9 )
    {
      if ( PsGetCurrentProcessWow64Process(v12) )
        v15 = 0LL;
      else
        v15 = 3LL;
      if ( (v15 & v14) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (*(_DWORD *)(v14 + 92) & 0x40000) != 0 )
        v5 = *(_DWORD *)(v14 + 76);
      else
        v5 = *(_DWORD *)(v14 + 32);
    }
    if ( v13 )
      KeDetachProcess();
    return v5;
  }
  else
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout((unsigned __int64)a1, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
