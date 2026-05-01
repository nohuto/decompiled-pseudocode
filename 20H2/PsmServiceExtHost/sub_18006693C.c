/*
 * XREFs of sub_18006693C @ 0x18006693C
 * Callers:
 *     sub_180039A90 @ 0x180039A90 (sub_180039A90.c)
 * Callees:
 *     sub_18003A5D0 @ 0x18003A5D0 (sub_18003A5D0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180066C9C @ 0x180066C9C (sub_180066C9C.c)
 */

__int64 __fastcall sub_18006693C(unsigned int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  HANDLE ProcessHeap; // rax
  _BYTE v9[56]; // [rsp+30h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-120h]
  int v11; // [rsp+80h] [rbp-108h]
  _BYTE v12[208]; // [rsp+90h] [rbp-F8h] BYREF

  v5 = a3;
  v6 = sub_18003A5D0((__int64)v9, 0, a3, (__int64)v12);
  if ( !v6 )
  {
    v6 = sub_180066C9C(v9, a1, a2, v5);
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  return v6;
}
