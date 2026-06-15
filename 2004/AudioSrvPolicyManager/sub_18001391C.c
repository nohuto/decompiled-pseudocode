/*
 * XREFs of sub_18001391C @ 0x18001391C
 * Callers:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180013B34 @ 0x180013B34 (sub_180013B34.c)
 *     sub_180013E44 @ 0x180013E44 (sub_180013E44.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001391C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        char a18,
        int a19,
        int a20,
        volatile signed __int32 **a21)
{
  HANDLE ProcessHeap; // rax
  LPVOID v23; // rax
  volatile signed __int32 *v24; // rbx
  int v25; // edi

  ProcessHeap = GetProcessHeap();
  v23 = HeapAlloc(ProcessHeap, 0, 0x338uLL);
  if ( v23 )
    v24 = (volatile signed __int32 *)sub_180013B34(v23);
  else
    v24 = 0LL;
  if ( !v24 )
  {
    v25 = -2147024882;
LABEL_12:
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x28u, &stru_180043390, v25);
    }
    sub_180005724("CProcess::CreateInstance", 2722, v25);
    return (unsigned int)v25;
  }
  v25 = sub_180013E44((PVOID)v24, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
  if ( v25 >= 0 )
  {
    *a21 = v24;
    v24 = 0LL;
  }
  if ( v24 && _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 32LL))(v24);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v24 + 24LL))(v24, 1LL);
  }
  if ( v25 < 0 )
    goto LABEL_12;
  return (unsigned int)v25;
}
