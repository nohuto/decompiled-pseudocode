/*
 * XREFs of sub_180025B2C @ 0x180025B2C
 * Callers:
 *     sub_180023908 @ 0x180023908 (sub_180023908.c)
 *     sub_180023A24 @ 0x180023A24 (sub_180023A24.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025B2C(_QWORD *a1, const IID *a2, LPVOID *a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v9; // rcx

  *a3 = 0LL;
  v4 = *a1;
  v6 = -2147467259;
  if ( *a1 )
  {
    if ( *(_DWORD *)(v4 + 24) == 2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*a1);
    else
      *a1 = 0LL;
    *a3 = 0LL;
    if ( *(_DWORD *)(v4 + 24) == 2 )
    {
      if ( !*(_QWORD *)(v4 + 32) )
      {
        v6 = -2147024809;
        goto LABEL_13;
      }
      v7 = *(_QWORD *)(v4 + 32);
      if ( !v7 )
      {
        v6 = 0;
LABEL_13:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        return v6;
      }
      InterfaceAndReleaseStream = (*(__int64 (__fastcall **)(__int64, const IID *, LPVOID *))(*(_QWORD *)v7 + 24LL))(
                                    v7,
                                    a2,
                                    a3);
    }
    else
    {
      v9 = *(IStream **)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v9, a2, a3);
    }
    v6 = InterfaceAndReleaseStream;
    goto LABEL_13;
  }
  return v6;
}
