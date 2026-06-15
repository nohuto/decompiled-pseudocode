/*
 * XREFs of ?GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800527C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioSessionStore::GetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        PROPVARIANT *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  HRESULT v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    *(_OWORD *)a3 = 0LL;
    a3[2] = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v7 = *((_QWORD *)this + 5);
    if ( !v7 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( *(_DWORD *)(v7 + 16) == a2->pid )
      {
        v8 = *(_QWORD *)v7 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)v7 == *(_QWORD *)&a2->fmtid.Data1 )
          v8 = *(_QWORD *)(v7 + 8) - *(_QWORD *)a2->fmtid.Data4;
        if ( !v8 )
          break;
      }
      v7 = *(_QWORD *)(v7 + 48);
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = PropVariantCopy(a3, (const PROPVARIANT *)(v7 + 24));
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBFD,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v9);
      if ( v6 )
        LeaveCriticalSection(v6);
      return v10;
    }
    else
    {
LABEL_10:
      if ( v6 )
        LeaveCriticalSection(v6);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
