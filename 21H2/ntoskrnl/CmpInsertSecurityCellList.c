/*
 * XREFs of CmpInsertSecurityCellList @ 0x14061A7B0
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpAddSecurityCellToCache @ 0x140662770 (CmpAddSecurityCellToCache.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

char __fastcall CmpInsertSecurityCellList(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, char a4)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r15
  char result; // al
  __int64 v12; // rax
  __int16 v13; // ax
  __int64 v14; // rax
  _DWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v16[2]; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-10h] BYREF
  char v20; // [rsp+90h] [rbp+40h]

  v15[1] = 0;
  v16[1] = 0;
  v15[0] = -1;
  v6 = 0LL;
  v16[0] = -1;
  v7 = 0LL;
  v19[0] = -1;
  v19[1] = 0;
  v8 = 0LL;
  v18[0] = -1;
  v18[1] = 0;
  v9 = 0LL;
  v17[0] = -1;
  v17[1] = 0;
  v20 = 0;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)a3,
          v19);
  result = 0;
  if ( !v10 )
    return result;
  if ( a3 < 0 )
    goto LABEL_12;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, v18);
  v8 = v12;
  if ( !v12 )
  {
LABEL_37:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
    return 0;
  }
  v13 = *(_WORD *)(v12 + 2) & 4;
  if ( !a4 )
  {
    if ( !v13 )
    {
      v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             *(unsigned int *)(v8 + 16),
             v17);
      if ( !v9 )
      {
LABEL_35:
        if ( v8 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
        goto LABEL_37;
      }
      goto LABEL_7;
    }
LABEL_12:
    *(_DWORD *)(v10 + 8) = a3;
    *(_DWORD *)(v10 + 4) = a3;
    goto LABEL_13;
  }
  v9 = v8;
LABEL_7:
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v9 + 44),
          v16);
  v7 = v14;
  if ( !v14 )
  {
LABEL_32:
    if ( v9 && v9 != v8 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
    goto LABEL_35;
  }
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(v14 + 4),
         v15);
  if ( !v6 )
  {
LABEL_30:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
    goto LABEL_32;
  }
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 44))
    || !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v7 + 4)) )
  {
LABEL_28:
    if ( v6 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v15);
    goto LABEL_30;
  }
  *(_DWORD *)(v10 + 4) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v10 + 8) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v7 + 4) = a3;
  *(_DWORD *)(v6 + 8) = a3;
  v20 = 1;
LABEL_13:
  if ( (int)CmpAddSecurityCellToCache(BugCheckParameter2, (unsigned int)a3, 0LL) < 0 )
  {
    if ( v20 )
    {
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(v10 + 4);
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v10 + 8);
    }
    goto LABEL_28;
  }
  if ( v6 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v15);
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
  if ( v9 && v9 != v8 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
  return 1;
}
