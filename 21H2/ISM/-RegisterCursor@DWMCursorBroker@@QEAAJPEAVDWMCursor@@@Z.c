/*
 * XREFs of ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18002324C
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180021D80 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@?$unordered_map@UCursorId@@PEAVDWMCursor@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@_N@1@AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x180024498 (--$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@-$unordered_map@UCursorId@@PEAVDWMCursor@@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18019BB84 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 */

__int64 __fastcall DWMCursorBroker::RegisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  __int64 v3; // rcx
  __int64 appended; // rax
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r11
  _QWORD *i; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  _QWORD *v14; // rdi
  _QWORD *v16; // rdx
  int v17[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v19; // [rsp+40h] [rbp+8h] BYREF
  struct DWMCursor *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  (*(void (__fastcall **)(struct DWMCursor *, int *))(*(_QWORD *)a2 + 40LL))(a2, &v19);
  appended = std::_Fnv1a_append_bytes(v3, (const unsigned __int8 *const)&v19, 4uLL);
  v5 = *((_QWORD *)this + 9);
  v6 = *((_QWORD *)this + 7);
  v7 = 2 * (*((_QWORD *)this + 12) & appended);
  for ( i = *(_QWORD **)(v5 + 16 * (*((_QWORD *)this + 12) & appended)); ; i = (_QWORD *)*i )
  {
    v9 = i;
    if ( *(_QWORD *)(v5 + 8 * v7) == v6 )
      v10 = (_QWORD *)*((_QWORD *)this + 7);
    else
      v10 = **(_QWORD ***)(v5 + 8 * v7 + 8);
    if ( i == v10 )
      goto LABEL_5;
    if ( *((_DWORD *)i + 4) == v19 )
      break;
  }
  v11 = i;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v5 + 8 * v7) == v6 ? (_QWORD *)*((_QWORD *)this + 7) : **(_QWORD ***)(v5 + 8 * v7 + 8);
    if ( i == v16 || v19 != *((_DWORD *)i + 4) )
      break;
    i = (_QWORD *)*i;
  }
  if ( v9 == i )
  {
LABEL_5:
    v11 = (_QWORD *)*((_QWORD *)this + 7);
    i = v11;
  }
  v12 = 0LL;
  while ( v11 != i )
  {
    v11 = (_QWORD *)*v11;
    ++v12;
  }
  if ( v12 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL,
      v17[0]);
    __debugbreak();
  }
  std::unordered_map<CursorId,DWMCursor *,CursorIdHash,std::equal_to<CursorId>,std::allocator<std::pair<CursorId const,DWMCursor *>>>::_Insert_or_assign<CursorId const &,DWMCursor * &>(
    (char *)this + 48,
    v17,
    &v19,
    &v20);
  v13 = 0;
  v14 = (_QWORD *)((char *)this + 216);
  do
  {
    if ( *v14 )
      DWMCursorBroker::CreateMotionTransformAndVerifySend(this, v20, v13);
    ++v13;
    v14 += 3;
  }
  while ( v13 < 0xA );
  return 0LL;
}
