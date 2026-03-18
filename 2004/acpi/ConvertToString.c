/*
 * XREFs of ConvertToString @ 0x1C006B2C8
 * Callers:
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     Concat @ 0x1C0068A70 (Concat.c)
 *     ToString @ 0x1C006ADB0 (ToString.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     RtlStringCchPrintfA @ 0x1C000C588 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 */

__int64 __fastcall ConvertToString(__int64 a1, unsigned int a2, __int64 a3)
{
  size_t v3; // rdi
  unsigned int v4; // ebx
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // r14
  void *v12; // rax
  _BYTE *v13; // r14
  unsigned int v14; // eax
  void *v15; // rax
  _BYTE *v16; // r14
  size_t v17; // r14
  void *v18; // rax
  _BYTE *v19; // rsi
  __int128 v21; // [rsp+20h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-40h]
  void *v23; // [rsp+40h] [rbp-30h]
  char pszDest[16]; // [rsp+48h] [rbp-28h] BYREF
  char v25; // [rsp+58h] [rbp-18h]

  v3 = a2;
  v4 = 0;
  v25 = 0;
  v6 = *(unsigned __int16 *)(a1 + 2);
  v21 = 0LL;
  WORD1(v21) = 2;
  *(_OWORD *)pszDest = 0LL;
  v22 = 0LL;
  v8 = v6 - 1;
  if ( !v8 )
  {
    if ( IsCompatableDSDTRevision() )
    {
      v17 = 17LL;
      RtlStringCchPrintfA(pszDest, 0x11uLL, "%I64x", *(_QWORD *)(a1 + 16));
    }
    else
    {
      v17 = 9LL;
      RtlStringCchPrintfA(pszDest, 9uLL, "%x", *(_DWORD *)(a1 + 16));
    }
    if ( !(_DWORD)v3 || v3 >= v17 )
      LODWORD(v3) = strnlen(pszDest, v17);
    DWORD2(v22) = v3 + 1;
    v18 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, (int)v3 + 1);
    v23 = v18;
    v19 = v18;
    if ( v18 )
    {
      memmove(v18, pszDest, (unsigned int)(v3 + 1));
      v19[(unsigned int)v3] = 0;
      goto LABEL_30;
    }
    return (unsigned int)-1073741670;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v14 = *(_DWORD *)(a1 + 24) - 1;
    if ( a2 <= v14 )
    {
      if ( !a2 )
        v3 = v14;
      DWORD2(v22) = v3 + 1;
      v15 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, (int)v3 + 1);
      v23 = v15;
      v16 = v15;
      if ( v15 )
      {
        memmove(v15, *(const void **)(a1 + 32), (unsigned int)(v3 + 1));
        v16[v3] = 0;
        goto LABEL_30;
      }
      return (unsigned int)-1073741670;
    }
    return (unsigned int)-1072431098;
  }
  if ( v9 == 1 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    v11 = v10;
    if ( v10 > 0xC9 )
      v11 = 201LL;
    if ( !a2 )
    {
      if ( v10 )
      {
        LODWORD(v3) = strnlen(*(const char **)(a1 + 32), (unsigned int)v11);
        if ( (unsigned int)v3 == v11 )
          return (unsigned int)-1073741306;
      }
LABEL_13:
      DWORD2(v22) = v3 + 1;
      v12 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, (int)v3 + 1);
      v23 = v12;
      v13 = v12;
      if ( v12 )
      {
        memmove(v12, *(const void **)(a1 + 32), (unsigned int)v3);
        v13[(unsigned int)v3] = 0;
LABEL_30:
        FreeDataBuffs(a3, 1u);
        *(_OWORD *)a3 = v21;
        *(_OWORD *)(a3 + 16) = v22;
        *(_QWORD *)(a3 + 32) = v23;
        return v4;
      }
      return (unsigned int)-1073741670;
    }
    if ( a2 <= v10 && a2 <= 0xC8 )
      goto LABEL_13;
    return (unsigned int)-1072431098;
  }
  return (unsigned int)-1072431095;
}
