/*
 * XREFs of sub_18000C714 @ 0x18000C714
 * Callers:
 *     sub_18000E598 @ 0x18000E598 (sub_18000E598.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_18000C714(__int64 a1, char a2)
{
  _WORD *v2; // rdi
  bool v4; // zf
  HANDLE ProcessHeap; // rax
  _WORD *v6; // rbx
  HANDLE v7; // rax
  _WORD *v8; // rax

  v2 = *(_WORD **)(a1 + 24);
  v4 = v2 == 0LL;
  if ( !v2 )
  {
    if ( a2 )
    {
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
      v2 = v6;
      if ( qword_180218428 )
      {
        v7 = GetProcessHeap();
        ((void (__fastcall *)(HANDLE, _WORD *))qword_180218428)(v7, v6);
      }
      *(_QWORD *)(a1 + 24) = v6;
      if ( v6 )
      {
        v8 = v6 + 200;
        *(_DWORD *)(a1 + 32) = 5;
        do
        {
          *v6 = 80;
          v6 += 40;
        }
        while ( v6 != v8 );
        v2 = *(_WORD **)(a1 + 24);
      }
    }
    v4 = v2 == 0LL;
  }
  return !v4;
}
