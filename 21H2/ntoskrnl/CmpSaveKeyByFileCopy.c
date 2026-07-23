/*
 * XREFs of CmpSaveKeyByFileCopy @ 0x14087DA00
 * Callers:
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     CmpFileRead @ 0x140613AC0 (CmpFileRead.c)
 *     CmpFileWrite @ 0x140618FF0 (CmpFileWrite.c)
 *     CmpFileFlush @ 0x1406FC904 (CmpFileFlush.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EDD8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14079F7B4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSaveKeyByFileCopy(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithQuotaTag; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned int v7; // ebx
  ULONG v8; // r14d
  NTSTATUS v9; // eax
  int v10; // ecx
  _DWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+44h] [rbp-Ch]

  v12[1] = 0;
  v15 = 0;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolBaseCacheAligned|PagedPool|0x8, 0x10000uLL, 0x20204D43u);
  if ( PoolWithQuotaTag )
  {
    CmpBecomeActiveFlusherAndReconciler(a1);
    if ( (*(_DWORD *)(a1 + 4264) & 2) != 0 )
    {
      v5 = -1073741670;
    }
    else
    {
      *(_QWORD *)(a1 + 1552) = a2;
      if ( (int)CmpFileRead(a1, 0, 0, (char *)PoolWithQuotaTag, 0x1000u) >= 0 )
      {
        v6 = PoolWithQuotaTag[10];
        v12[0] = 0;
        ++PoolWithQuotaTag[1];
        v13 = PoolWithQuotaTag;
        v14 = 4096;
        if ( (int)CmpFileWrite(a1, 2u, (int)v12, 1, 0) >= 0 )
        {
          v7 = 0;
          if ( v6 )
          {
            while ( 1 )
            {
              v8 = v6 - v7;
              if ( v6 - v7 > 0x10000 )
                v8 = 0x10000;
              if ( (int)CmpFileRead(a1, 0, v7 + 4096, (char *)PoolWithQuotaTag, v8) < 0 )
                break;
              v12[0] = v7 + 4096;
              v13 = PoolWithQuotaTag;
              v14 = v8;
              if ( (int)CmpFileWrite(a1, 2u, (int)v12, 1, 0) < 0 )
                break;
              v7 += v8;
              if ( v7 >= v6 )
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
              v12[0] = 0;
              v13 = PoolWithQuotaTag;
              v14 = 4096;
              if ( (int)CmpFileWrite(a1, 2u, (int)v12, 1, 0) >= 0 )
              {
                v9 = CmpFileFlush(a1, 2u);
                v10 = 0;
                if ( v9 < 0 )
                  v10 = -1073741491;
                v5 = v10;
                goto LABEL_20;
              }
            }
          }
        }
      }
      v5 = -1073741491;
    }
LABEL_20:
    *(_QWORD *)(a1 + 1552) = 0LL;
    CmpFinishBeingActiveFlusherAndReconciler(a1);
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
    return v5;
  }
  return (unsigned int)-1073741670;
}
