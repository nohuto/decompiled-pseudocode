/*
 * XREFs of CmpSetValueDataExisting @ 0x1406200E0
 * Callers:
 *     CmpSetValueKeyExisting @ 0x14065BAA8 (CmpSetValueKeyExisting.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvReallocateCell @ 0x14065B1D0 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 */

__int64 __fastcall CmpSetValueDataExisting(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  __int64 (__fastcall *v6)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // ebx
  unsigned __int16 v13; // r15
  char *v14; // r12
  void *v15; // rax
  size_t v16; // r8
  unsigned int v17; // ebx
  ULONG_PTR v19; // rdx
  int v20; // eax
  unsigned __int16 v21; // r15
  int Cell; // eax
  unsigned __int16 v23; // r15
  ULONG_PTR v24; // rdx
  int v25; // eax
  _DWORD v26[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v27[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v28[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v29; // [rsp+90h] [rbp+40h] BYREF
  void *Src; // [rsp+98h] [rbp+48h]

  Src = a2;
  v27[1] = 0;
  v28[1] = 0;
  v26[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
  v27[0] = -1;
  v28[0] = -1;
  v26[0] = -1;
  v9 = v6(BugCheckParameter2, a5, v28);
  v10 = v9;
  if ( v9 )
  {
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v9 + 4),
            v26);
    if ( !v11 )
    {
      v17 = -1073741670;
LABEL_14:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
      return v17;
    }
    v12 = (a3 + 16343) / 0x3FD8;
    if ( (unsigned __int16)v12 > *(_WORD *)(v10 + 2) )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
      v19 = *(unsigned int *)(v10 + 4);
      v29 = 0LL;
      v20 = HvReallocateCell(BugCheckParameter2, v19, (__int64)&v29, (__int64)v26);
      v11 = v29;
      if ( v20 == -1 )
        goto LABEL_20;
      v21 = *(_WORD *)(v10 + 2);
      *(_DWORD *)(v10 + 4) = v20;
      while ( v21 < (unsigned __int16)v12 )
      {
        Cell = HvAllocateCell(BugCheckParameter2, 16344, a4, 0, 0LL);
        *(_DWORD *)(v11 + 4LL * v21) = Cell;
        if ( Cell == -1 )
          goto LABEL_20;
        ++v21;
      }
    }
    else if ( (unsigned __int16)v12 < *(_WORD *)(v10 + 2) )
    {
      v23 = (a3 + 16343) / 0x3FD8;
      do
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v11 + 4LL * v23++));
      while ( v23 < *(_WORD *)(v10 + 2) );
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
      v24 = *(unsigned int *)(v10 + 4);
      v29 = 0LL;
      v25 = HvReallocateCell(BugCheckParameter2, v24, (__int64)&v29, (__int64)v26);
      v11 = v29;
      if ( v25 == -1 )
        goto LABEL_20;
      *(_DWORD *)(v10 + 4) = v25;
    }
    v13 = 0;
    if ( !(_WORD)v12 )
    {
LABEL_11:
      *(_WORD *)(v10 + 2) = v12;
      v17 = 0;
      goto LABEL_12;
    }
    v14 = (char *)Src;
    while ( 1 )
    {
      v15 = (void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      *(unsigned int *)(v11 + 4LL * v13),
                      v27);
      if ( !v15 )
        break;
      v16 = a3;
      if ( a3 > 0x3FD8 )
        v16 = 16344LL;
      memmove(v15, v14, v16);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
      a3 -= 16344;
      v14 += 16344;
      if ( ++v13 >= (unsigned __int16)v12 )
        goto LABEL_11;
    }
LABEL_20:
    v17 = -1073741670;
LABEL_12:
    if ( v11 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
    goto LABEL_14;
  }
  return 3221225626LL;
}
