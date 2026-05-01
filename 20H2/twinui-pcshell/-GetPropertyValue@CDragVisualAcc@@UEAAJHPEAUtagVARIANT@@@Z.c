/*
 * XREFs of ?GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x18042D750
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1803B3F34 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?GetBoundingRectangle@AccessibilityHelpers@@YAJPEBUtagRECT@@PEAUtagVARIANT@@@Z @ 0x18042D40C (-GetBoundingRectangle@AccessibilityHelpers@@YAJPEBUtagRECT@@PEAUtagVARIANT@@@Z.c)
 */

__int64 __fastcall CDragVisualAcc::GetPropertyValue(CDragVisualAcc *this, int a2, struct tagVARIANT *a3)
{
  unsigned int inited; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rcx
  bool v11; // cf
  SHORT v12; // ax
  bool v14; // zf
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  const unsigned __int16 *v19; // rax
  const unsigned __int16 *v20; // rcx
  unsigned __int16 *v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+30h] [rbp-18h]

  a3->vt = 0;
  inited = 0;
  if ( !*((_QWORD *)this + 8) )
    return inited;
  if ( a2 > 30013 )
  {
    v15 = a2 - 30016;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        a3->iVal = 0;
        a3->vt = 11;
        return inited;
      }
      v17 = v16 - 90;
      if ( !v17 )
        goto LABEL_27;
      v18 = v17 - 30;
      if ( v18 )
      {
        if ( v18 != 1 )
          return inited;
        if ( ((unsigned int)(*((_DWORD *)this + 12) - 1) > 1 || !*((_BYTE *)this + 52)) && *((_DWORD *)this + 14) == 6 )
          v18 = 0;
        v11 = v18 != 0;
        goto LABEL_13;
      }
    }
    a3->vt = 11;
    v12 = -1;
    goto LABEL_39;
  }
  if ( a2 == 30013 )
  {
    v14 = *((_DWORD *)this + 12) == 1;
    goto LABEL_29;
  }
  v6 = a2 - 30001;
  if ( !v6 )
    return (unsigned int)AccessibilityHelpers::GetBoundingRectangle((CDragVisualAcc *)((char *)this + 72), a3, a3);
  v7 = v6 - 2;
  if ( !v7 )
  {
    a3->lVal = 50032;
    a3->vt = 3;
    return inited;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
LABEL_27:
    if ( *((_DWORD *)this + 14) != 6 )
      goto LABEL_33;
    v14 = *((_BYTE *)this + 52) == 0;
LABEL_29:
    if ( v14 )
    {
      v19 = (const unsigned __int16 *)*((_QWORD *)this + 17);
      v20 = &szAgent;
      if ( v19 )
        v20 = v19;
      return (unsigned int)InitVariantFromString(v20, a3);
    }
LABEL_33:
    v20 = &szAgent;
    if ( *((_QWORD *)this + 14) )
      v20 = (const unsigned __int16 *)*((_QWORD *)this + 14);
    return (unsigned int)InitVariantFromString(v20, a3);
  }
  v9 = v8 - 4;
  if ( !v9 )
  {
    v11 = (unsigned int)(*((_DWORD *)this + 12) - 1) <= 1;
LABEL_13:
    a3->vt = 11;
    v12 = -v11;
LABEL_39:
    a3->iVal = v12;
    return inited;
  }
  if ( v9 == 2 )
  {
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
    v10 = *((_QWORD *)this + 8);
    v23 = -1LL;
    v24 = -1LL;
    inited = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v10 + 128LL))(v10, &v22);
    if ( (inited & 0x80000000) == 0 )
      inited = InitVariantFromString(v22, a3);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
  }
  return inited;
}
