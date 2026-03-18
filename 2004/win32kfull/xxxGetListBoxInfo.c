/*
 * XREFs of xxxGetListBoxInfo @ 0x1C024A580
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C01FB270 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetListBoxInfo(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 *v5; // rdi
  PRKPROCESS *v6; // r14
  __int64 v7; // rcx
  int v8; // esi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax

  v2 = 0;
  if ( a1
    && ((v3 = a1[5], v4 = 678LL, (*(_WORD *)(v3 + 42) & 0x3FFF) == 0x2A6)
     || (v4 = gpsi, **(_WORD **)(a1[17] + 8LL) == *(_WORD *)(gpsi + 874LL))
      ? (!*(_DWORD *)(v3 + 252)
       ? (v5 = *(unsigned __int64 **)(v3 + 296))
       : (v5 = (unsigned __int64 *)a1[35]))
      : (v5 = 0LL),
        v5) )
  {
    v6 = *(PRKPROCESS **)(a1[2] + 416LL);
    if ( v6 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v4) )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      KeAttachProcess(*v6);
    }
    v9 = *v5;
    if ( v9 )
    {
      if ( PsGetCurrentProcessWow64Process(v7) )
        v10 = 0LL;
      else
        v10 = 3LL;
      if ( (v10 & v9) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (*(_DWORD *)(v9 + 92) & 0x40000) != 0 )
        v2 = *(_DWORD *)(v9 + 76);
      else
        v2 = *(_DWORD *)(v9 + 32);
    }
    if ( v8 )
      KeDetachProcess();
    return v2;
  }
  else
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout((unsigned __int64)a1, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
