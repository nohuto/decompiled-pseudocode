/*
 * XREFs of sub_18001C9C0 @ 0x18001C9C0
 * Callers:
 *     sub_18001DF10 @ 0x18001DF10 (sub_18001DF10.c)
 * Callees:
 *     sub_18001B440 @ 0x18001B440 (sub_18001B440.c)
 *     sub_18001C264 @ 0x18001C264 (sub_18001C264.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18001C9C0(unsigned int a1, int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v7; // r8
  void (__fastcall *v8)(_QWORD, _QWORD, __int64, _QWORD); // rax

  if ( qword_18021F8C8 && (!a2 || (unsigned int)(a2 - 100) <= 0x31) )
    qword_18021F8C8();
  if ( *a5 )
    sub_18001C264(&byte_18020F020, a1, a4);
  v7 = (unsigned int)a5[1];
  if ( (_DWORD)v7 )
  {
    v8 = (void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_18021F8B8;
    if ( qword_18021F8B8 || (v8 = (void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_18021F8C0) != 0LL )
      v8(a1, (unsigned int)a5[2], v7, 0LL);
  }
  if ( !a5[4] )
    sub_18001B440((__int64)&byte_18020F020, (__int64)sub_180016360);
}
