/*
 * XREFs of ?CreateInstance@EndpointIterator@@SAJPEAVEndpointCollection@@PEAPEAUIEndpointIterator@@@Z @ 0x18013EF40
 * Callers:
 *     ?GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z @ 0x18013F4A0 (-GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointIterator::CreateInstance(struct EndpointCollection *a1, struct IEndpointIterator **a2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  _QWORD *v6; // rax
  int v7; // eax

  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v6 = operator new(0x30uLL);
      v4 = v6;
      if ( v6 )
      {
        *((_DWORD *)v6 + 4) = 1;
        *v6 = &EndpointIterator::`vftable'{for `IEndpointIterator'};
        v6[1] = &EndpointIterator::`vftable'{for `CUnknown'};
        v6[4] = 0LL;
        *((_DWORD *)v6 + 10) = 0;
        v6[3] = a1;
        (*(void (__fastcall **)(struct EndpointCollection *))(*(_QWORD *)a1 + 8LL))(a1);
        EnterCriticalSection((LPCRITICAL_SECTION)(v4[3] + 72LL));
        v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IEndpointIterator **))*v4)(
               v4,
               &GUID_d4097df1_7f94_44a5_9922_1146dd4dbdaa,
               a2);
        v5 = 0;
        if ( v7 < 0 )
          v5 = v7;
      }
      else
      {
        v4 = 0LL;
        v5 = -2147024882;
      }
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v5;
}
