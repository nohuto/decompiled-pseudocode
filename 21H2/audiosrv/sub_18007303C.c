/*
 * XREFs of sub_18007303C @ 0x18007303C
 * Callers:
 *     sub_180072E88 @ 0x180072E88 (sub_180072E88.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18007303C(__int64 a1)
{
  HSTRING v2; // rcx
  HSTRING v3; // rcx
  void *v4; // rcx
  __int64 v5; // rdi
  void **v6; // rcx
  __int64 v7; // rdx

  v2 = **(HSTRING **)a1;
  if ( v2 )
  {
    WindowsDeleteString(v2);
    **(_QWORD **)a1 = 0LL;
  }
  v3 = **(HSTRING **)(a1 + 8);
  if ( v3 )
  {
    WindowsDeleteString(v3);
    **(_QWORD **)(a1 + 8) = 0LL;
  }
  v4 = **(void ***)(a1 + 16);
  if ( v4 )
  {
    v5 = 0LL;
    if ( **(_DWORD **)(a1 + 24) )
    {
      do
      {
        v6 = *(void ***)(a1 + 16);
        v7 = *((_QWORD *)*v6 + v5);
        if ( v7 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)*v6 + v5));
          *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * v5) = 0LL;
          v6 = *(void ***)(a1 + 16);
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < **(_DWORD **)(a1 + 24) );
      v4 = *v6;
    }
    CoTaskMemFree(v4);
  }
}
