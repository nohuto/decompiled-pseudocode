/*
 * XREFs of sub_180044E50 @ 0x180044E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

ULONGLONG __fastcall sub_180044E50(__int64 a1, __int64 a2)
{
  int v4; // ebp
  ULONGLONG result; // rax
  int v6; // edi
  int v7; // ebx

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 208LL))(a2)
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2), (_BYTE)result) )
  {
    v6 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2) != 0;
    v7 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 208LL))(a2) != 0;
    LOBYTE(v4) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2) != 0;
    *(_DWORD *)(a1 + 84) += v7;
    *(_DWORD *)(a1 + 88) += v4;
    *(_DWORD *)(a1 + 92) += v6;
    result = GetTickCount64();
    *(_QWORD *)(a1 + 96) = result;
  }
  ++*(_DWORD *)(a1 + 80);
  return result;
}
