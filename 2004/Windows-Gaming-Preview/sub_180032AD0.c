/*
 * XREFs of sub_180032AD0 @ 0x180032AD0
 * Callers:
 *     sub_18003022C @ 0x18003022C (sub_18003022C.c)
 *     sub_180030270 @ 0x180030270 (sub_180030270.c)
 * Callees:
 *     sub_180016088 @ 0x180016088 (sub_180016088.c)
 */

__int64 __fastcall sub_180032AD0(__int64 a1, HSTRING *a2, _DWORD *a3, unsigned int *a4, _QWORD *a5, _QWORD *a6)
{
  PCWSTR StringRawBuffer; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  PCWSTR v13; // r11
  unsigned int i; // eax
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 result; // rax
  _QWORD *v22; // rax
  UINT32 length; // [rsp+40h] [rbp+8h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(*a2, &length);
  v12 = 0LL;
  v13 = StringRawBuffer;
  for ( i = -2128831035; v12 < 2 * (unsigned __int64)length; i = 16777619 * v11 )
  {
    v15 = *((unsigned __int8 *)v13 + v12++);
    v11 = i ^ v15;
  }
  HIDWORD(v16) = 0;
  *a4 = i;
  LODWORD(v16) = i % *(_DWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 8);
  *a3 = v16;
  if ( v17 )
  {
    v18 = a5;
    v19 = 0LL;
    v20 = *(_QWORD *)(v17 + 8 * v16);
    *a5 = 0LL;
    while ( v20 )
    {
      if ( *(_DWORD *)(v20 + 32) == *a4 )
      {
        result = sub_180016088(v11, *(HSTRING *)v20, *a2, (bool *)&length);
        if ( (int)result < 0 )
          return result;
        if ( (_BYTE)length )
        {
          v22 = a6;
          *v18 = v19;
          *v22 = v20;
          return 0LL;
        }
      }
      v19 = v20;
      v20 = *(_QWORD *)(v20 + 24);
    }
  }
  *a6 = 0LL;
  return 0LL;
}
