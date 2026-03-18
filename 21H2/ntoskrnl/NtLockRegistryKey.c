/*
 * XREFs of NtLockRegistryKey @ 0x14080F930
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtLockRegistryKey(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *(_OWORD *)v11 = 0LL;
  CmpInitializeThreadInfo((__int64)v11);
  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v8 = -1073741727;
  }
  else if ( (unsigned __int8)CmpAcquireShutdownRundown(v3, v2, v4) )
  {
    v8 = CmObReferenceObjectByHandle(a1, 131078, v5, 0, (__int64)&Object, 0LL);
    if ( v8 >= 0 )
    {
      v8 = CmLockKeyForWrite(Object);
      if ( v8 >= 0 )
        v8 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    CmpReleaseShutdownRundown(v7, v6, v9);
  }
  else
  {
    v8 = -1073741431;
  }
  CmCleanupThreadInfo(v11);
  return (unsigned int)v8;
}
