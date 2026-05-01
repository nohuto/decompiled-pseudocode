/*
 * XREFs of sub_1800283F4 @ 0x1800283F4
 * Callers:
 *     sub_1800273AC @ 0x1800273AC (sub_1800273AC.c)
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180016970 @ 0x180016970 (sub_180016970.c)
 *     sub_1800389C0 @ 0x1800389C0 (sub_1800389C0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800283F4(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  HSTRING *v11; // rbx
  HSTRING v12; // rcx
  int v13; // eax
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+48h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v18 = v2;
  v3 = *(_QWORD *)(a1 + 256);
  if ( !v3 || !*(_QWORD *)(a1 + 240) )
  {
    v9 = *(_QWORD *)(a1 + 280);
    if ( v9 && *(_QWORD *)(a1 + 288) )
    {
      v15 = xmmword_180052B50;
      v10 = sub_1800389C0(v9, &v15);
      v11 = (HSTRING *)(a1 + 160);
      v12 = *v11;
      if ( *(_DWORD *)(v10 + 20) == 2 )
      {
        WindowsDeleteString(v12);
        *v11 = 0LL;
        v13 = sub_180016970(v10, v11);
        v7 = v13;
        if ( v13 < 0 )
        {
          sub_180003268(retaddr, 460, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v13);
          goto LABEL_17;
        }
      }
      else
      {
        WindowsDeleteString(v12);
        *v11 = 0LL;
      }
    }
LABEL_21:
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 104LL))(v3, &v17);
  if ( v4 < 0 )
  {
    sub_180012300(retaddr, 447, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v4);
    goto LABEL_5;
  }
  v5 = v17;
  if ( !v17 )
  {
LABEL_6:
    if ( v5 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    goto LABEL_21;
  }
  WindowsDeleteString(*(HSTRING *)(a1 + 160));
  *(_QWORD *)(a1 + 160) = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, a1 + 160);
  v7 = v6;
  if ( v6 >= 0 )
  {
LABEL_5:
    v5 = v17;
    goto LABEL_6;
  }
  sub_180003268(retaddr, 449, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v6);
  v8 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_17:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
