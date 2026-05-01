/*
 * XREFs of ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x180423864
 * Callers:
 *     ?Freeze@CDropFeedback@@UEAAJK@Z @ 0x180422590 (-Freeze@CDropFeedback@@UEAAJK@Z.c)
 *     ?SetZOrder@CDropFeedback@@UEAAJKPEAK_N@Z @ 0x1804233B0 (-SetZOrder@CDropFeedback@@UEAAJKPEAK_N@Z.c)
 *     ?_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180423940 (-_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 *     ?_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180423E98 (-_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::_FindItem(CDropFeedback *this, int a2, struct IDropFeedbackItem **a3)
{
  __int64 v5; // rcx
  int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // rbx
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  struct IDropFeedbackItem *v12; // [rsp+78h] [rbp+20h] BYREF

  v5 = *((_QWORD *)this + 16);
  v7 = -2147467259;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v11);
    v8 = 0;
    do
    {
      if ( v8 >= v11 )
        break;
      v12 = 0LL;
      v9 = *((_QWORD *)this + 16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IDropFeedbackItem **))(*(_QWORD *)v9 + 32LL))(
             v9,
             v8,
             &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
             &v12) >= 0
        && (*(unsigned int (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v12 + 80LL))(v12) == a2 )
      {
        v7 = 0;
        if ( a3 )
        {
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
          *a3 = v12;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      ++v8;
    }
    while ( v7 < 0 );
  }
  return (unsigned int)v7;
}
