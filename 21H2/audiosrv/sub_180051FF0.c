/*
 * XREFs of sub_180051FF0 @ 0x180051FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_180051FF0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  HRESULT v9; // eax
  unsigned int v10; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    v7 = *(_QWORD *)(a1 + 40);
    if ( !v7 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( *(_DWORD *)(v7 + 16) == *(_DWORD *)(a2 + 16) )
      {
        v8 = *(_QWORD *)v7 - *(_QWORD *)a2;
        if ( *(_QWORD *)v7 == *(_QWORD *)a2 )
          v8 = *(_QWORD *)(v7 + 8) - *(_QWORD *)(a2 + 8);
        if ( !v8 )
          break;
      }
      v7 = *(_QWORD *)(v7 + 48);
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = PropVariantCopy((PROPVARIANT *)a3, (const PROPVARIANT *)(v7 + 24));
    v10 = v9;
    if ( v9 < 0 )
    {
      sub_18004BD84((int)retaddr, 3069, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v9);
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
    sub_18004BD84((int)retaddr, 3057, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147467261);
    return 2147500035LL;
  }
}
