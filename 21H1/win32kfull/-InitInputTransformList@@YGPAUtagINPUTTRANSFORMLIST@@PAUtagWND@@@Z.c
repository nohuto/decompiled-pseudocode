/*
 * XREFs of ?InitInputTransformList@@YGPAUtagINPUTTRANSFORMLIST@@PAUtagWND@@@Z @ 0x15E64D
 * Callers:
 *     ?SetCompositionInput@InputTransform@@YGHPAUtagWND@@PAX@Z @ 0x15E709 (-SetCompositionInput@InputTransform@@YGHPAUtagWND@@PAX@Z.c)
 *     ?StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z @ 0x15E750 (-StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z.c)
 * Callees:
 *     _IsWindowDestroyed@4 @ 0x16F3FE (_IsWindowDestroyed@4.c)
 */

struct tagINPUTTRANSFORMLIST *__thiscall InitInputTransformList(_DWORD *this)
{
  struct tagINPUTTRANSFORMLIST *result; // eax

  if ( IsWindowDestroyed(this) )
    return 0;
  result = (struct tagINPUTTRANSFORMLIST *)this[40];
  if ( result )
    return result;
  if ( !(_gliQpcFreq[1] | _gliQpcFreq[0]) )
    return 0;
  result = (struct tagINPUTTRANSFORMLIST *)Win32AllocPoolZInit(84, 2020176725);
  this[40] = result;
  if ( !result )
    return 0;
  *(_DWORD *)result = 0;
  *((_DWORD *)result + 2) = (char *)result + 4;
  *((_DWORD *)result + 1) = (char *)result + 4;
  return result;
}
