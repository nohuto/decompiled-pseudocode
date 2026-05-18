/*
 * XREFs of sub_180021624 @ 0x180021624
 * Callers:
 *     sub_180020140 @ 0x180020140 (sub_180020140.c)
 * Callees:
 *     sub_18002220C @ 0x18002220C (sub_18002220C.c)
 *     sub_1800223C0 @ 0x1800223C0 (sub_1800223C0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180021624(unsigned int a1, unsigned __int16 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  HANDLE ProcessHeap; // rax
  _BYTE v9[56]; // [rsp+30h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-120h]
  int v11; // [rsp+80h] [rbp-108h]
  char v12; // [rsp+90h] [rbp-F8h] BYREF

  v6 = sub_1800223C0((unsigned int)v9, 0, 200, (unsigned int)&v12, 0);
  if ( !v6 )
  {
    v6 = sub_18002220C(v9, a1, a2, a3);
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  return v6;
}
