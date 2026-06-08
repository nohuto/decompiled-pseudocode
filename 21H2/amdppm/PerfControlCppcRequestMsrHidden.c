/*
 * XREFs of PerfControlCppcRequestMsrHidden @ 0x1C0002400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlCppcRequestMsrHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v5; // ecx
  unsigned int v6; // edx
  char v7; // r8
  unsigned int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a3 || a4 )
  {
    if ( *(_BYTE *)(a1 + 94) )
    {
      v5 = (unsigned __int8)*(_DWORD *)(a1 + 32) << 8;
      v6 = v5;
    }
    else
    {
      v5 = 0;
      v6 = 0;
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      v5 = v6 | (unsigned __int8)*(_DWORD *)(a1 + 32);
      v6 = v5;
    }
    v7 = *(_BYTE *)(a1 + 96);
    if ( v7 )
      v5 = v6 | 0xFF000000;
    v8 = v6 | 0xFF000000;
    if ( !v7 )
      v8 = v6;
    if ( *(_BYTE *)(a1 + 93) )
      v5 = v8;
    v9 = v5;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C00146F0)(
      *(unsigned int *)(*(_QWORD *)a1 + 84LL),
      *(unsigned int *)(a1 + 124),
      ~*(_QWORD *)(a1 + 144),
      v5);
    *(_QWORD *)(a1 + 136) = v9;
  }
}
