/*
 * XREFs of ?SetZOrder@CDropFeedback@@UEAAJKPEAK_N@Z @ 0x180400110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x1804005C4 (-_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z.c)
 */

__int64 __fastcall CDropFeedback::SetZOrder(CDropFeedback *this, unsigned int a2, unsigned int *a3, char a4)
{
  int Item; // ebx
  __int64 v9; // r8
  struct IDropFeedbackItem *v10; // rdx
  int v11; // eax
  struct IDropFeedbackItem *v13[5]; // [rsp+20h] [rbp-28h] BYREF
  struct IDropFeedbackItem *v14; // [rsp+50h] [rbp+8h] BYREF

  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  Item = CDropFeedback::_FindItem((CDropFeedback *)((char *)this - 24), a2, v13);
  if ( Item >= 0 )
  {
    v10 = 0LL;
    v14 = 0LL;
    if ( a3 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      v11 = CDropFeedback::_FindItem((CDropFeedback *)((char *)this - 24), *a3, &v14);
      v10 = v14;
      Item = v11;
    }
    if ( Item >= 0 )
    {
      LOBYTE(v9) = a4;
      Item = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *, struct IDropFeedbackItem *, __int64))(*(_QWORD *)v13[0] + 168LL))(
               v13[0],
               v10,
               v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  return (unsigned int)Item;
}
