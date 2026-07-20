/*
 * XREFs of _tlgEnableCallback @ 0x140001170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14000EFC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall tlgEnableCallback(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax
  void (__fastcall *v8)(__int64); // rax

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( a3 )
          v7 = a3 + 1;
        else
          v7 = 256;
        *(_DWORD *)a7 = v7;
        *(_QWORD *)(a7 + 16) = a4;
        *(_QWORD *)(a7 + 24) = a5;
      }
    }
    else
    {
      *(_DWORD *)a7 = 0;
    }
    v8 = *(void (__fastcall **)(__int64))(a7 + 40);
    if ( v8 )
      v8(a1);
  }
}
