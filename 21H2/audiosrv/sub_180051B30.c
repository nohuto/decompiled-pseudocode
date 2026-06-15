/*
 * XREFs of sub_180051B30 @ 0x180051B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

ULONGLONG __fastcall sub_180051B30(__int64 a1, __int64 a2)
{
  ULONGLONG result; // rax
  int v5; // edi
  int v6; // ebx
  char v7; // al

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 208LL))(a2)
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2), (_BYTE)result) )
  {
    v5 = -((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2) != 0);
    v6 = -((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 208LL))(a2) != 0);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
    *(_DWORD *)(a1 + 84) += v6;
    *(_DWORD *)(a1 + 88) -= v7 != 0;
    *(_DWORD *)(a1 + 92) += v5;
    result = GetTickCount64();
    *(_QWORD *)(a1 + 96) = result;
  }
  --*(_DWORD *)(a1 + 80);
  return result;
}
