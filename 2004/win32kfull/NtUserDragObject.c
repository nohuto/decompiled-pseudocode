/*
 * XREFs of NtUserDragObject @ 0x1C01F88E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 */

__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h]
  __int128 v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 v30; // [rsp+58h] [rbp-28h]
  __int128 v31; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]

  v30 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v13 = 0;
  v14 = v9;
  if ( v9 )
  {
    *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v27;
    *((_QWORD *)&v27 + 1) = v9;
    HMLockObject(v9);
    if ( a2 )
    {
      v17 = ValidateHwnd(a2);
      if ( !v17 )
      {
LABEL_15:
        ThreadUnlock1(v16, v15, v18);
        goto LABEL_16;
      }
    }
    else
    {
      v17 = 0LL;
    }
    if ( a5 )
    {
      v19 = HMValidateHandle(a5, 3u);
      if ( !v19 )
        goto LABEL_15;
    }
    else
    {
      v19 = 0LL;
    }
    *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v29;
    *((_QWORD *)&v29 + 1) = v17;
    if ( v17 )
      HMLockObject(v17);
    *(_QWORD *)&v31 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v31;
    *((_QWORD *)&v31 + 1) = v19;
    if ( v19 )
      HMLockObject(v19);
    v13 = xxxDragObject(v14, v17, a3, a4, v19);
    ThreadUnlock1(v21, v20, v22);
    ThreadUnlock1(v24, v23, v25);
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return v13;
}
