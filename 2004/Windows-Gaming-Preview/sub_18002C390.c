/*
 * XREFs of sub_18002C390 @ 0x18002C390
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_18002E5F4 @ 0x18002E5F4 (sub_18002E5F4.c)
 */

__int64 __fastcall sub_18002C390(__int64 a1, HSTRING a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  int v7; // edx
  HRESULT v9; // eax
  __int64 v10; // r8
  int v11; // edi
  __int64 v12; // rbx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  HSTRING v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  _DWORD v18[4]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v20; // [rsp+38h] [rbp-18h]
  HSTRING v21; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+68h] [rbp+18h]
  HSTRING newString; // [rsp+80h] [rbp+30h] BYREF

  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1589;
LABEL_3:
    sub_180003268(retaddr, v7, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v6);
    return v6;
  }
  *a3 = 0LL;
  if ( WindowsGetStringLen(a2) >= 0x104 )
  {
    v6 = -2147024809;
    v7 = 1593;
    goto LABEL_3;
  }
  WindowsDeleteString(0LL);
  newString = 0LL;
  v9 = WindowsDuplicateString(a2, &newString);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = a1 - 16;
    if ( a1 != 16 )
    {
      v13 = *(_QWORD *)(v12 + 136);
      while ( v13 >= 0 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 136), v13 + 1, v13);
        if ( v14 == v13 )
          goto LABEL_13;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
    }
LABEL_13:
    v15 = newString;
    newString = 0LL;
    v19 = a1 - 16;
    v20 = (volatile signed __int64 *)(a1 - 16);
    if ( a1 != 16 )
    {
      v16 = *(_QWORD *)(v12 + 136);
      while ( v16 >= 0 )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 136), v16 + 1, v16);
        if ( v17 == v16 )
          goto LABEL_18;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
    }
LABEL_18:
    v18[2] = 0;
    v21 = v15;
    v18[0] = 3;
    v18[1] = 128;
    v11 = ((__int64 (__fastcall *)(_DWORD *, _QWORD *, __int64, __int64 *))sub_18002E5F4)(v18, a3, v10, &v19);
    if ( v20 )
      sub_1800120A0(v20);
    if ( v11 < 0 )
      sub_180003268(retaddr, 1616, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v11);
    if ( a1 != 16 )
      sub_1800120A0((volatile signed __int64 *)(a1 - 16));
  }
  else
  {
    sub_180003268(retaddr, 1596, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
  }
  WindowsDeleteString(newString);
  return (unsigned int)v11;
}
