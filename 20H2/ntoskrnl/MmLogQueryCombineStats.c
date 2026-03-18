/*
 * XREFs of MmLogQueryCombineStats @ 0x1408DC440
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14060B800 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x14078D08C (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x1405A6760 (EtwTraceSiloDcEvent.c)
 */

void __fastcall MmLogQueryCombineStats(__int64 a1, unsigned int *a2, _OWORD *a3)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  bool v8; // cc
  unsigned int v9; // r9d
  _OWORD *v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+38h] [rbp-38h]
  int v12; // [rsp+3Ch] [rbp-34h]
  _OWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( a3 )
  {
    v5 = *(_DWORD *)a3;
  }
  else
  {
    a3 = v13;
    v5 = 0;
  }
  *(_DWORD *)a3 = v5 & 0xFFFFFFC0 | 1;
  *((_DWORD *)a3 + 1) = dword_140C526B0;
  *((_QWORD *)a3 + 1) = qword_140C52698 + qword_140C526A0;
  *((_QWORD *)a3 + 2) = qword_140C526A8;
  v6 = dword_140C526B4;
  *((_DWORD *)a3 + 6) = dword_140C526B4;
  v7 = dword_140C526B8;
  v8 = v6 <= dword_140C526B8;
  *((_DWORD *)a3 + 7) = dword_140C526B8;
  if ( !v8 )
    v6 = v7;
  *((_DWORD *)a3 + 6) = v6;
  if ( a3 == v13 )
  {
    if ( a1 && a2 )
    {
      v12 = 0;
      v10 = a3;
      v9 = *a2;
      v11 = 32;
      EtwTraceSiloDcEvent((__int64)&v10, 1u, a1, v9, 0x27Cu, 0x401802u);
    }
    else
    {
      v12 = 0;
      v10 = a3;
      v11 = 32;
      EtwTraceKernelEvent((__int64)&v10, 1u, 0x20080000u, 0x27Cu, 0x401802u);
    }
  }
}
