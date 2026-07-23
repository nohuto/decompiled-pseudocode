/*
 * XREFs of CmpCompareNewValueDataAgainstKCBCache @ 0x14065AC08
 * Callers:
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindNameInListWithStatus @ 0x14065AD9C (CmpFindNameInListWithStatus.c)
 *     CmpGetValueData @ 0x1406E7B70 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCompareNewValueDataAgainstKCBCache(__int64 a1, int a2, int a3, const void *a4, unsigned int a5)
{
  char v8; // r15
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // eax
  void *v14; // rdi
  SIZE_T v15; // r8
  int v16; // eax
  char ValueData; // al
  unsigned int v19; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-1Ch] BYREF
  void *v21; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v22[2]; // [rsp+50h] [rbp-10h] BYREF
  _DWORD v23[2]; // [rsp+58h] [rbp-8h] BYREF
  char v24; // [rsp+80h] [rbp+20h] BYREF

  v24 = 0;
  v21 = 0LL;
  v19 = 0;
  v22[1] = 0;
  v23[1] = 0;
  v22[0] = -1;
  v23[0] = -1;
  v8 = 0;
  if ( (int)CmpFindNameInListWithStatus(*(_QWORD *)(a1 + 32), (int)a1 + 96, a2, 0, 0LL, (__int64)&v19) < 0 )
    return 2;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 8LL))(
         *(_QWORD *)(a1 + 32),
         v19,
         v23);
  v10 = 2;
  v11 = v9;
  if ( (*(_BYTE *)(v9 + 16) & 2) == 0 && a3 == *(_DWORD *)(v9 + 12) )
  {
    v12 = *(_DWORD *)(v9 + 4);
    if ( a5 == (v12 & 0x7FFFFFFF) )
    {
      if ( a5 )
      {
        v13 = v12 + 0x80000000;
        if ( v12 < 0x80000000 )
          v13 = v12;
        v20 = v13;
        if ( v12 < 0x80000000 )
        {
          v8 = 1;
          ValueData = CmpGetValueData(
                        *(_QWORD *)(a1 + 32),
                        v19,
                        v11,
                        (unsigned int)&v20,
                        (__int64)&v21,
                        (__int64)&v24,
                        (__int64)v22);
          v14 = v21;
          if ( !ValueData )
            goto LABEL_11;
        }
        else
        {
          v14 = (void *)(v11 + 8);
        }
        v15 = a5;
        LODWORD(v15) = a5 & 0x7FFFFFFF;
        v16 = RtlCompareMemory(v14, a4, v15);
        v10 = a5 != v16 ? 2 : 0;
LABEL_11:
        if ( v14 && v8 )
        {
          if ( v24 == 1 )
            ExFreePoolWithTag(v14, 0);
          else
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), v22);
        }
        goto LABEL_13;
      }
      v10 = 0;
    }
  }
LABEL_13:
  (*(void (__fastcall **)(_QWORD, _DWORD *, __int64))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), v23, v11);
  return v10;
}
