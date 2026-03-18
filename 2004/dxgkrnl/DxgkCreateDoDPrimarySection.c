/*
 * XREFs of DxgkCreateDoDPrimarySection @ 0x1C02124C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall DxgkCreateDoDPrimarySection(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  PVOID v10; // rcx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(unsigned int *)(a1 + 4);
  Object = 0LL;
  if ( (unsigned int)v2 <= a2 )
    v2 = a2;
  *(_DWORD *)a1 = v2;
  v12 = v2;
  v4 = MmCreateSection(&Object, 0LL, 0LL, &v12, 4, 0x8000000, 0LL, 0LL);
  v7 = v4;
  if ( v4 >= 0 )
  {
    v10 = Object;
    *(_QWORD *)(a1 + 8) = Object;
    ObfReferenceObject(v10);
    return Object;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
    return 0LL;
  }
}
