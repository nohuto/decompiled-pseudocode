/*
 * XREFs of AMLICreateNativeNamespaceObject @ 0x1C00641B8
 * Callers:
 *     AcpiReflectNativeObject @ 0x1C005B710 (AcpiReflectNativeObject.c)
 * Callees:
 *     FreeObjData @ 0x1C0003010 (FreeObjData.c)
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     NewObjData @ 0x1C000A628 (NewObjData.c)
 *     GetNameSpaceObject @ 0x1C00215DC (GetNameSpaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C0022D64 (CreateNativeNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     AMLIGetValidNamespaceName @ 0x1C0064DFC (AMLIGetValidNamespaceName.c)
 */

__int64 __fastcall AMLICreateNativeNamespaceObject(
        int a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rsi
  int valid; // ebx
  __int64 v12; // r14
  _BYTE *v13; // rax
  int NameSpaceObject; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  __int16 v17; // cx
  __int128 v19; // xmm1
  __int64 v20; // [rsp+28h] [rbp-49h]
  __int64 v21; // [rsp+30h] [rbp-41h]
  __int64 v22; // [rsp+38h] [rbp-39h]
  unsigned __int64 v23; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-21h] BYREF
  __int128 v25; // [rsp+58h] [rbp-19h] BYREF
  __int128 v26; // [rsp+68h] [rbp-9h]
  _BYTE *v27; // [rsp+78h] [rbp+7h]
  int Src; // [rsp+80h] [rbp+Fh] BYREF
  char v29; // [rsp+84h] [rbp+13h]

  v24 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  if ( ((a1 - 6) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741637;
  Src = a2;
  v29 = 0;
  valid = AMLIGetValidNamespaceName(&Src, 0LL);
  if ( valid < 0 )
    return (unsigned int)valid;
  v12 = *a3;
  if ( !v12 )
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
    v13 = (_BYTE *)NewObjData((struct _SLIST_ENTRY *)gpheapGlobal, (__int64)&v25);
    v7 = v13;
    if ( !v13 )
      return (unsigned int)-1073741670;
    memset(v13, 0, 0xC8uLL);
  }
  *a6 = 0;
  NameSpaceObject = GetNameSpaceObject(&Src, v12, (__int64 *)&v24, 0);
  valid = NameSpaceObject;
  if ( NameSpaceObject < 0 )
  {
    if ( NameSpaceObject != -1073741772 )
      goto LABEL_26;
    valid = CreateNameSpaceObject(
              gpheapGlobal,
              (unsigned __int8 *)&Src,
              v12,
              (struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner,
              &v23,
              0x20000);
  }
  else
  {
    if ( a1 != 8 || (v16 = v24, v17 = *(_WORD *)(v24 + 66), (unsigned __int16)(v17 - 1) > 3u) && v17 != 8 )
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
    valid = CreateNativeNameSpaceObject(384LL, &Src, v12, v15, v20, v21, v22, (__int64 *)&v23);
    DereferenceObjectEx(v16);
  }
  v6 = v23;
LABEL_26:
  if ( valid >= 0 )
  {
    if ( a1 == 8 )
    {
      v19 = v26;
      *(_OWORD *)(v6 + 64) = v25;
      *(_OWORD *)(v6 + 80) = v19;
      *(_QWORD *)(v6 + 96) = v7;
      v7[193] = a4 & 7;
      if ( a5 )
        v7[192] = 1;
    }
    else
    {
      *(_WORD *)(v6 + 66) = 6;
    }
    *(_WORD *)(v6 + 64) |= 0x200u;
    DereferenceObjectEx(v6);
    return (unsigned int)valid;
  }
LABEL_19:
  if ( v7 )
  {
    v27 = v7;
    FreeObjData((__int64)&v25);
  }
  return (unsigned int)valid;
}
