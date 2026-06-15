/*
 * XREFs of sub_180006830 @ 0x180006830
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180014CF0 @ 0x180014CF0 (sub_180014CF0.c)
 *     sub_18001D9B4 @ 0x18001D9B4 (sub_18001D9B4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180006830(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // edx
  __int64 v8; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  v4 = sub_18001D9B4(qword_18004FE78, a2, &v11);
  v5 = v11;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( !v11 || (v4 = sub_180014CF0(v11 + 16, a3), v6 = v4, v4 >= 0) )
    {
      v6 = 0;
      goto LABEL_8;
    }
    v7 = 319;
  }
  else
  {
    v7 = 316;
  }
  sub_180003AB0(
    retaddr,
    v7,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    v4);
LABEL_8:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
  {
    v8 = v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  }
  return v6;
}
