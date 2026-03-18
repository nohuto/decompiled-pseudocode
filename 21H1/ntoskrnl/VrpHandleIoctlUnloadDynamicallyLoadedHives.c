/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405C901C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1405C9180 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsGetJobSilo @ 0x140200050 (PsGetJobSilo.c)
 *     PsIsThreadInSilo @ 0x140204498 (PsIsThreadInSilo.c)
 *     PsGetPermanentSiloContext @ 0x14025E5D0 (PsGetPermanentSiloContext.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ZwUnloadKey2 @ 0x1403F5C30 (ZwUnloadKey2.c)
 *     VrpUnlockJobContextExclusive @ 0x1405C8F2C (VrpUnlockJobContextExclusive.c)
 *     VrpDestroyNamespaceNode @ 0x1405C92D0 (VrpDestroyNamespaceNode.c)
 *     VrpLockJobContextExclusive @ 0x1405CB45C (VrpLockJobContextExclusive.c)
 *     VrpCleanupNamespace @ 0x1405CB7F4 (VrpCleanupNamespace.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        HANDLE *a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID Object,
        __int64 a6)
{
  int JobSilo; // ebx
  int PermanentSiloContext; // eax
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v14; // rcx
  _DWORD v15[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  __int128 v20; // [rsp+68h] [rbp-18h]

  Object = 0LL;
  a6 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObReferenceObjectByHandleWithTag(*a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
      }
      else
      {
        PermanentSiloContext = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a6);
        JobSilo = PermanentSiloContext;
        if ( PermanentSiloContext < 0 )
        {
          if ( PermanentSiloContext == -1073741275 )
LABEL_15:
            JobSilo = 0;
        }
        else
        {
          v8 = a6;
          VrpLockJobContextExclusive(a6);
          if ( !*(_DWORD *)(v8 + 84) )
          {
            v9 = *(_QWORD *)(v8 + 48);
            v10 = 0LL;
            while ( v10 < v9 )
            {
              v11 = 0LL;
              if ( v10 < v9 )
              {
                if ( !is_mul_ok(*(_QWORD *)(v8 + 40), v10)
                  || (v14 = *(_QWORD *)(v8 + 72),
                      v11 = (__int64 *)(v14 + *(_QWORD *)(v8 + 40) * v10),
                      (unsigned __int64)v11 < v14) )
                {
                  v11 = 0LL;
                }
              }
              v12 = *v11;
              if ( *(int *)(*v11 + 56) < 0 )
              {
                v15[1] = 0;
                v19 = 0;
                v16 = 0LL;
                v17 = v12 + 24;
                v20 = 0LL;
                v15[0] = 48;
                v18 = 576;
                ZwUnloadKey2((__int64)v15, 1LL);
                VrpDestroyNamespaceNode(v8, v12);
                v9 = *(_QWORD *)(v8 + 48);
              }
              else
              {
                ++v10;
              }
            }
            VrpCleanupNamespace(v8);
            VrpUnlockJobContextExclusive(v8);
            goto LABEL_15;
          }
          JobSilo = -1073741738;
          VrpUnlockJobContextExclusive(v8);
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
