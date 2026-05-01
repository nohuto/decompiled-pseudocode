/*
 * XREFs of ??$_MergeThem@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x1804217F4
 * Callers:
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x18042170C (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memcpy_0 @ 0x1800EEEC7 (memcpy_0.c)
 *     ?Compare@CDropFeedbackItemComparator@@QEBAHV?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z @ 0x180421C0C (-Compare@CDropFeedbackItemComparator@@QEBAHV-$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeThem<CDropFeedbackItemComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rbp
  char *v7; // r15
  __int64 v8; // r13
  __int64 v9; // rdi
  char v10; // bl
  unsigned __int64 v11; // rsi
  __int64 *v12; // r13
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h]
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h]

  v17 = a2;
  v5 = a4 >> 1;
  v7 = (char *)(*(_QWORD *)a1 + 8 * a3);
  memcpy_0(*(void **)(a1 + 16), v7, 8 * (a4 >> 1));
  v8 = 0LL;
  v9 = 0LL;
  v17 = 0LL;
  v10 = 0;
  v11 = v5;
  do
  {
    v16 = *(_QWORD *)&v7[8 * v11];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v9);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
    v19 = v17 + 1;
    v12 = (__int64 *)&v7[8 * v8];
    ++v17;
    if ( (int)CDropFeedbackItemComparator::Compare(v13, &v18, &v16) <= 0 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v9);
      result = 1LL;
      ++v9;
      *v12 = v15;
      if ( v9 == v5 )
        v10 = 1;
    }
    else
    {
      result = *(_QWORD *)&v7[8 * v11];
      *v12 = result;
      if ( ++v11 == a4 )
      {
        result = (__int64)memcpy_0(&v7[8 * v19], (const void *)(*(_QWORD *)(a1 + 16) + 8 * v9), 8 * (a4 - v19));
        v10 = 1;
      }
    }
    v8 = v17;
  }
  while ( !v10 );
  return result;
}
