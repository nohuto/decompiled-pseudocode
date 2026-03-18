/*
 * XREFs of NtUserGetMenuIndex @ 0x1C01FA4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetMenuIndex(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  signed int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int v9; // edi
  unsigned int v10; // edx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHmenu(a1);
  v6 = 0;
  v7 = v4;
  if ( !v4 || (v8 = ValidateHmenu(a2)) == 0 )
  {
LABEL_7:
    v9 = v6;
    goto LABEL_8;
  }
  v9 = -1;
  v10 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 44LL);
  if ( v10 )
  {
    do
    {
      v5 = 96LL * v6;
      if ( *(_QWORD *)(v5 + *(_QWORD *)(v7 + 88) + 16) == v8 )
        goto LABEL_7;
    }
    while ( ++v6 < v10 );
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v9;
}
