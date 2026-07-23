/*
 * XREFs of CmpMarkKeyValuesDirty @ 0x140879400
 * Callers:
 *     CmpFreeKeyValues @ 0x140879200 (CmpFreeKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpMarkValueDataDirty @ 0x14065BDA8 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkKeyValuesDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3)
{
  bool v3; // zf
  char v6; // di
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+40h] BYREF
  int v17; // [rsp+74h] [rbp+44h]
  int v18; // [rsp+78h] [rbp+48h] BYREF
  int v19; // [rsp+7Ch] [rbp+4Ch]

  v3 = (*(_BYTE *)(a3 + 2) & 2) == 0;
  v15[0] = -1;
  v15[1] = 0;
  v6 = 1;
  v16 = -1;
  v17 = 0;
  v18 = -1;
  v19 = 0;
  if ( !v3 )
    return v6;
  if ( HvpMarkCellDirty(BugCheckParameter2, a2, 0) )
  {
    v8 = *(unsigned int *)(a3 + 48);
    if ( (_DWORD)v8 == -1 || HvpMarkCellDirty(BugCheckParameter2, v8, 0) )
    {
      v9 = *(unsigned int *)(a3 + 44);
      if ( (_DWORD)v9 == -1 )
        goto LABEL_14;
      if ( HvpMarkCellDirty(BugCheckParameter2, v9, 0) )
      {
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                *(unsigned int *)(a3 + 44),
                &v16);
        v11 = v10;
        if ( v10 )
        {
          v6 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v10 + 4), 0)
            && HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v11 + 8), 0);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
          if ( !v6 )
            return v6;
LABEL_14:
          if ( *(_DWORD *)(a3 + 36) )
          {
            if ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a3 + 40), 0)
              && (v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          *(unsigned int *)(a3 + 40),
                          v15)) != 0 )
            {
              v13 = 0LL;
              if ( *(_DWORD *)(a3 + 36) )
              {
                while ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v12 + 4 * v13), 0) )
                {
                  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          *(unsigned int *)(v12 + 4 * v13),
                          &v18);
                  if ( !v14 )
                    break;
                  v6 = CmpMarkValueDataDirty(BugCheckParameter2, v14);
                  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
                  if ( v6 )
                  {
                    v13 = (unsigned int)(v13 + 1);
                    if ( (unsigned int)v13 < *(_DWORD *)(a3 + 36) )
                      continue;
                  }
                  goto LABEL_25;
                }
                v6 = 0;
              }
LABEL_25:
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v15);
            }
            else
            {
              return 0;
            }
          }
          return v6;
        }
      }
    }
  }
  return 0;
}
