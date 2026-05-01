/*
 * XREFs of sub_18002777C @ 0x18002777C
 * Callers:
 *     sub_18000F2A0 @ 0x18000F2A0 (sub_18000F2A0.c)
 * Callees:
 *     sub_180011B00 @ 0x180011B00 (sub_180011B00.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002777C(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdi
  volatile signed __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a1 = off_180048CD0;
  *(_QWORD *)(a1 + 8) = off_180048CB0;
  *(_QWORD *)(a1 + 16) = off_180048C40;
  *(_QWORD *)(a1 + 24) = off_180048BE0;
  *(_QWORD *)(a1 + 32) = off_180048B80;
  *(_QWORD *)(a1 + 40) = off_180048B68;
  *(_QWORD *)(a1 + 48) = off_180048B50;
  *(_QWORD *)(a1 + 96) = off_180048B08;
  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 )
  {
    if ( *(_QWORD *)(a1 + 264) )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 160LL))(v2, *(_QWORD *)(a1 + 264));
      if ( v3 < 0 )
        sub_180012300(retaddr, 282, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v3);
    }
  }
  v4 = *(_QWORD *)(a1 + 304);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 304) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(volatile signed __int32 **)(a1 + 296);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int64 **)(a1 + 280);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 280) = 0LL;
    sub_180011B00(v6);
  }
  v7 = *(_QWORD *)(a1 + 272);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 272) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *(_QWORD *)(a1 + 256);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 256) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *(_QWORD *)(a1 + 248);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 248) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  WindowsDeleteString(*(HSTRING *)(a1 + 240));
  *(_QWORD *)(a1 + 240) = 0LL;
  WindowsDeleteString(*(HSTRING *)(a1 + 232));
  *(_QWORD *)(a1 + 232) = 0LL;
  v10 = *(_QWORD *)(a1 + 224);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 224) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *(_QWORD *)(a1 + 216);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 216) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *(_QWORD *)(a1 + 208);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 208) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  WindowsDeleteString(*(HSTRING *)(a1 + 160));
  *(_QWORD *)(a1 + 160) = 0LL;
  WindowsDeleteString(*(HSTRING *)(a1 + 152));
  *(_QWORD *)(a1 + 152) = 0LL;
  return sub_180012000((_QWORD *)a1);
}
