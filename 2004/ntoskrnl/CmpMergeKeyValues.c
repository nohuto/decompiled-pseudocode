/*
 * XREFs of CmpMergeKeyValues @ 0x140875F90
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408750C0 (CmpCopySyncTree2.c)
 *     CmSaveMergedKeys @ 0x14087958C (CmSaveMergedKeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpInitializeValueNameString @ 0x1406433E4 (CmpInitializeValueNameString.c)
 *     CmpFindNameInList @ 0x140655778 (CmpFindNameInList.c)
 *     CmpAddValueToListEx @ 0x14069D9F8 (CmpAddValueToListEx.c)
 *     CmpCopyValue @ 0x140875850 (CmpCopyValue.c)
 *     CmpSyncKeyValues @ 0x14087693C (CmpSyncKeyValues.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpMergeKeyValues(__int64 a1, __int64 a2, _DWORD *a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
{
  char v6; // bl
  __int64 v8; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int *v12; // r13
  _WORD *PoolWithTag; // rax
  unsigned int v14; // r14d
  _WORD *v15; // r12
  __int64 v16; // rdx
  unsigned int *v17; // rsi
  unsigned int v18; // r15d
  __int64 v19; // rax
  bool v20; // zf
  void (__fastcall *v21)(__int64, _DWORD *); // rax
  int v22; // eax
  _DWORD v24[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v25[2]; // [rsp+48h] [rbp-18h] BYREF
  __int128 v26; // [rsp+50h] [rbp-10h] BYREF
  int v27; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+50h] BYREF
  ULONG_PTR v29; // [rsp+B8h] [rbp+58h]

  v29 = a4;
  v27 = a2;
  v6 = 0;
  v25[1] = 0;
  v24[1] = 0;
  v8 = a6;
  v25[0] = -1;
  v24[0] = -1;
  v10 = a3[15];
  v27 = 0;
  v28 = 0;
  v26 = 0LL;
  if ( *(_DWORD *)(a6 + 60) < v10 )
    *(_DWORD *)(a6 + 60) = v10;
  v11 = a3[16];
  if ( *(_DWORD *)(v8 + 64) < v11 )
    *(_DWORD *)(v8 + 64) = v11;
  v12 = (unsigned int *)(v8 + 36);
  if ( *(_DWORD *)(v8 + 36) )
  {
    v14 = a3[9];
    if ( v14 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x7FFFuLL, 0x20204D43u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        return (char)PoolWithTag;
      v16 = (unsigned int)a3[10];
      LODWORD(a6) = a5 >> 31;
      v17 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, v16, v25);
      if ( v17 )
      {
        v18 = 0;
        while ( 1 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *v17, v24);
          if ( !v19 )
            break;
          CmpInitializeValueNameString(v19, (__int64)&v26, v15);
          v20 = !CmpFindNameInList(v29, v12, (__int64)&v26, 0, (__int64)&v28, (__int64)&v27);
          v21 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
          if ( v20 )
          {
            v21(a1, v24);
            break;
          }
          v21(a1, v24);
          if ( v27 == -1 )
          {
            v22 = CmpCopyValue(a1, *v17, v29, a6);
            if ( v22 == -1 || (int)CmpAddValueToListEx(v29, v22, v28, a6, v12, 1) < 0 )
              break;
          }
          ++v18;
          ++v17;
          if ( v18 >= v14 )
          {
            v6 = 1;
            break;
          }
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25);
      }
      ExFreePoolWithTag(v15, 0);
    }
    else
    {
      v6 = 1;
    }
    LOBYTE(PoolWithTag) = v6;
    return (char)PoolWithTag;
  }
  LOBYTE(PoolWithTag) = CmpSyncKeyValues(a1, a2, a3, a4, a5);
  return (char)PoolWithTag;
}
