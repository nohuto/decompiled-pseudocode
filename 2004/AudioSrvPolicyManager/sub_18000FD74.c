/*
 * XREFs of sub_18000FD74 @ 0x18000FD74
 * Callers:
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000FEA0 @ 0x18000FEA0 (sub_18000FEA0.c)
 *     sub_18001021C @ 0x18001021C (sub_18001021C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000FD74(__int64 a1, __int64 a2, unsigned int a3, volatile signed __int32 **a4)
{
  HANDLE ProcessHeap; // rax
  LPVOID v7; // rax
  volatile signed __int32 *v8; // rbx
  int v9; // edi

  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x2A0uLL);
  if ( v7 )
    v8 = (volatile signed __int32 *)sub_18000FEA0(v7, a3);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_12:
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_180043390, v9);
    }
    sub_180005724("CApplication::CreateInstance", 209, v9);
    return (unsigned int)v9;
  }
  v9 = sub_18001021C((PVOID)v8);
  if ( v9 >= 0 )
  {
    *a4 = v8;
    v8 = 0LL;
  }
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
  }
  if ( v9 < 0 )
    goto LABEL_12;
  return (unsigned int)v9;
}
