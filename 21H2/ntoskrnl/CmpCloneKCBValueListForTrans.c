/*
 * XREFs of CmpCloneKCBValueListForTrans @ 0x14061BF60
 * Callers:
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvDuplicateCell @ 0x14061C030 (HvDuplicateCell.c)
 */

char __fastcall CmpCloneKCBValueListForTrans(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // edi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]

  v13 = -1;
  v3 = 0;
  v14 = 0;
  *a3 = 0;
  if ( *(_QWORD *)(a1 + 288) )
    return 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
         *(_QWORD *)(a1 + 32),
         *(unsigned int *)(a1 + 40),
         &v13);
  v10 = v8;
  if ( v8 )
  {
    if ( !*(_DWORD *)(v8 + 36) )
    {
      *(_DWORD *)(a1 + 284) = -1;
      goto LABEL_7;
    }
    LOBYTE(v9) = 1;
    v11 = HvDuplicateCell(*(_QWORD *)(a1 + 32), *(unsigned int *)(v8 + 40), 1LL, v9);
    *(_DWORD *)(a1 + 284) = v11;
    if ( v11 != -1 )
    {
      v3 = *(_DWORD *)(v10 + 36);
LABEL_7:
      *(_DWORD *)(a1 + 280) = v3;
      *(_QWORD *)(a1 + 288) = a2;
      v12 = *(_QWORD *)(a1 + 32);
      *a3 = 1;
      (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v13);
      return 1;
    }
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v13);
  }
  return 0;
}
