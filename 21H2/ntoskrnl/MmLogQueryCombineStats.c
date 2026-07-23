/*
 * XREFs of MmLogQueryCombineStats @ 0x1408D9D60
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140649630 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x1405A83C0 (EtwTraceSiloDcEvent.c)
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
  *((_DWORD *)a3 + 1) = dword_140C52870;
  *((_QWORD *)a3 + 1) = qword_140C52858 + qword_140C52860;
  *((_QWORD *)a3 + 2) = qword_140C52868;
  v6 = dword_140C52874;
  *((_DWORD *)a3 + 6) = dword_140C52874;
  v7 = dword_140C52878;
  v8 = v6 <= dword_140C52878;
  *((_DWORD *)a3 + 7) = dword_140C52878;
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
      EtwTraceKernelEvent((int)&v10, 1, 0x20080000u, 636, 4200450);
    }
  }
}
