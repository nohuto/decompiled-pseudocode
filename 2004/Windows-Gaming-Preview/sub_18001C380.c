/*
 * XREFs of sub_18001C380 @ 0x18001C380
 * Callers:
 *     sub_18001B010 @ 0x18001B010 (sub_18001B010.c)
 *     sub_18001B030 @ 0x18001B030 (sub_18001B030.c)
 *     sub_18001C370 @ 0x18001C370 (sub_18001C370.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001E70C @ 0x18001E70C (sub_18001E70C.c)
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 */

__int64 __fastcall sub_18001C380(__int64 a1, HSTRING a2, __int64 a3)
{
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  HRESULT v8; // eax
  __int64 v9; // r8
  int v10; // edi
  int v11; // r9d
  int v12; // edx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  HSTRING v15; // rax
  _DWORD v17[4]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING newString; // [rsp+30h] [rbp-30h] BYREF
  __int16 v19; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h]
  HSTRING string; // [rsp+50h] [rbp-10h]
  char v23; // [rsp+58h] [rbp-8h]
  char v24; // [rsp+59h] [rbp-7h]
  __int64 retaddr; // [rsp+68h] [rbp+8h]

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    while ( v6 >= 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v6 + 1, v6);
      if ( v7 == v6 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
  }
LABEL_6:
  v19 = 0;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v8 = WindowsDuplicateString(a2, &newString);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = v8;
    v12 = 407;
LABEL_17:
    sub_180003268(retaddr, v12, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v11);
    goto LABEL_18;
  }
  v20 = a1;
  v21 = a1;
  if ( a1 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    while ( v13 >= 0 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_13;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
  }
LABEL_13:
  v15 = newString;
  newString = 0LL;
  v17[2] = 0;
  string = v15;
  v23 = 0;
  v24 = HIBYTE(v19) + 1;
  LOBYTE(v19) = 1;
  v17[0] = 3;
  v17[1] = 128;
  v10 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64 *))sub_18001E70C)(v17, a3, v9, &v20);
  WindowsDeleteString(string);
  if ( v21 )
    sub_1800266E0(v21);
  if ( v10 < 0 )
  {
    v11 = v10;
    v12 = 424;
    goto LABEL_17;
  }
LABEL_18:
  WindowsDeleteString(newString);
  newString = 0LL;
  if ( a1 )
    sub_1800266E0(a1);
  return (unsigned int)v10;
}
