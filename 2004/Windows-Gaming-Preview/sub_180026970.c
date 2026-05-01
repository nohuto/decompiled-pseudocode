/*
 * XREFs of sub_180026970 @ 0x180026970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001003C @ 0x18001003C (sub_18001003C.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026970(__int64 a1, __int64 a2)
{
  __int64 *v4; // r8
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // r9d
  int v8; // edx
  HRESULT v9; // eax
  int v10; // eax
  IUnknown *v11; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  IUnknown *pUnk; // [rsp+30h] [rbp+8h] BYREF

  pUnk = 0LL;
  v4 = sub_18001003C((__int64 *)&pUnk);
  *v4 = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 )
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v5 + 24LL))(
             v5,
             &xmmword_180050E58,
             v4);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147467259;
  }
  if ( v6 < 0 )
  {
    v7 = v6;
    v8 = 70;
LABEL_12:
    sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v7);
    goto LABEL_13;
  }
  v9 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v9 < 0 )
    sub_180012300(retaddr, 77, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
  v10 = ((__int64 (__fastcall *)(IUnknown *, __int64))pUnk->lpVtbl[2].AddRef)(pUnk, a2);
  v6 = v10;
  if ( v10 < 0 )
  {
    v7 = v10;
    v8 = 79;
    goto LABEL_12;
  }
LABEL_13:
  v11 = pUnk;
  if ( pUnk )
  {
    pUnk = 0LL;
    ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
  }
  return (unsigned int)v6;
}
