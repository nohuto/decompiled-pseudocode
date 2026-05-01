/*
 * XREFs of ??$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedback@@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x1804225A0
 * Callers:
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180422A3C (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0CDropFeedback@@QEAA@XZ @ 0x1804226E4 (--0CDropFeedback@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x180423318 (-RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDropFeedback,CDropFeedback,IUnknown * &,LAYOUT_ENVIRONMENT_DETAILS const &,enum DROP_FEEDBACK_INIT_FLAGS &>(
        CDropFeedback **a1,
        __int64 *a2,
        __int64 a3,
        unsigned int *a4)
{
  CDropFeedback *v8; // rax
  int v9; // edi
  CDropFeedback *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  CDropFeedback *v13; // rbx
  CDropFeedback *v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CDropFeedback *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CDropFeedback::CDropFeedback(v8);
    v11 = *a4;
    v12 = *a2;
    v13 = v10;
    v15 = v10;
    v9 = CDropFeedback::RuntimeClassInitialize(v10, v12, a3, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(CDropFeedback *))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
