/*
 * XREFs of CmpUpdateParentForEachSon @ 0x14087B448
 * Callers:
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087F024 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpUpdateParentForEachSon(__int64 a1, __int64 a2, char a3)
{
  char v3; // bl
  int v4; // r15d
  __int64 (__fastcall *v5)(__int64, __int64, int *); // rax
  __int64 v7; // rax
  _DWORD *v8; // r14
  unsigned int v9; // ebp
  unsigned int v10; // esi
  __int64 v11; // rax
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  int v16; // [rsp+68h] [rbp+20h] BYREF
  int v17; // [rsp+6Ch] [rbp+24h]

  LOBYTE(v15) = a3;
  v16 = -1;
  v13 = -1;
  v17 = 0;
  v3 = 0;
  v14 = 0;
  v4 = a2;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8);
  v15 = 0;
  v7 = v5(a1, a2, &v16);
  v8 = (_DWORD *)v7;
  if ( v7 )
  {
    v9 = 0;
    v10 = *(_DWORD *)(v7 + 20) + *(_DWORD *)(v7 + 24);
    if ( v10 )
    {
      while ( 1 )
      {
        CmpFindSubKeyByNumber(a1, v8, v9, &v15);
        if ( v15 == -1 )
          break;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v15, &v13);
        if ( !v11 )
          break;
        *(_DWORD *)(v11 + 16) = v4;
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v13);
        if ( ++v9 >= v10 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v3 = 1;
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v16);
  }
  return v3;
}
