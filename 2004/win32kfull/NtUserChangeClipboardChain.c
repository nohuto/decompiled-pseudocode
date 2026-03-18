/*
 * XREFs of NtUserChangeClipboardChain @ 0x1C0151070
 * Callers:
 *     <none>
 * Callees:
 *     xxxChangeClipboardChain @ 0x1C01511B0 (xxxChangeClipboardChain.c)
 */

__int64 __fastcall NtUserChangeClipboardChain(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int128 v20; // [rsp+38h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-10h]

  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v18;
    *((_QWORD *)&v18 + 1) = v4;
    HMLockObject(v4);
    if ( a2 )
    {
      v10 = ValidateHwnd(a2);
      if ( !v10 )
      {
LABEL_7:
        ThreadUnlock1(v15, v14, v16);
        goto LABEL_8;
      }
    }
    else
    {
      v10 = 0LL;
    }
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v20;
    *((_QWORD *)&v20 + 1) = v10;
    if ( v10 )
      HMLockObject(v10);
    v8 = xxxChangeClipboardChain(v9, v10);
    ThreadUnlock1(v12, v11, v13);
    goto LABEL_7;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
