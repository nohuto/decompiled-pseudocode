/*
 * XREFs of sub_180017100 @ 0x180017100
 * Callers:
 *     sub_18001EE38 @ 0x18001EE38 (sub_18001EE38.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180018308 @ 0x180018308 (sub_180018308.c)
 *     sub_1800303E8 @ 0x1800303E8 (sub_1800303E8.c)
 */

__int64 __fastcall sub_180017100(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r15
  int v6; // ebx
  __int64 *v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  __int64 *v16; // r8
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v5 = a5;
  v6 = 0;
  if ( !a5 )
    return 2147500035LL;
  v11 = (__int64 *)(a1 + 720);
  v12 = *(_QWORD *)(a1 + 720);
  if ( !v12 )
  {
    a5 = (_DWORD *)(a1 - 16);
    v13 = sub_180018308(v11, a2, &a5);
    v14 = v13;
    if ( v13 < 0 )
    {
      sub_180003AB0(
        retaddr,
        4677,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        v13);
      return v14;
    }
    v12 = *v11;
  }
  if ( !a3 )
  {
    v16 = 0LL;
    goto LABEL_10;
  }
  if ( *a3 <= 0xBu )
  {
    LODWORD(a5) = *a3;
    v16 = (__int64 *)&a5;
LABEL_10:
    v6 = sub_1800303E8(v12, a2, v16, a4);
  }
  *v5 = v6;
  return 2147500035LL;
}
