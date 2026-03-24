/*
 * XREFs of CreateDxgkSharedObjectTypes @ 0x1C0195BDC
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0192DAC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?GenericMapping@DxgkCompositionObject@@SA?AU_GENERIC_MAPPING@@XZ @ 0x1C001B4C4 (-GenericMapping@DxgkCompositionObject@@SA-AU_GENERIC_MAPPING@@XZ.c)
 *     ?CreateSharedObject@@YAJPEBG_NU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@ZP6AX45_K8@ZP6AX5@ZP6AE455D@ZPEAPEAU_OBJECT_TYPE@@KW4_POOL_TYPE@@@Z @ 0x1C0195F78 (-CreateSharedObject@@YAJPEBG_NU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAK.c)
 */

__int64 CreateDxgkSharedObjectTypes()
{
  __int64 result; // rax
  struct _GENERIC_MAPPING v1; // [rsp+50h] [rbp-20h] BYREF
  struct _GENERIC_MAPPING v2; // [rsp+60h] [rbp-10h] BYREF

  result = 0LL;
  if ( g_pDxgkSharedAllocationObjectType
    || (v1 = (struct _GENERIC_MAPPING)xmmword_1C007CB58,
        result = CreateSharedObject(
                   L"DxgkSharedResource",
                   0,
                   &v1,
                   (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                   0LL,
                   (void (*)(void *))DxgkSharedAllocationObDeleteProcedure,
                   0LL,
                   &g_pDxgkSharedAllocationObjectType,
                   0,
                   PagedPool),
        (int)result >= 0) )
  {
    if ( !g_pDxgkSharedKeyedMutexObjectType )
    {
      v1 = (struct _GENERIC_MAPPING)xmmword_1C007CB78;
      result = CreateSharedObject(
                 L"DxgkSharedKeyedMutexObject",
                 0,
                 &v1,
                 (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                 0LL,
                 (void (*)(void *))DxgkSharedKeyedMutexObjectObDeleteProcedure,
                 0LL,
                 &g_pDxgkSharedKeyedMutexObjectType,
                 0,
                 PagedPool);
    }
    if ( (int)result >= 0 )
    {
      if ( !g_pDxgkSharedSyncObjectType )
      {
        v1 = (struct _GENERIC_MAPPING)xmmword_1C007CB88;
        result = CreateSharedObject(
                   L"DxgkSharedSyncObject",
                   0,
                   &v1,
                   (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                   0LL,
                   (void (*)(void *))DxgkSharedSyncObjectObDeleteProcedure,
                   0LL,
                   &g_pDxgkSharedSyncObjectType,
                   0,
                   PagedPool);
      }
      if ( (int)result >= 0 )
      {
        if ( !g_pDxgkSharedSwapChainObjectType )
        {
          v1 = (struct _GENERIC_MAPPING)xmmword_1C007CB78;
          result = CreateSharedObject(
                     L"DxgkSharedSwapChainObject",
                     0,
                     &v1,
                     (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                     (void (*)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64))SwapChainObCloseProcedure,
                     (void (*)(void *))SwapChainObDeleteProcedure,
                     0LL,
                     &g_pDxgkSharedSwapChainObjectType,
                     0,
                     PagedPool);
        }
        if ( (int)result >= 0 )
        {
          if ( !g_pDxgkDisplayManagerObjectType )
          {
            v1 = (struct _GENERIC_MAPPING)xmmword_1C007CB78;
            result = CreateSharedObject(
                       L"DxgkDisplayManagerObject",
                       0,
                       &v1,
                       (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                       0LL,
                       (void (*)(void *))DxgkDisplayManagerDeleteProcedure,
                       0LL,
                       &g_pDxgkDisplayManagerObjectType,
                       0,
                       PagedPool);
          }
          if ( (int)result >= 0 )
          {
            if ( !g_pDxgkCurrentDxgThreadObjectType )
            {
              v1 = (struct _GENERIC_MAPPING)xmmword_1C007CB58;
              result = CreateSharedObject(
                         L"DxgkCurrentDxgThreadObject",
                         1,
                         &v1,
                         0LL,
                         0LL,
                         (void (*)(void *))DxgkThreadObjectDeleteProcedure,
                         0LL,
                         &g_pDxgkCurrentDxgThreadObjectType,
                         0,
                         (enum _POOL_TYPE)512);
            }
            if ( (int)result >= 0 )
            {
              if ( !g_pDxgkSharedProtectedSessionObjectType )
              {
                v1 = (struct _GENERIC_MAPPING)xmmword_1C007CB78;
                result = CreateSharedObject(
                           L"DxgkSharedProtectedSessionObject",
                           0,
                           &v1,
                           (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                           0LL,
                           (void (*)(void *))DxgkSharedProtectedSessionObDeleteProcedure,
                           0LL,
                           &g_pDxgkSharedProtectedSessionObjectType,
                           0,
                           PagedPool);
              }
              if ( (int)result >= 0 )
              {
                if ( !g_pDxgkSharedBundleObjectType )
                {
                  v1 = (struct _GENERIC_MAPPING)xmmword_1C007CB68;
                  result = CreateSharedObject(
                             L"DxgkSharedBundleObject",
                             0,
                             &v1,
                             (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                             0LL,
                             (void (*)(void *))DxgkSharedBundleObjectObDeleteProcedure,
                             0LL,
                             &g_pDxgkSharedBundleObjectType,
                             0,
                             PagedPool);
                }
                if ( (int)result >= 0 && !g_pDxgkCompositionObjectType )
                {
                  v1 = *DxgkCompositionObject::GenericMapping(&v2);
                  return CreateSharedObject(
                           L"DxgkCompositionObject",
                           1,
                           &v1,
                           (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))DxgkCompositionObject::Open,
                           (void (*)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64))DxgkCompositionObject::Close,
                           (void (*)(void *))DxgkCompositionObject::Delete,
                           (unsigned __int8 (*)(struct _EPROCESS *, void *, void *, char))DxgkCompositionObject::OkToClose,
                           &g_pDxgkCompositionObjectType,
                           0x400u,
                           PagedPool);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
