/*
 * XREFs of ?SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180051F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x180052078 (-IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::SetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  PROPVARIANT **v6; // r14
  __int64 v7; // rax
  char *v8; // rbx
  __int64 v9; // rcx
  HRESULT v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  PROPVARIANT *v16; // rax
  PROPVARIANT *v17; // rbx
  HRESULT v18; // eax
  PROPVARIANT pvarDest[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !CAudioSessionStore::IsValidProperty(this, a3) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x8007065ELL);
    return 2147944030LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v6 = (PROPVARIANT **)((char *)this + 40);
  v7 = *((_QWORD *)this + 5);
  v8 = (char *)this + 40;
  if ( !v7 )
  {
LABEL_18:
    v16 = (PROPVARIANT *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v16;
    if ( v16 )
    {
      *(_OWORD *)(v16 + 3) = 0LL;
      v16[5] = 0LL;
      v18 = PropVariantCopy(v16 + 3, (const PROPVARIANT *)a3);
      v11 = v18;
      if ( v18 >= 0 )
      {
        while ( *v6 )
          v6 = (PROPVARIANT **)(*v6 + 6);
        v17[6] = 0LL;
        *((_DWORD *)v17 + 4) = a2->pid;
        *(GUID *)v17 = a2->fmtid;
        *v6 = v17;
        goto LABEL_11;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC34,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v18);
      operator delete(v17, (const struct std::nothrow_t *)0x38);
LABEL_21:
      if ( this != (CAudioSessionStore *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
      return v11;
    }
    v11 = -2147024882;
    v15 = 3120LL;
    v14 = 2147942414LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v14);
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v7 + 16) == a2->pid )
    {
      v9 = *(_QWORD *)v7 - *(_QWORD *)&a2->fmtid.Data1;
      if ( *(_QWORD *)v7 == *(_QWORD *)&a2->fmtid.Data1 )
        v9 = *(_QWORD *)(v7 + 8) - *(_QWORD *)a2->fmtid.Data4;
      if ( !v9 )
        break;
    }
    v8 = (char *)(v7 + 48);
    v7 = *(_QWORD *)(v7 + 48);
    if ( !v7 )
      goto LABEL_18;
  }
  *(_OWORD *)pvarDest = 0LL;
  v20 = 0LL;
  v10 = PropVariantCopy(pvarDest, (const PROPVARIANT *)a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = (unsigned int)v10;
    v15 = 3103LL;
    goto LABEL_17;
  }
  PropVariantClear((PROPVARIANT *)(*(_QWORD *)v8 + 24LL));
  v12 = *(_QWORD *)v8;
  *(_OWORD *)(v12 + 24) = *(_OWORD *)pvarDest;
  *(_QWORD *)(v12 + 40) = v20;
LABEL_11:
  *((_BYTE *)this + 96) = 1;
  if ( this != (CAudioSessionStore *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  return 0LL;
}
