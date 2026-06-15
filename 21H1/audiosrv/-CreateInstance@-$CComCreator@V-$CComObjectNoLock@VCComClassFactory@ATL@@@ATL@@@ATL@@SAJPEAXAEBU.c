/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x180120FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x180120CEC (--_G-$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObjectNoLock<ATL::CComClassFactory>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v7; // esi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -2147024882;
  v8 = operator new(0x48uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 0;
    *((_OWORD *)v8 + 1) = 0LL;
    *((_OWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 6) = 0LL;
    *((_BYTE *)v8 + 56) = 0;
    *(_QWORD *)v8 = &ATL::CComObjectNoLock<ATL::CComClassFactory>::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *((_QWORD *)v9 + 8) = a1;
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 4));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 56) = 1;
      v10 = 0;
    }
    v7 = 0;
    if ( v10 < 0 )
      v7 = v10;
    if ( v7 || (v7 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, _QWORD *))v9)(v9, a2, a3)) != 0 )
      ATL::CComObjectNoLock<ATL::CComClassFactory>::`scalar deleting destructor'(v9);
  }
  return v7;
}
