/*
 * XREFs of CmpGetValueForAudit @ 0x14087B540
 * Callers:
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpGetValueData @ 0x1406E7B70 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpGetValueForAudit(__int64 a1, __int64 a2, __int64 a3, ULONG a4)
{
  unsigned int v4; // ebx
  __int64 (__fastcall *v8)(__int64, __int64, __int64 *); // rax
  unsigned int v9; // r12d
  PVOID v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned int v13; // ebx
  struct _LOOKASIDE_LIST_EX *v14; // r9
  PVOID TransientPoolWithTag; // rax
  int v16; // eax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h] BYREF
  char v22; // [rsp+90h] [rbp+30h] BYREF

  v4 = 0;
  v19 = 0xFFFFFFFFLL;
  v20 = 0xFFFFFFFFLL;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(a1 + 8);
  v9 = a2;
  Src = 0LL;
  v10 = 0LL;
  v22 = 0;
  v11 = v8(a1, a2, &v20);
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741670;
  LODWORD(NumberOfBytes) = 0;
  if ( !*(_DWORD *)(v11 + 4) )
    goto LABEL_9;
  if ( CmpGetValueData(a1, v9, v11, (unsigned int *)&NumberOfBytes, (__int64)&Src, (__int64)&v22, (__int64)&v19) )
  {
    v4 = NumberOfBytes;
    if ( (_DWORD)NumberOfBytes )
    {
      TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, (unsigned int)NumberOfBytes, a4, v14);
      v10 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
        goto LABEL_5;
      memmove(TransientPoolWithTag, Src, v4);
    }
LABEL_9:
    v16 = *(_DWORD *)(v12 + 12);
    *(_DWORD *)(a3 + 4) = v4;
    v13 = 0;
    *(_DWORD *)a3 = v16;
    *(_QWORD *)(a3 + 8) = v10;
    goto LABEL_10;
  }
LABEL_5:
  v13 = -1073741670;
LABEL_10:
  if ( Src )
  {
    if ( v22 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v19);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v20);
  return v13;
}
