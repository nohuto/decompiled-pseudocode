/*
 * XREFs of RtlInitCodePageTable @ 0x1800E5550
 * Callers:
 *     RtlInitNlsTables @ 0x1800E5650 (RtlInitNlsTables.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitCodePageTable(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 v3; // ax
  __int64 v4; // r8
  unsigned __int16 v5; // r11
  unsigned __int16 *v6; // rax
  _WORD *v7; // r8
  __int16 v8; // ax

  v2 = 0LL;
  if ( !a1 || (v3 = a1[1], v3 == 0xFDE9) )
  {
    *(_DWORD *)a2 = 327145;
    *(_DWORD *)(a2 + 4) = -196545;
    *(_DWORD *)(a2 + 8) = 4128831;
    *(_WORD *)(a2 + 12) = 0;
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  else
  {
    v4 = *a1;
    v5 = *a1 + a1[v4];
    *(_WORD *)a2 = v3;
    *(_WORD *)(a2 + 2) = a1[2];
    *(_WORD *)(a2 + 4) = a1[3];
    *(_WORD *)(a2 + 6) = a1[4];
    *(_WORD *)(a2 + 8) = a1[5];
    *(_WORD *)(a2 + 10) = a1[6];
    *(_QWORD *)(a2 + 14) = *(_QWORD *)(a1 + 7);
    *(_DWORD *)(a2 + 22) = *(_DWORD *)(a1 + 11);
    v6 = &a1[v4 + 1];
    *(_QWORD *)(a2 + 32) = v6;
    v7 = (unsigned __int16 *)((char *)v6 + (v6[256] != 0 ? 514LL : 2LL) + 512);
    *(_QWORD *)(a2 + 48) = v7;
    if ( *v7 )
    {
      v8 = 1;
      v2 = v7 + 1;
    }
    else
    {
      v8 = 0;
    }
    *(_QWORD *)(a2 + 56) = v2;
    *(_WORD *)(a2 + 12) = v8;
    v2 = &a1[v5 + 1];
  }
  *(_QWORD *)(a2 + 40) = v2;
}
