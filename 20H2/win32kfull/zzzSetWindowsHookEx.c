/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C0074888
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C0074740 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C02032C0 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C0074694 (zzzUnhookWindowsHookEx.c)
 *     AddHmodDependency @ 0x1C0074FE8 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C007502C (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E60E8 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  __int64 v6; // r13
  __int64 v7; // rsi
  char v9; // cl
  ACCESS_MASK v10; // edi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  int HmodTableIndex; // eax
  int v18; // edx
  __int64 *v19; // r8
  PRKPROCESS *v20; // rcx
  int v21; // edx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // [rsp+28h] [rbp-90h]
  _DWORD v33[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v34; // [rsp+40h] [rbp-78h] BYREF
  __int64 v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  __int64 v37; // [rsp+60h] [rbp-58h]
  __int64 v38; // [rsp+68h] [rbp-50h]

  v6 = a4;
  v7 = a3;
  v34 = 0LL;
  v35 = 0LL;
  v33[0] = 0x4000;
  v33[1] = -1;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v23 = 1426LL;
    goto LABEL_40;
  }
  if ( !a5 )
  {
    v23 = 1427LL;
LABEL_40:
    UserSetLastError(v23);
    return 0LL;
  }
  v37 = gptiCurrent;
  if ( !a3 )
  {
    if ( !a1 && (*((_BYTE *)&unk_1C02E9608 + a4 + 1) & 0x24) == 0 )
      goto LABEL_46;
    goto LABEL_10;
  }
  v9 = *((_BYTE *)&unk_1C02E9608 + a4 + 1);
  if ( (v9 & 2) == 0 )
  {
    v23 = 1429LL;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(a3 + 456) != *(_QWORD *)(gptiCurrent + 456LL) )
    goto LABEL_50;
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(a3 + 424) )
  {
    if ( !a1 && (v9 & 0x24) == 0 )
    {
LABEL_46:
      v23 = 1428LL;
      goto LABEL_40;
    }
    if ( !(unsigned __int8)Enforced() )
    {
      v24 = *(_QWORD *)(gptiCurrent + 424LL);
      v25 = *(_QWORD *)(v7 + 424);
      if ( (*(_DWORD *)(v25 + 780) != *(_DWORD *)(v24 + 780) || *(_DWORD *)(v25 + 784) != *(_DWORD *)(v24 + 784))
        && (*(_DWORD *)(v7 + 488) & 0x400000) == 0 )
      {
LABEL_50:
        v23 = 5LL;
        goto LABEL_40;
      }
    }
    if ( (*(_DWORD *)(v7 + 488) & 0xC) != 0 && (*((_BYTE *)&unk_1C02E9608 + v6 + 1) & 0x10) == 0 )
    {
      v23 = 1458LL;
      goto LABEL_40;
    }
  }
LABEL_10:
  v38 = v6;
  if ( (*((_BYTE *)&unk_1C02E9608 + v6 + 1) & 4) != 0
    && !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, v33)
    && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
  {
    UserSetLastError(5LL);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 4LL);
    return 0LL;
  }
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 1 )
      v10 = 32;
    else
      v10 = 8;
  }
  else
  {
    v10 = 16;
  }
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), v10) )
    goto LABEL_50;
  if ( v10 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL) + 64LL) & 4) != 0 )
  {
    v23 = 1459LL;
    goto LABEL_40;
  }
  LOBYTE(v11) = 5;
  v12 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 456LL), v11);
  v15 = v12;
  v32 = v12;
  v16 = v12;
  v36 = v12;
  if ( !v12 )
    return 0LL;
  *(_DWORD *)(v12 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(a2, v13, v14, v12);
    *(_DWORD *)(v16 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126LL);
      HMFreeObject(v16);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
    v15 = v16;
  }
  v18 = 1 << (v6 + 1);
  if ( v7 )
  {
    v19 = (__int64 *)(v7 + 920 + 8 * v6);
    *(_DWORD *)(v7 + 680) |= v18;
    if ( *(_QWORD *)(v7 + 480) )
    {
      v20 = *(PRKPROCESS **)(v7 + 424);
      if ( v20 == *(PRKPROCESS **)(gptiCurrent + 424LL) )
      {
        v21 = 0;
      }
      else
      {
        KeAttachProcess(*v20);
        v21 = 1;
        v19 = (__int64 *)(v7 + 920 + 8 * v6);
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 480) + 56LL) = *(_DWORD *)(v7 + 680);
      if ( v21 )
      {
        KeDetachProcess();
        v19 = (__int64 *)(v7 + 920 + 8 * v6);
      }
    }
    v15 = v32;
  }
  else
  {
    v19 = (__int64 *)(*(_QWORD *)(gptiCurrent + 464LL) + 48LL + 8 * v6);
    *(_DWORD *)(v16 + 64) |= 1u;
    *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) |= v18;
    v7 = 0LL;
  }
  *(_QWORD *)(v15 + 72) = v7;
  *(_DWORD *)(v16 + 64) |= a6 & 0x42;
  *(_DWORD *)(v16 + 48) = v6;
  *(_QWORD *)(v16 + 56) = a5 - a1;
  *(_QWORD *)(v16 + 40) = *v19;
  *v19 = v16;
  if ( (*((_BYTE *)&unk_1C02E9608 + v6 + 1) & 4) != 0 )
  {
    *(_QWORD *)&v34 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v34;
    *((_QWORD *)&v34 + 1) = v16;
    HMLockObject(v16);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v27, v26, v28) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v16);
      return 0LL;
    }
    v16 = ThreadUnlock1(v27, v26, v28);
    if ( !v16 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v16 + 64) & 1) != 0 && (*((_BYTE *)&unk_1C02E9608 + v6 + 1) & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (*((_BYTE *)&unk_1C02E9608 + v6 + 1) & 4) != 0 )
    {
      *(_QWORD *)&v34 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v34;
      *((_QWORD *)&v34 + 1) = v16;
      HMLockObject(v16);
      GenerateMouseMove(0LL);
      v16 = ThreadUnlock1(v30, v29, v31);
      if ( (_DWORD)v6 == 1 )
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
    }
  }
  return v16;
}
