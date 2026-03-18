/*
 * XREFs of SepInternalSetSecurityAttributesToken @ 0x140590024
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x1405919C0 (SeSetSecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesToken @ 0x140918240 (SeSetSecurityAttributesToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140338294 (AuthzBasepSetSecurityAttributesToken.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     SepShouldSetDelinkFlags @ 0x1406DBAEC (SepShouldSetDelinkFlags.c)
 */

__int64 __fastcall SepInternalSetSecurityAttributesToken(void *a1, KPROCESSOR_MODE a2, char a3, int *a4, __int64 a5)
{
  char v7; // si
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v10; // rbp
  int *v11; // rdx
  _DWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int32 v17[12]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  Object = 0LL;
  v7 = 0;
  v8 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, a2, &Object, 0LL);
  if ( v8 >= 0 )
  {
    if ( a4 )
    {
      if ( a3 || (unsigned __int8)SepShouldSetDelinkFlags(a4, a5) )
        v7 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = (PERESOURCE *)Object;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
      _InterlockedOr(v17, 0);
      v11 = a4;
      v12 = Object;
      v8 = AuthzBasepSetSecurityAttributesToken(*((_DWORD **)Object + 97), v11, a5);
      if ( v8 >= 0 )
      {
        if ( v7 )
          v12[50] |= 0x20000u;
        *((_QWORD *)v12 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      }
      _InterlockedOr(v17, 0);
      ExReleaseResourceLite(v10[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
    }
    else
    {
      v8 = -1073741811;
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v8;
}
