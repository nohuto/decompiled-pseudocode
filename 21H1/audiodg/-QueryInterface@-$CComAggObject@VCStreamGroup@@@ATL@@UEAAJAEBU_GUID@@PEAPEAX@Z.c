/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140033D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x140030F78 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComAggObject<CStreamGroup>::QueryInterface(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r14
  _QWORD *v10; // rsi
  _DWORD *v11; // rcx
  int v12; // ebp
  int v13; // eax
  __int64 v14; // rbx

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( ATL::InlineIsEqualUnknown((const struct _GUID *)a2) )
  {
    *v8 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    return v3;
  }
  v9 = v7 + 24;
  if ( v7 != -24 )
  {
    if ( !*(_DWORD *)a2 && !*(_DWORD *)(a2 + 4) && *(_DWORD *)(a2 + 8) == 192 && *(_DWORD *)(a2 + 12) == 1174405120 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v7 + 24);
      *a3 = v9;
      return v3;
    }
    v10 = &unk_1400694B0;
    while ( 1 )
    {
      v11 = (_DWORD *)*(v10 - 2);
      if ( v11 )
      {
        v12 = 0;
        if ( *v11 != *(_DWORD *)a2
          || v11[1] != *(_DWORD *)(a2 + 4)
          || v11[2] != *(_DWORD *)(a2 + 8)
          || v11[3] != *(_DWORD *)(a2 + 12) )
        {
          goto LABEL_22;
        }
      }
      else
      {
        v12 = 1;
      }
      if ( *v10 == 1LL )
      {
        v14 = v9 + *(v10 - 1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        *a3 = v14;
        return v3;
      }
      v13 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))*v10)(v9, a2, a3, *(v10 - 1));
      if ( !v13 || !v12 && v13 < 0 )
        return (unsigned int)v13;
LABEL_22:
      v10 += 3;
      if ( !*v10 )
        return (unsigned int)-2147467262;
    }
  }
  return (unsigned int)-2147024809;
}
