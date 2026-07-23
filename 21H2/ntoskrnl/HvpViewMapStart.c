/*
 * XREFs of HvpViewMapStart @ 0x1406FB510
 * Callers:
 *     HvLoadHive @ 0x1406FA774 (HvLoadHive.c)
 *     HvHiveStartEmptyClone @ 0x1408738F8 (HvHiveStartEmptyClone.c)
 * Callees:
 *     CmSiGetSectionLength @ 0x1402F7C1C (CmSiGetSectionLength.c)
 *     CmSiCreateSectionForFile @ 0x1402F7C64 (CmSiCreateSectionForFile.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1406FB5C4 (HvpViewMapCreateViewsForRegion.c)
 */

NTSTATUS __fastcall HvpViewMapStart(__int64 a1, void *a2, int a3, __int64 a4, int a5)
{
  char v5; // al
  NTSTATUS result; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 24) = a4;
  v12 = 0LL;
  result = CmSiCreateSectionForFile((HANDLE *)a1, (v5 & 1) != 0 ? 5 : 23, 2 * !(v5 & 1) + 2, a4, a2);
  if ( result >= 0 )
  {
    result = CmSiGetSectionLength(*(void **)a1, &v12);
    if ( result >= 0 )
    {
      v10 = v12;
      *(_QWORD *)(a1 + 16) = v12;
      if ( v10 < 4096 )
      {
        return -1073741492;
      }
      else
      {
        v11 = (unsigned int)(a3 + 4096);
        LOBYTE(v9) = 1;
        *(_QWORD *)(a1 + 8) = v11;
        result = HvpViewMapCreateViewsForRegion(a1, 4096LL, v11, v9);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
