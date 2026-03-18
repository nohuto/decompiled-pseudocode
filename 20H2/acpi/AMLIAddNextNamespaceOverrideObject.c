/*
 * XREFs of AMLIAddNextNamespaceOverrideObject @ 0x1C00647FC
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0064694 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     FreeObjData @ 0x1C0003010 (FreeObjData.c)
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0064A80 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0064B74 (AMLICreateOverrideObjectDep.c)
 *     AMLIGetValidNamespaceName @ 0x1C0064DFC (AMLIGetValidNamespaceName.c)
 *     OSReadRegValue @ 0x1C0097134 (OSReadRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverrideObject(__int64 a1, __int64 a2, char *a3)
{
  PVOID PoolWithTag; // rdi
  int valid; // ebx
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v12; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-10h]

  v12 = 0;
  v13 = 0LL;
  PoolWithTag = 0LL;
  valid = AMLIGetValidNamespaceName(a3, &v12);
  if ( valid < 0 )
    return (unsigned int)valid;
  valid = OSReadRegValue(a3);
  if ( valid != -2147483643 )
    goto LABEL_5;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0LL, 0x496C6D41u);
  if ( !PoolWithTag )
  {
    valid = -1073741670;
LABEL_5:
    if ( valid < 0 )
      return (unsigned int)valid;
  }
  valid = OSReadRegValue(a3);
  if ( valid >= 0 )
  {
    v14 = 0LL;
    v16 = 0LL;
    v15 = 0LL;
    v7 = v12 == 1346716767
       ? AMLICreateOverrideObjectDep(PoolWithTag)
       : AMLICreateOverrideObjectDefault(PoolWithTag, 0LL);
    valid = v7;
    if ( v7 >= 0 )
    {
      valid = CreateNameSpaceObject(
                gpheapGlobal,
                (unsigned __int8 *)a3,
                a2,
                *(struct _EX_RUNDOWN_REF **)(a2 + 48),
                &v13,
                0);
      if ( valid < 0 )
      {
        FreeObjData((__int64)&v14);
      }
      else
      {
        v8 = v13;
        v9 = v15;
        *(_OWORD *)(v13 + 64) = v14;
        v10 = v16;
        *(_OWORD *)(v8 + 80) = v9;
        *(_QWORD *)(v8 + 96) = v10;
        DereferenceObjectEx(v8);
      }
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)valid;
}
