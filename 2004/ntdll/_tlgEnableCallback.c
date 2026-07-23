/*
 * XREFs of _tlgEnableCallback @ 0x180083270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall tlgEnableCallback(
        LPCGUID a1,
        int a2,
        unsigned __int8 a3,
        __int64 a4,
        ULONGLONG a5,
        PEVENT_FILTER_DESCRIPTOR a6,
        _QWORD *a7)
{
  int v7; // eax
  void (__fastcall *v8)(LPCGUID); // rax

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
        a7[2] = a4;
        a7[3] = a5;
      }
    }
    else
    {
      *(_DWORD *)a7 = 0;
    }
    v8 = (void (__fastcall *)(LPCGUID))a7[5];
    if ( v8 )
      v8(a1);
  }
}
