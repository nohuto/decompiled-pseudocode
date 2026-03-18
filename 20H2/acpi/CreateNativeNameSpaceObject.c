/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C0022D64
 * Callers:
 *     InitializeNativeNamespace @ 0x1C0023890 (InitializeNativeNamespace.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00641B8 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C00215DC (GetNameSpaceObject.c)
 *     SetClearAssociatedNativeObject @ 0x1C00236EC (SetClearAssociatedNativeObject.c)
 *     GetNextNameSegment @ 0x1C0023768 (GetNextNameSegment.c)
 *     GetObjectPath @ 0x1C0023838 (GetObjectPath.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 */

__int64 __fastcall CreateNativeNameSpaceObject(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  int NameSpaceObject; // eax
  unsigned __int64 v12; // r14
  int NextNameSegment; // ebx
  _BYTE *ObjectPath; // r13
  bool v15; // zf
  _BYTE *v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v21; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-49h] BYREF
  _BYTE *v24; // [rsp+48h] [rbp-41h] BYREF
  __int64 v25; // [rsp+50h] [rbp-39h]
  _BYTE *v26; // [rsp+58h] [rbp-31h]
  __int64 v27; // [rsp+60h] [rbp-29h]
  struct _EX_RUNDOWN_REF *v28; // [rsp+68h] [rbp-21h]
  __int64 v29; // [rsp+70h] [rbp-19h]
  __int64 *v30; // [rsp+78h] [rbp-11h]
  unsigned __int8 Src[8]; // [rsp+80h] [rbp-9h] BYREF

  v30 = a8;
  v28 = (struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner;
  v8 = 0LL;
  v25 = gpnsNativeNameSpaceOverrideRoot;
  v9 = 0LL;
  v10 = 0LL;
  v29 = gpheapGlobal;
  v27 = gpnsNameSpaceRoot;
  v22 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2, a3, (__int64 *)&v23, 0);
  v12 = v23;
  NextNameSegment = NameSpaceObject;
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v23);
    if ( ObjectPath )
    {
      DereferenceObjectEx(v12);
      v15 = *ObjectPath == 92;
      v12 = 0LL;
      v23 = 0LL;
      v16 = ObjectPath;
      v24 = ObjectPath;
      v26 = ObjectPath;
      if ( v15 )
      {
        v16 = ObjectPath + 1;
        v24 = ObjectPath + 1;
        v26 = ObjectPath + 1;
      }
      NextNameSegment = GetNameSpaceObject(v16, v25, (__int64 *)&v21, 0);
      if ( NextNameSegment >= 0 )
      {
        FreeNameSpaceObjects(v21);
        v21 = 0LL;
      }
      v9 = v27;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 112));
        v8 = v22;
        v16 = v24;
        v12 = v23;
      }
      Src[4] = 0;
      v10 = v25;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 112));
        v8 = v22;
        v16 = v24;
        v12 = v23;
      }
      if ( v26 )
      {
        while ( 1 )
        {
          NextNameSegment = GetNextNameSegment(v16, Src, &v24);
          if ( NextNameSegment < 0 )
            break;
          NextNameSegment = GetNameSpaceObject(Src, v9, (__int64 *)&v22, 0);
          if ( NextNameSegment < 0 )
          {
            v8 = v22;
            goto LABEL_19;
          }
          v17 = CreateNameSpaceObject(v29, Src, v10, v28, &v21, 0x20000);
          v8 = v22;
          NextNameSegment = v17;
          v18 = v21;
          if ( v17 < 0 )
          {
            if ( v17 != -1073741771 )
              goto LABEL_17;
            NextNameSegment = 0;
          }
          else
          {
            v19 = v21;
            *(_WORD *)(v21 + 64) |= 0xA00u;
            SetClearAssociatedNativeObject(v8, v19);
          }
          DereferenceObjectEx(v10);
          v21 = 0LL;
          v10 = v18;
          DereferenceObjectEx(v9);
          v16 = v24;
          v9 = v8;
          v8 = 0LL;
          v22 = 0LL;
          if ( !v24 )
            goto LABEL_17;
        }
        if ( NextNameSegment == -1073741197 )
          NextNameSegment = 0;
      }
LABEL_17:
      if ( NextNameSegment >= 0 )
      {
        *v30 = v10;
        v10 = 0LL;
      }
LABEL_19:
      ExFreePoolWithTag(ObjectPath, 0);
    }
    else
    {
      NextNameSegment = -1073741670;
    }
  }
  if ( v12 )
    DereferenceObjectEx(v12);
  if ( v9 )
    DereferenceObjectEx(v9);
  if ( v10 )
    DereferenceObjectEx(v10);
  if ( v8 )
    DereferenceObjectEx(v8);
  return (unsigned int)NextNameSegment;
}
