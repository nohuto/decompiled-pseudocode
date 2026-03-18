/*
 * XREFs of AMLICreateNativeNamespaceObject @ 0x1C00655C8
 * Callers:
 *     AcpiReflectNativeObject @ 0x1C005C740 (AcpiReflectNativeObject.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     NewObjData @ 0x1C0015D5C (NewObjData.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C0027F50 (CreateNativeNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AMLIGetValidNamespaceName @ 0x1C0066210 (AMLIGetValidNamespaceName.c)
 */

__int64 __fastcall AMLICreateNativeNamespaceObject(
        int a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  _SLIST_ENTRY *v9; // rdi
  int valid; // ebx
  __int64 v11; // r14
  _SLIST_ENTRY *v12; // rax
  int NameSpaceObject; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  __int16 v16; // cx
  unsigned __int64 v18; // rcx
  __int128 v19; // xmm1
  __int64 v20; // [rsp+28h] [rbp-49h]
  __int64 v21; // [rsp+30h] [rbp-41h]
  __int64 v22; // [rsp+38h] [rbp-39h]
  unsigned __int64 v23; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-21h] BYREF
  __int128 v25; // [rsp+58h] [rbp-19h] BYREF
  __int128 v26; // [rsp+68h] [rbp-9h]
  _SLIST_ENTRY *v27; // [rsp+78h] [rbp+7h]
  int Src; // [rsp+80h] [rbp+Fh] BYREF
  char v29; // [rsp+84h] [rbp+13h]

  v24 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  if ( ((a1 - 6) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741637;
  Src = a2;
  v29 = 0;
  valid = AMLIGetValidNamespaceName(&Src, 0LL);
  if ( valid < 0 )
    return (unsigned int)valid;
  v11 = *a3;
  if ( !v11 )
    return (unsigned int)-1073741823;
  v27 = 0LL;
  v25 = 0LL;
  WORD1(v25) = 8;
  v26 = 0LL;
  DWORD2(v26) = 200;
  if ( a1 == 8 )
  {
    if ( a4 > 7 || a5 > 1 )
      return (unsigned int)-1073741637;
    v12 = NewObjData((struct _SLIST_ENTRY *)gpheapGlobal, (__int64)&v25);
    v9 = v12;
    if ( !v12 )
      return (unsigned int)-1073741670;
    memset(v12, 0, 0xC8uLL);
  }
  *a6 = 0;
  NameSpaceObject = GetNameSpaceObject(&Src, v11, (__int64 *)&v24, 0);
  valid = NameSpaceObject;
  if ( NameSpaceObject < 0 )
  {
    if ( NameSpaceObject != -1073741772 )
      goto LABEL_19;
    valid = CreateNameSpaceObject(
              gpheapGlobal,
              (unsigned __int8 *)&Src,
              v11,
              (struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner,
              (__int64 *)&v23,
              0x20000);
  }
  else
  {
    if ( a1 != 8 || (v15 = v24, v16 = *(_WORD *)(v24 + 66), (unsigned __int16)(v16 - 1) > 3u) && v16 != 8 )
    {
      valid = -1073741823;
      goto LABEL_19;
    }
    if ( (*(_WORD *)(v24 + 64) & 0x180) != 0 )
    {
      valid = -1073741823;
      *a6 = 1;
      goto LABEL_19;
    }
    valid = CreateNativeNameSpaceObject(384LL, &Src, v11, v14, v20, v21, v22, (__int64 *)&v23);
    DereferenceObjectEx(v15);
  }
  if ( valid >= 0 )
  {
    v18 = v23;
    if ( a1 == 8 )
    {
      v19 = v26;
      *(_OWORD *)(v23 + 64) = v25;
      *(_OWORD *)(v18 + 80) = v19;
      *(_QWORD *)(v18 + 96) = v9;
      BYTE1(v9[12].Next) = a4 & 7;
      if ( a5 )
        LOBYTE(v9[12].Next) = 1;
    }
    else
    {
      *(_WORD *)(v23 + 66) = 6;
    }
    *(_WORD *)(v18 + 64) |= 0x200u;
    DereferenceObjectEx(v18);
    return (unsigned int)valid;
  }
LABEL_19:
  if ( v9 )
  {
    v27 = v9;
    FreeObjData((__int64)&v25);
  }
  return (unsigned int)valid;
}
