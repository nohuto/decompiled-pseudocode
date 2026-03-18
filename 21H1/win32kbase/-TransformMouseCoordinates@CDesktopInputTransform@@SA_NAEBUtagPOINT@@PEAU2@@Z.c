/*
 * XREFs of ?TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z @ 0x1C01BD6BC
 * Callers:
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01C1734 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 * Callees:
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C00518C0 (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00B8618 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B8730 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0123B10 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsIdentityTransform@@YA_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0123E10 (-IsIdentityTransform@@YA_NAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@CDesktopInputTransform@@AEBA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01BD49C (-GetTransform@CDesktopInputTransform@@AEBA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 */

char __fastcall CDesktopInputTransform::TransformMouseCoordinates(const struct tagPOINT *a1, struct tagPOINT *a2)
{
  CPushLock *Instance; // rbx
  float *v5; // rax
  struct tagPOINT v6; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-60h] BYREF
  float v8[16]; // [rsp+30h] [rbp-58h] BYREF

  Instance = CDesktopInputTransform::GetInstance();
  memset(v8, 0, sizeof(v8));
  CPushLock::AcquireLockShared(Instance);
  if ( CDesktopInputTransform::GetTransform(Instance, (struct tagINPUT_TRANSFORM *)v8) )
  {
    CPushLock::ReleaseLock(Instance);
    if ( !IsIdentityTransform((const struct tagINPUT_TRANSFORM *)v8) )
    {
      v6 = (struct tagPOINT)_mm_unpacklo_ps(
                              (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.x),
                              (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.y)).m128_u64[0];
      v5 = (float *)InverseTransformPoint((__int64)v7, (float *)&v6, v8);
      v6 = (struct tagPOINT)__PAIR64__((int)v5[1], (int)*v5);
      *a2 = v6;
    }
    return 1;
  }
  else
  {
    CPushLock::ReleaseLock(Instance);
    return 0;
  }
}
