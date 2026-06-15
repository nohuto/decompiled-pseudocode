/*
 * XREFs of sub_180031150 @ 0x180031150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18002B300 @ 0x18002B300 (sub_18002B300.c)
 *     sub_18002B8A0 @ 0x18002B8A0 (sub_18002B8A0.c)
 *     sub_1800328D0 @ 0x1800328D0 (sub_1800328D0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031150(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  char *v8; // rdx
  LPVOID v9; // rcx
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // r9d
  char *v13; // rdx
  bool v14; // bl
  void *v15; // rdi
  DWORD LastError; // ebx
  int v17; // eax
  void *v18; // rcx
  LPVOID v19; // rax
  LPVOID v21; // [rsp+20h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-8h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+18h]

  v21 = 0LL;
  if ( a2 == 1 )
  {
    v8 = *(char **)(a1 + 8LL * (int)a3 + 96);
    if ( !v8 )
      goto LABEL_21;
    sub_18002B8A0(&pv, v8, 0xFFFFFFFFFFFFFFFFuLL);
    sub_18002B300(&v21, &pv);
    if ( pv )
      CoTaskMemFree(pv);
    v9 = v21;
    if ( !v21 )
    {
      v10 = -2147024882;
      v11 = 188;
      v12 = -2147024882;
LABEL_20:
      sub_180003AB0(
        retaddr,
        v11,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        v12);
      v18 = v21;
      goto LABEL_22;
    }
  }
  else
  {
    if ( a2 )
      goto LABEL_21;
    v13 = *(char **)(a1 + 8LL * (int)a3 + 168);
    if ( !v13 )
      goto LABEL_21;
    sub_18002B8A0(&pv, v13, 0xFFFFFFFFFFFFFFFFuLL);
    sub_18002B300(&v21, &pv);
    if ( pv )
      CoTaskMemFree(pv);
    v9 = v21;
    if ( !v21 )
    {
      v10 = -2147024882;
      v11 = 196;
      v12 = -2147024882;
      goto LABEL_20;
    }
  }
  pv = 0LL;
  v14 = (int)MMDevAPI_23(v9, &pv) >= 0;
  if ( pv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
  if ( !v14 )
  {
    v15 = v21;
    if ( v21 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v15);
      SetLastError(LastError);
    }
    v21 = 0LL;
    v17 = sub_1800328D0(a1, a2, a3, &v21);
    v10 = v17;
    if ( v17 < 0 )
    {
      v12 = v17;
      v11 = 214;
      goto LABEL_20;
    }
  }
LABEL_21:
  v19 = v21;
  v18 = 0LL;
  v21 = 0LL;
  v10 = 0;
  *a4 = v19;
LABEL_22:
  if ( v18 )
    CoTaskMemFree(v18);
  return v10;
}
