/*
 * XREFs of sub_18002213C @ 0x18002213C
 * Callers:
 *     sub_1800220C8 @ 0x1800220C8 (sub_1800220C8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18002213C(__int64 a1, unsigned int (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  _DWORD *v9; // r10
  int v10; // eax
  unsigned int v11; // edx

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  v8 = *(_WORD *)(v3 + 4);
  if ( v8 )
  {
    do
    {
      v9 = (_DWORD *)(v4 + 12LL * v7);
      if ( *v9 )
      {
        v10 = v9[1];
        if ( (v10 & 0x300) != 0
          || (v10 & 0xC00) != 0
          || (v10 & 0x3000) != 0
          || (v10 & 0x3F000000) != 0
          || (v10 & 2) != 0 )
        {
          if ( (v10 & 1) != 0 || (v11 = 0, !v8) )
          {
LABEL_13:
            if ( !a2(v4 + 12LL * v7, a3) )
              return;
          }
          else
          {
            while ( v11 == v7 || *v9 != *(_DWORD *)(v4 + 12LL * v11) )
            {
              if ( ++v11 >= v8 )
                goto LABEL_13;
            }
          }
        }
      }
      ++v7;
      v8 = *(_WORD *)(v3 + 4);
    }
    while ( v7 < v8 );
  }
}
