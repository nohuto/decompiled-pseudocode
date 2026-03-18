/*
 * XREFs of PushAccFieldObj @ 0x1C001B7F8
 * Callers:
 *     AccFieldUnit @ 0x1C0016690 (AccFieldUnit.c)
 *     WriteFieldObj @ 0x1C001A310 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C001A6A0 (ReadFieldObj.c)
 *     AccessFieldData @ 0x1C001AC40 (AccessFieldData.c)
 *     PreserveWriteObj @ 0x1C0069130 (PreserveWriteObj.c)
 * Callees:
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall PushAccFieldObj(
        struct _SLIST_ENTRY *a1,
        __int64 a2,
        _SLIST_ENTRY *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v8; // r8d
  unsigned int v9; // edi
  _SLIST_ENTRY *v10; // r9
  __int64 v11; // rdx
  _SLIST_ENTRY *v12; // rcx
  int v13; // r8d
  _SLIST_ENTRY *v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  v8 = 128;
  if ( *(_DWORD *)(a4 + 20) )
    v8 = *(_DWORD *)(a4 + 28) + 128;
  v9 = PushFrame(a1, 1330004801, v8, a2, &v15);
  if ( !v9 )
  {
    v10 = v15;
    v11 = a5;
    v12 = (_SLIST_ENTRY *)(a5 + a6);
    v15[2].Next = a3;
    *((_QWORD *)&v10[2].Next + 1) = v11;
    v10[3].Next = v12;
    v13 = 1 << ((*(_BYTE *)(a4 + 12) & 0xF) - 1);
    if ( (*(_DWORD *)(a4 + 12) & 0xFu) - 1 > 3 )
      v13 = 1;
    *((_DWORD *)&v10[3].Next + 2) = v13;
    *((_DWORD *)&v10[3].Next + 3) = (8 * v13 + *(_DWORD *)(a4 + 8) + *(_DWORD *)(a4 + 4) - 1) / (unsigned int)(8 * v13);
    v10[4].Next = (_SLIST_ENTRY *)(((1LL << (8 * *((_BYTE *)&v10[3].Next + 8))) & -(__int64)((unsigned int)(8 * *((_DWORD *)&v10[3].Next + 2)) < 0x40))
                                 - 1);
    *((_DWORD *)&v10[4].Next + 2) = 8 * *((_DWORD *)&v10[3].Next + 2) - *(_DWORD *)(a4 + 4);
    *((_DWORD *)&v10[4].Next + 3) = *(_DWORD *)(a4 + 4);
    memmove(&v10[6], (const void *)a4, (unsigned int)(*(_DWORD *)(a4 + 28) + 32));
  }
  return v9;
}
