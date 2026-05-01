/*
 * XREFs of ?Freeze@CDropFeedback@@UEAAJK@Z @ 0x1803FF2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x1804005C4 (-_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z.c)
 */

__int64 __fastcall CDropFeedback::Freeze(CDropFeedback *this, unsigned int a2)
{
  int Item; // ebx
  struct IDropFeedbackItem *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Item = CDropFeedback::_FindItem((CDropFeedback *)((char *)this - 24), a2, &v6);
  if ( Item >= 0 )
    Item = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v6 + 176LL))(v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Item;
}
