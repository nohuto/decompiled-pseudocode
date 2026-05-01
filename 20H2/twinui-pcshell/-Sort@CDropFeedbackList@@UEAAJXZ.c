/*
 * XREFs of ?Sort@CDropFeedbackList@@UEAAJXZ @ 0x180421C40
 * Callers:
 *     <none>
 * Callees:
 *     ??$SortEx@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAJAEBVCDropFeedbackItemComparator@@@Z @ 0x180420F30 (--$SortEx@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@Micr.c)
 */

__int64 __fastcall CDropFeedbackList::Sort(CDropFeedbackList *this)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::SortEx<CDropFeedbackItemComparator>(
           (__int64)this + 16,
           (__int64)&v2);
}
