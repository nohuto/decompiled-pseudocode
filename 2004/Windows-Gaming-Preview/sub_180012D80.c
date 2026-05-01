/*
 * XREFs of sub_180012D80 @ 0x180012D80
 * Callers:
 *     sub_180012A28 @ 0x180012A28 (sub_180012A28.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180045700 @ 0x180045700 (sub_180045700.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180012D80(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  HSTRING v6; // rcx
  PCWSTR StringRawBuffer; // rax
  int v8; // eax
  unsigned int v9; // edi
  int v10; // edx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, void *, _QWORD *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, void *, _QWORD *); // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 80);
  if ( !*(_QWORD *)(a1 + 80) )
  {
    if ( !(unsigned __int8)sub_180045700() )
    {
      sub_180003268(
        retaddr,
        295,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        -2147467263);
      return 2147500033LL;
    }
    v6 = *(HSTRING *)(a1 + 72);
    v17 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    v8 = CreateStorageItemFromPath_FullTrustCaller(StringRawBuffer, 0LL, &unk_180051020, &v17);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 308;
LABEL_10:
      sub_180003268(
        retaddr,
        v10,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        v8);
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v12)[2])(v12);
      }
      return v9;
    }
    v11 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v8 = (**v17)(v17, &unk_180050E48, v2);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 310;
      goto LABEL_10;
    }
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v13)[2])(v13);
    }
  }
  v14 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *v2;
  if ( *v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v15 = *v2;
  }
  *a2 = v15;
  return 0LL;
}
