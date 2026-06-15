/*
 * XREFs of ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400165F0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002A8E0 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002A8F0 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002A900 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CAPOWrapperSrv>::QueryInterface(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _DWORD *v7; // rcx
  int v8; // esi
  __int64 result; // rax
  __int64 v10; // rbx

  if ( !a1 )
    return 2147942487LL;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      result = 0LL;
      *a3 = a1;
      return result;
    }
    v6 = &unk_140072F90;
    while ( 1 )
    {
      v7 = (_DWORD *)*(v6 - 2);
      if ( v7 )
      {
        v8 = 0;
        if ( *v7 != *a2 || v7[1] != a2[1] || v7[2] != a2[2] || v7[3] != a2[3] )
          goto LABEL_7;
      }
      else
      {
        v8 = 1;
      }
      if ( *v6 == 1LL )
      {
        v10 = a1 + *(v6 - 1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        result = 0LL;
        *a3 = v10;
        return result;
      }
      result = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))*v6)(a1, a2, a3, *(v6 - 1));
      if ( !(_DWORD)result || !v8 && (int)result < 0 )
        return result;
LABEL_7:
      v6 += 3;
      if ( !*v6 )
        return 2147500034LL;
    }
  }
  return 2147500035LL;
}
