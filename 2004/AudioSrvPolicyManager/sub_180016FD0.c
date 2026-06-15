/*
 * XREFs of sub_180016FD0 @ 0x180016FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180018308 @ 0x180018308 (sub_180018308.c)
 *     sub_18002FEBC @ 0x18002FEBC (sub_18002FEBC.c)
 */

__int64 __fastcall sub_180016FD0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 *v5; // rdi
  __int64 v7; // rcx
  int v10; // r14d
  int v11; // eax
  unsigned int v12; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64 *)(a1 + 720);
  v7 = *(_QWORD *)(a1 + 720);
  v10 = a2;
  if ( !v7 )
  {
    v15 = a1 - 16;
    v11 = sub_180018308(v5, a2, &v15);
    v12 = v11;
    if ( v11 < 0 )
    {
      sub_180003AB0(
        retaddr,
        4646,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        v11);
      return v12;
    }
    v7 = *v5;
  }
  return sub_18002FEBC(v7, v10, a3, a4, a5);
}
