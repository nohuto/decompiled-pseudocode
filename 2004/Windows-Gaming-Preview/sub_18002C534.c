/*
 * XREFs of sub_18002C534 @ 0x18002C534
 * Callers:
 *     sub_1800313B0 @ 0x1800313B0 (sub_1800313B0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180028DE8 @ 0x180028DE8 (sub_180028DE8.c)
 *     sub_18002A4F4 @ 0x18002A4F4 (sub_18002A4F4.c)
 *     sub_1800391C0 @ 0x1800391C0 (sub_1800391C0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002C534(__int64 *a1, HSTRING a2)
{
  HSTRING v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  HSTRING *v6; // r14
  int v7; // ebx
  __int64 v9; // rcx
  HRESULT v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  HSTRING v16; // rbx
  __int64 retaddr; // [rsp+68h] [rbp+30h]
  __int64 v18; // [rsp+70h] [rbp+38h] BYREF
  HSTRING string; // [rsp+78h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+80h] [rbp+48h]
  __int64 v21; // [rsp+88h] [rbp+50h]

  string = a2;
  v3 = (HSTRING)a1[2];
  WindowsDeleteString(0LL);
  v4 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 168);
  EnterCriticalSection(v4);
  v20 = v4;
  string = v3;
  v21 = 0LL;
  v5 = *a1;
  v6 = (HSTRING *)(v5 + 152);
  if ( sub_180028DE8((HSTRING *)(v5 + 152), &string, 0) )
  {
    WindowsDeleteString(string);
LABEL_3:
    if ( v4 )
      LeaveCriticalSection(v4);
    v7 = 0;
    goto LABEL_6;
  }
  v9 = *(_QWORD *)(v5 + 280);
  if ( v9 )
  {
    if ( *(_QWORD *)(v5 + 288) )
    {
      v10 = sub_1800391C0(v9, 15LL, &string);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 1629;
LABEL_11:
        sub_180003268(retaddr, v11, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v10);
LABEL_12:
        WindowsDeleteString(string);
        goto LABEL_29;
      }
    }
  }
  if ( *(_QWORD *)(v5 + 256) && *(_QWORD *)(v5 + 240) )
  {
    v18 = 0LL;
    v12 = sub_18002A4F4(v5, (__int64)&v18);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = 1636;
      goto LABEL_17;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v18 + 72LL))(v18, string);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = 1637;
LABEL_17:
      sub_180003268(retaddr, v13, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v12);
      v14 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      goto LABEL_12;
    }
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v16 = string;
  if ( !string || string != *v6 )
  {
    WindowsDeleteString(*v6);
    *v6 = 0LL;
    v10 = WindowsDuplicateString(v16, (HSTRING *)(v5 + 152));
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 1640;
      goto LABEL_11;
    }
    v16 = string;
  }
  WindowsDeleteString(v16);
  v7 = 0;
LABEL_29:
  if ( v7 >= 0 )
    goto LABEL_3;
  sub_180003268(retaddr, 1616, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v7);
  if ( v4 )
    LeaveCriticalSection(v4);
LABEL_6:
  WindowsDeleteString(0LL);
  return (unsigned int)v7;
}
