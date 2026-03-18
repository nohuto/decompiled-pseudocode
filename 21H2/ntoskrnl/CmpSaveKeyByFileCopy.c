/*
 * XREFs of CmpSaveKeyByFileCopy @ 0x14090DF50
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     CmpFileRead @ 0x1406D7050 (CmpFileRead.c)
 *     CmpFileFlush @ 0x1406E10CC (CmpFileFlush.c)
 *     CmpFileWrite @ 0x140713F50 (CmpFileWrite.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14083D1A4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSaveKeyByFileCopy(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithQuotaTag; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r15d
  unsigned int v9; // ebx
  ULONG v10; // r14d
  NTSTATUS v11; // eax
  int v12; // ecx
  _DWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v15; // [rsp+38h] [rbp-18h]
  int v16; // [rsp+40h] [rbp-10h]

  v14[1] = 0;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolBaseCacheAligned|PagedPool|0x8, 0x10000uLL, 0x20204D43u);
  if ( PoolWithQuotaTag )
  {
    CmpBecomeActiveFlusherAndReconciler(a1);
    if ( (*(_DWORD *)(a1 + 4224) & 2) != 0 )
    {
      v5 = -1073741670;
    }
    else
    {
      *(_QWORD *)(a1 + 1560) = a2;
      if ( (int)CmpFileRead(a1, 0, 0, (char *)PoolWithQuotaTag, 0x1000u) >= 0 )
      {
        v8 = PoolWithQuotaTag[10];
        v14[0] = 0;
        ++PoolWithQuotaTag[1];
        v15 = PoolWithQuotaTag;
        v16 = 4096;
        if ( (int)CmpFileWrite(a1, 2u, (int)v14, 1, 0) >= 0 )
        {
          v9 = 0;
          if ( v8 )
          {
            while ( 1 )
            {
              v10 = v8 - v9;
              if ( v8 - v9 > 0x10000 )
                v10 = 0x10000;
              if ( (int)CmpFileRead(a1, 0, v9 + 4096, (char *)PoolWithQuotaTag, v10) < 0 )
                break;
              v14[0] = v9 + 4096;
              v15 = PoolWithQuotaTag;
              v16 = v10;
              if ( (int)CmpFileWrite(a1, 2u, (int)v14, 1, 0) < 0 )
                break;
              v9 += v10;
              if ( v9 >= v8 )
                goto LABEL_14;
            }
          }
          else
          {
LABEL_14:
            if ( CmpFileFlush(a1, 2u) >= 0 && (int)CmpFileRead(a1, 0, 0, (char *)PoolWithQuotaTag, 0x1000u) >= 0 )
            {
              ++PoolWithQuotaTag[1];
              ++PoolWithQuotaTag[2];
              v14[0] = 0;
              v15 = PoolWithQuotaTag;
              v16 = 4096;
              if ( (int)CmpFileWrite(a1, 2u, (int)v14, 1, 0) >= 0 )
              {
                v11 = CmpFileFlush(a1, 2u);
                v12 = 0;
                if ( v11 < 0 )
                  v12 = -1073741491;
                v5 = v12;
                goto LABEL_20;
              }
            }
          }
        }
      }
      v5 = -1073741491;
    }
LABEL_20:
    *(_QWORD *)(a1 + 1560) = 0LL;
    CmpFinishBeingActiveFlusherAndReconciler(a1, v6, v7);
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
    return v5;
  }
  return (unsigned int)-1073741670;
}
