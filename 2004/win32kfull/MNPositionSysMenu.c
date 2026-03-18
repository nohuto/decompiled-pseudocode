/*
 * XREFs of MNPositionSysMenu @ 0x1C01487A8
 * Callers:
 *     xxxSetSystemMenu @ 0x1C0148738 (xxxSetSystemMenu.c)
 *     xxxMNStartMenu @ 0x1C022302C (xxxMNStartMenu.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 *     xxxMNKeyFilter @ 0x1C0251A9C (xxxMNKeyFilter.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpi @ 0x1C0060694 (GetWindowBordersForDpi.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 */

__int64 __fastcall MNPositionSysMenu(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // esi
  unsigned int v7; // eax
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ebp
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // edi
  int v22; // ecx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 *v26; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v28; // rax
  int DpiDependentMetric; // eax
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rax
  _QWORD v33[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return (__int64)UserSetLastError(6LL, 0LL, a3);
  if ( a1 != a2[10] )
  {
    v33[0] = a2 + 10;
    v33[1] = a1;
    HMAssignmentLock(v33);
  }
  v5 = *(_QWORD *)(a1 + 40);
  v6 = 0;
  v7 = *(_DWORD *)(v5 + 288);
  v8 = v7 & 0xF;
  if ( *(char *)(v5 + 24) < 0 )
  {
    if ( v8 == 3 )
    {
      WindowDpiLastNotify = (v7 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v5 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v7 & 0xF) == 0
           && (v28 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(23LL, WindowDpiLastNotify);
    v30 = *(_QWORD *)(a1 + 40);
    v13 = DpiDependentMetric;
    v31 = *(_DWORD *)(v30 + 288) & 0xF;
    if ( v31 == 3 )
    {
      v16 = (*(_DWORD *)(v30 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v30 + 232) & 0x8000000) != 0 )
    {
      v16 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v31
           && (v32 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v32 + 8) + 64LL) & 1) != 0 )
    {
      v16 = 96;
    }
    else
    {
      v16 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v17 = 24LL;
  }
  else
  {
    if ( v8 == 3 )
    {
      v10 = (v7 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v5 + 232) & 0x8000000) != 0 )
    {
      v10 = GetWindowDpiLastNotify(a1);
    }
    else if ( (v7 & 0xF) == 0
           && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
    {
      v10 = 96;
    }
    else
    {
      v10 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v11 = GetDpiDependentMetric(12LL, v10);
    v12 = *(_QWORD *)(a1 + 40);
    v13 = v11;
    v14 = *(_DWORD *)(v12 + 288) & 0xF;
    if ( v14 == 3 )
    {
      v16 = (*(_DWORD *)(v12 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v12 + 232) & 0x8000000) != 0 )
    {
      v16 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v14
           && (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v15 + 8) + 64LL) & 1) != 0 )
    {
      v16 = 96;
    }
    else
    {
      v16 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v17 = 13LL;
  }
  result = GetDpiDependentMetric(v17, v16);
  v20 = *(_QWORD *)(a1 + 40);
  v21 = result;
  if ( (*(_BYTE *)(v20 + 31) & 0x20) == 0 )
  {
    v22 = *(_DWORD *)(v20 + 288) & 0xF;
    if ( v22 == 3 )
    {
      v24 = (*(_DWORD *)(v20 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v20 + 232) & 0x8000000) != 0 )
    {
      v24 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v22
           && (v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 64LL) & 1) != 0 )
    {
      v24 = 96;
    }
    else
    {
      v24 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    result = GetWindowBordersForDpi(*(_DWORD *)(v20 + 28), *(_DWORD *)(v20 + 24), v20, v19, v24);
    v13 += result;
    v6 = result;
    v21 += result;
  }
  v25 = a2[5];
  if ( (*(_DWORD *)(v25 + 40) & 0x10) == 0 && *(_DWORD *)(v25 + 44) )
  {
    v26 = (__int64 *)a2[11];
    if ( v26 )
    {
      *(_DWORD *)(*v26 + 68) = v6;
      *(_DWORD *)(*v26 + 64) = v6;
      *(_DWORD *)(*v26 + 76) = v21 - v6;
      result = *v26;
      *(_DWORD *)(*v26 + 72) = v13 - v6;
    }
  }
  return result;
}
