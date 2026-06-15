/*
 * XREFs of sub_180037EF0 @ 0x180037EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180037EF0(__int64 a1, __int64 a2, int a3, __int64 *a4, _QWORD *a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v11[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
         pv,
         a2,
         0LL,
         0LL,
         v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 2093LL;
  }
  else
  {
    v7 = sub_180021660(v11[0], a3, a4, a5);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      goto LABEL_4;
    }
    v10 = 2095LL;
  }
  sub_18004BD84(retaddr, v10, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v7);
LABEL_4:
  if ( v11[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  return v8;
}
