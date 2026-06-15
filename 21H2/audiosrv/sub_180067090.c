/*
 * XREFs of sub_180067090 @ 0x180067090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_180067090()
{
  __int64 v0; // rax
  __int64 result; // rax
  _QWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v2[0] = off_180154D58;
  v2[7] = v2;
  v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 128LL))(qword_18019E678);
  result = sub_1800670EC(v0, v2);
  if ( (int)result < 0 )
    return sub_18006D26C(
             retaddr,
             4173LL,
             "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
             (unsigned int)result);
  return result;
}
