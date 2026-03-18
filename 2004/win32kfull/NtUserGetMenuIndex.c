/*
 * XREFs of NtUserGetMenuIndex @ 0x1C01FB330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetMenuIndex(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  signed int v8; // ebx
  __int64 v9; // rsi
  unsigned int v10; // edi

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHmenu(a1);
  v8 = 0;
  v9 = v4;
  if ( !v4 || (v7 = ValidateHmenu(a2)) == 0 )
  {
LABEL_7:
    v10 = v8;
    goto LABEL_8;
  }
  v10 = -1;
  v5 = *(unsigned int *)(*(_QWORD *)(v9 + 40) + 44LL);
  if ( (_DWORD)v5 )
  {
    do
    {
      v6 = 96LL * v8;
      if ( *(_QWORD *)(v6 + *(_QWORD *)(v9 + 88) + 16) == v7 )
        goto LABEL_7;
    }
    while ( ++v8 < (unsigned int)v5 );
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v10;
}
