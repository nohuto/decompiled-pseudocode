/*
 * XREFs of ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x180225258
 * Callers:
 *     ??_EPWSLayoutPolicyManager@@UEAAPEAXI@Z @ 0x180225300 (--_EPWSLayoutPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x18013C714 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall PWSLayoutPolicyManager::~PWSLayoutPolicyManager(PWSLayoutPolicyManager *this)
{
  OLECHAR *v2; // rcx
  OLECHAR *v3; // rcx
  OLECHAR *v4; // rcx
  HRESULT v5; // eax

  *(_QWORD *)this = &PWSLayoutPolicyManager::`vftable';
  v2 = (OLECHAR *)*((_QWORD *)this + 15);
  if ( v2 )
    SysFreeString(v2);
  v3 = (OLECHAR *)*((_QWORD *)this + 14);
  if ( v3 )
    SysFreeString(v3);
  v4 = (OLECHAR *)*((_QWORD *)this + 13);
  if ( v4 )
    SysFreeString(v4);
  v5 = VariantClear((VARIANTARG *)((char *)this + 80));
  if ( v5 < 0 )
    _com_issue_error((char *)(unsigned int)v5);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 56);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 32);
  *((_DWORD *)this + 7) = -1073741823;
}
