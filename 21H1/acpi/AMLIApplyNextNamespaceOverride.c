/*
 * XREFs of AMLIApplyNextNamespaceOverride @ 0x1C0064970
 * Callers:
 *     AMLIApplyNamespaceOverride @ 0x1C00234A0 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0064970 (AMLIApplyNextNamespaceOverride.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C00215DC (GetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0064970 (AMLIApplyNextNamespaceOverride.c)
 */

__int64 __fastcall AMLIApplyNextNamespaceOverride(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  int v4; // ebx
  int NameSpaceObject; // eax
  __int16 v7; // ax
  unsigned __int64 v8; // rcx
  int NamespaceOverride; // eax
  unsigned __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  int Src; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+3Ch] [rbp-14h]

  v2 = (__int64 *)(a1 + 24);
  v3 = *(__int64 **)(a1 + 24);
  v4 = 0;
  v11 = 0LL;
  v13 = 0;
  while ( v2 != v3 )
  {
    Src = *((_DWORD *)v3 + 10);
    NameSpaceObject = GetNameSpaceObject(&Src, a2, (__int64 *)&v11, 0);
    v4 = NameSpaceObject;
    if ( *((_WORD *)v3 + 33) )
    {
      if ( NameSpaceObject >= 0 )
      {
        v7 = 128;
        goto LABEL_8;
      }
      if ( NameSpaceObject == -1073741772 )
      {
        v4 = CreateNameSpaceObject(
               gpheapGlobal,
               (unsigned __int8 *)&Src,
               a2,
               *(struct _EX_RUNDOWN_REF **)(a2 + 48),
               &v11,
               0);
        if ( v4 >= 0 )
        {
          v7 = 256;
LABEL_8:
          v8 = v11;
          *(_WORD *)(v11 + 64) |= v7;
LABEL_11:
          DereferenceObjectEx(v8);
          v11 = 0LL;
        }
      }
    }
    else
    {
      if ( NameSpaceObject >= 0 )
      {
        NamespaceOverride = AMLIApplyNextNamespaceOverride(v3, v11);
        v8 = v11;
        v4 = NamespaceOverride;
        goto LABEL_11;
      }
      if ( NameSpaceObject == -1073741772 )
        v4 = 0;
    }
    v3 = (__int64 *)*v3;
  }
  return (unsigned int)v4;
}
