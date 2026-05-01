/*
 * XREFs of ?DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180150F60
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800437FC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18008381C (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::DestroyFrame(
        CApplicationFrameService *this,
        struct IApplicationFrameProxy *a2)
{
  int v4; // esi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rax
  __int64 v14[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = -2147023728;
  v5 = 0LL;
  v15 = 0LL;
  v6 = 0LL;
  do
  {
    if ( v6 >= *((_QWORD *)this + 13) )
      break;
    v7 = (_QWORD *)((char *)this + 96);
    v8 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v6);
    if ( (*(unsigned __int8 (__fastcall **)(struct IApplicationFrameProxy *, __int64))(*(_QWORD *)a2 + 232LL))(
           a2,
           (v8 + 8) & -(__int64)(v8 != 0)) )
    {
      v4 = 0;
      v9 = *(_QWORD *)(*v7 + 8 * v6);
      if ( v5 != v9 )
      {
        v16 = *(_QWORD *)(*v7 + 8 * v6);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 64);
          while ( v10 >= 0 )
          {
            if ( (_DWORD)v10 != 0x7FFFFFFF )
            {
              v11 = v10;
              v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 64), v10 + 1, v10);
              if ( v11 != v10 )
                continue;
            }
            goto LABEL_12;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
            (Microsoft::WRL::Details *)(2 * v10 + 16),
            (volatile int *)v9);
LABEL_12:
          v5 = v15;
        }
        v12 = v16;
        v16 = v5;
        v5 = v12;
        v15 = v12;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v16);
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
        (__int64 *)this + 12,
        v6);
    }
    ++v6;
  }
  while ( v4 < 0 );
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    v14[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v5 + 112));
    v14[0] = *(_QWORD *)(v5 + 112);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  }
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v15);
  return (unsigned int)v4;
}
