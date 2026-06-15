/*
 * XREFs of sub_180006900 @ 0x180006900
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18001D9B4 @ 0x18001D9B4 (sub_18001D9B4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180006900(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v10; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0;
  v10 = 0LL;
  v4 = sub_18001D9B4(qword_18004FE78, a2, &v10);
  v5 = v10;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( v10 )
      *a3 = v10[196];
    v6 = 0;
  }
  else
  {
    sub_180003AB0(
      retaddr,
      332,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v4);
  }
  if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
  {
    v7 = v10;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 32LL))(v10);
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  }
  return v6;
}
