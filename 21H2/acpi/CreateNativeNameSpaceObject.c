/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C0027F50
 * Callers:
 *     InitializeNativeNamespace @ 0x1C0027E90 (InitializeNativeNamespace.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00655C8 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     SetClearAssociatedNativeObject @ 0x1C00281A8 (SetClearAssociatedNativeObject.c)
 *     GetNextNameSegment @ 0x1C0028224 (GetNextNameSegment.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
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
  int v13; // ebx
  _BYTE *ObjectPath; // r13
  bool v15; // zf
  _BYTE *v16; // rdi
  int NextNameSegment; // eax
  int v18; // eax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v22; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-49h] BYREF
  _BYTE *v25; // [rsp+48h] [rbp-41h] BYREF
  __int64 v26; // [rsp+50h] [rbp-39h]
  _BYTE *v27; // [rsp+58h] [rbp-31h]
  __int64 v28; // [rsp+60h] [rbp-29h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+68h] [rbp-21h]
  __int64 v30; // [rsp+70h] [rbp-19h]
  __int64 *v31; // [rsp+78h] [rbp-11h]
  unsigned __int8 Src[8]; // [rsp+80h] [rbp-9h] BYREF

  v31 = a8;
  v8 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  v29 = (struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner;
  v10 = 0LL;
  v26 = gpnsNativeNameSpaceOverrideRoot;
  v30 = gpheapGlobal;
  v28 = gpnsNameSpaceRoot;
  v23 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2, a3, (__int64 *)&v24, 0);
  v12 = v24;
  v13 = NameSpaceObject;
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v24);
    if ( ObjectPath )
    {
      DereferenceObjectEx(v12);
      v12 = 0LL;
      v25 = ObjectPath;
      v15 = *ObjectPath == 92;
      v16 = ObjectPath;
      v24 = 0LL;
      v27 = ObjectPath;
      if ( v15 )
      {
        v16 = ObjectPath + 1;
        v25 = ObjectPath + 1;
        v27 = ObjectPath + 1;
      }
      v13 = GetNameSpaceObject(v16, v26, (__int64 *)&v22, 0);
      if ( v13 >= 0 )
      {
        FreeNameSpaceObjects(v22);
        v22 = 0LL;
      }
      v9 = v28;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 112));
        v8 = v23;
        v16 = v25;
        v12 = v24;
      }
      Src[4] = 0;
      v10 = v26;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 112));
        v8 = v23;
        v16 = v25;
        v12 = v24;
      }
      if ( v27 )
      {
        while ( 1 )
        {
          NextNameSegment = GetNextNameSegment(v16, Src, &v25);
          v13 = NextNameSegment;
          if ( NextNameSegment < 0 )
            break;
          v13 = GetNameSpaceObject(Src, v9, (__int64 *)&v23, 0);
          if ( v13 < 0 )
          {
            v8 = v23;
            goto LABEL_18;
          }
          v18 = CreateNameSpaceObject(v30, Src, v10, v29, (__int64 *)&v22, 0x20000);
          v8 = v23;
          v13 = v18;
          v19 = v22;
          if ( v18 < 0 )
          {
            if ( v18 != -1073741771 )
              goto LABEL_18;
            v13 = 0;
          }
          else
          {
            v20 = v22;
            *(_WORD *)(v22 + 64) |= 0xA00u;
            SetClearAssociatedNativeObject(v8, v20);
          }
          DereferenceObjectEx(v10);
          v22 = 0LL;
          v10 = v19;
          DereferenceObjectEx(v9);
          v16 = v25;
          v9 = v8;
          v8 = 0LL;
          v23 = 0LL;
          if ( !v25 )
            goto LABEL_17;
        }
        if ( NextNameSegment != -1073741197 )
          goto LABEL_18;
        v13 = 0;
      }
      else if ( v13 < 0 )
      {
        goto LABEL_18;
      }
LABEL_17:
      *v31 = v10;
      v10 = 0LL;
LABEL_18:
      ExFreePoolWithTag(ObjectPath, 0);
      goto LABEL_19;
    }
    v13 = -1073741670;
  }
LABEL_19:
  if ( v12 )
    DereferenceObjectEx(v12);
  if ( v9 )
    DereferenceObjectEx(v9);
  if ( v10 )
    DereferenceObjectEx(v10);
  if ( v8 )
    DereferenceObjectEx(v8);
  return (unsigned int)v13;
}
