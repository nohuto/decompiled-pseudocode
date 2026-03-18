/*
 * XREFs of SeSetSecurityAttributesTokenEx @ 0x1405920B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140268590 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140590714 (SepInternalSetSecurityAttributesToken.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140592310 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepSetSingletonEntry @ 0x1405923EC (SepSetSingletonEntry.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SeSetSecurityAttributesTokenEx(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        char a4,
        int *a5,
        __int64 a6,
        _BYTE *a7)
{
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int ProcUniqueLuidAndIndexFromToken; // eax
  __int64 v13; // r8
  int *v14; // rdx
  int *v15; // r9
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v19; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  v20 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  if ( !a4 || (SepTokenSingletonAttributesConfig & 3) != 3 )
  {
    v15 = a5;
    *a7 = 0;
    return (unsigned int)SepInternalSetSecurityAttributesToken(a1, a2, 1, v15, a6);
  }
  if ( a2 )
    return (unsigned int)-1073741790;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (PERESOURCE *)Object;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
    _InterlockedOr(v17, 0);
    v10 = Object;
    LOBYTE(v11) = 1;
    ProcUniqueLuidAndIndexFromToken = SepGetProcUniqueLuidAndIndexFromTokenEx(v11, Object, &v20, &v19);
    v13 = a6;
    v14 = a5;
    if ( ProcUniqueLuidAndIndexFromToken >= 0 )
    {
      v7 = SepSetSingletonEntry(v20, a5, a6);
      if ( v7 >= 0 )
      {
        *a7 = 1;
LABEL_13:
        v10[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      }
    }
    else
    {
      *a7 = 0;
      v7 = AuthzBasepSetSecurityAttributesToken(v10[97], v14, v13);
      if ( v7 >= 0 )
        goto LABEL_13;
    }
    _InterlockedOr(v17, 0);
    ExReleaseResourceLite(v9[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v7;
}
