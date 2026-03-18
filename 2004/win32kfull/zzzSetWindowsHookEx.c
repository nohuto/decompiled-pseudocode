/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C00459C8
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C0045880 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C0204130 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C00457D4 (zzzUnhookWindowsHookEx.c)
 *     AddHmodDependency @ 0x1C0046128 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C004616C (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E6DA8 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
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
  __int64 v13; // r9
  __int64 v14; // rdi
  int HmodTableIndex; // eax
  int v16; // edx
  __int64 *v17; // r8
  PRKPROCESS *v18; // rcx
  int v19; // edx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // [rsp+28h] [rbp-90h]
  _DWORD v31[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v32; // [rsp+40h] [rbp-78h] BYREF
  __int64 v33; // [rsp+50h] [rbp-68h]
  __int64 v34; // [rsp+58h] [rbp-60h]
  __int64 v35; // [rsp+60h] [rbp-58h]
  __int64 v36; // [rsp+68h] [rbp-50h]

  v6 = a4;
  v7 = a3;
  v32 = 0LL;
  v33 = 0LL;
  v31[0] = 0x4000;
  v31[1] = -1;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v21 = 1426LL;
    goto LABEL_40;
  }
  if ( !a5 )
  {
    v21 = 1427LL;
LABEL_40:
    UserSetLastError(v21);
    return 0LL;
  }
  v35 = gptiCurrent;
  if ( !a3 )
  {
    if ( !a1 && (*((_BYTE *)&unk_1C02EA460 + a4 + 1) & 0x24) == 0 )
      goto LABEL_46;
    goto LABEL_10;
  }
  v9 = *((_BYTE *)&unk_1C02EA460 + a4 + 1);
  if ( (v9 & 2) == 0 )
  {
    v21 = 1429LL;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(a3 + 448) != *(_QWORD *)(gptiCurrent + 448LL) )
    goto LABEL_50;
  if ( *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(a3 + 416) )
  {
    if ( !a1 && (v9 & 0x24) == 0 )
    {
LABEL_46:
      v21 = 1428LL;
      goto LABEL_40;
    }
    if ( !(unsigned __int8)Enforced() )
    {
      v22 = *(_QWORD *)(gptiCurrent + 416LL);
      v23 = *(_QWORD *)(v7 + 416);
      if ( (*(_DWORD *)(v23 + 780) != *(_DWORD *)(v22 + 780) || *(_DWORD *)(v23 + 784) != *(_DWORD *)(v22 + 784))
        && (*(_DWORD *)(v7 + 480) & 0x400000) == 0 )
      {
LABEL_50:
        v21 = 5LL;
        goto LABEL_40;
      }
    }
    if ( (*(_DWORD *)(v7 + 480) & 0xC) != 0 && (*((_BYTE *)&unk_1C02EA460 + v6 + 1) & 0x10) == 0 )
    {
      v21 = 1458LL;
      goto LABEL_40;
    }
  }
LABEL_10:
  v36 = v6;
  if ( (*((_BYTE *)&unk_1C02EA460 + v6 + 1) & 4) != 0
    && !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 880LL, v31)
    && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) >= 0 )
  {
    UserSetLastError(5LL);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 4LL);
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
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 880LL), v10) )
    goto LABEL_50;
  if ( v10 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL) + 64LL) & 4) != 0 )
  {
    v21 = 1459LL;
    goto LABEL_40;
  }
  LOBYTE(v11) = 5;
  v12 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 448LL), v11);
  v13 = v12;
  v30 = v12;
  v14 = v12;
  v34 = v12;
  if ( !v12 )
    return 0LL;
  *(_DWORD *)(v12 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v14 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126LL);
      HMFreeObject(v14);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
    v13 = v14;
  }
  v16 = 1 << (v6 + 1);
  if ( v7 )
  {
    v17 = (__int64 *)(v7 + 912 + 8 * v6);
    *(_DWORD *)(v7 + 672) |= v16;
    if ( *(_QWORD *)(v7 + 472) )
    {
      v18 = *(PRKPROCESS **)(v7 + 416);
      if ( v18 == *(PRKPROCESS **)(gptiCurrent + 416LL) )
      {
        v19 = 0;
      }
      else
      {
        KeAttachProcess(*v18);
        v19 = 1;
        v17 = (__int64 *)(v7 + 912 + 8 * v6);
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 472) + 56LL) = *(_DWORD *)(v7 + 672);
      if ( v19 )
      {
        KeDetachProcess();
        v17 = (__int64 *)(v7 + 912 + 8 * v6);
      }
    }
    v13 = v30;
  }
  else
  {
    v17 = (__int64 *)(*(_QWORD *)(gptiCurrent + 456LL) + 48LL + 8 * v6);
    *(_DWORD *)(v14 + 64) |= 1u;
    *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL) |= v16;
    v7 = 0LL;
  }
  *(_QWORD *)(v13 + 72) = v7;
  *(_DWORD *)(v14 + 64) |= a6 & 0x42;
  *(_DWORD *)(v14 + 48) = v6;
  *(_QWORD *)(v14 + 56) = a5 - a1;
  *(_QWORD *)(v14 + 40) = *v17;
  *v17 = v14;
  if ( (*((_BYTE *)&unk_1C02EA460 + v6 + 1) & 4) != 0 )
  {
    *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v32;
    *((_QWORD *)&v32 + 1) = v14;
    HMLockObject(v14);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v25, v24, v26) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v14);
      return 0LL;
    }
    v14 = ThreadUnlock1(v25, v24, v26);
    if ( !v14 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v14 + 64) & 1) != 0 && (*((_BYTE *)&unk_1C02EA460 + v6 + 1) & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (*((_BYTE *)&unk_1C02EA460 + v6 + 1) & 4) != 0 )
    {
      *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v32;
      *((_QWORD *)&v32 + 1) = v14;
      HMLockObject(v14);
      GenerateMouseMove(0LL);
      v14 = ThreadUnlock1(v28, v27, v29);
      if ( (_DWORD)v6 == 1 )
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 416LL);
    }
  }
  return v14;
}
