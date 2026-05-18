/*
 * XREFs of sub_180021558 @ 0x180021558
 * Callers:
 *     sub_180021364 @ 0x180021364 (sub_180021364.c)
 * Callees:
 *     sub_1800220C8 @ 0x1800220C8 (sub_1800220C8.c)
 *     sub_1800223C0 @ 0x1800223C0 (sub_1800223C0.c)
 *     sub_18002283C @ 0x18002283C (sub_18002283C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180021558(int a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v8; // edi
  HANDLE ProcessHeap; // rax
  _BYTE v11[56]; // [rsp+30h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-120h]
  int v13; // [rsp+80h] [rbp-108h]
  char v14; // [rsp+90h] [rbp-F8h] BYREF

  v8 = 0;
  if ( !(unsigned int)sub_1800223C0((unsigned int)v11, a1, 200, (unsigned int)&v14, 0) )
  {
    v8 = sub_18002283C(v11, a2, a3, a4);
    if ( a5 )
      *a5 |= sub_1800220C8(v11);
    if ( v13 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  return v8;
}
