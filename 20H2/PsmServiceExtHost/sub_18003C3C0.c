/*
 * XREFs of sub_18003C3C0 @ 0x18003C3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18003E1B0 @ 0x18003E1B0 (sub_18003E1B0.c)
 *     sub_18003E324 @ 0x18003E324 (sub_18003E324.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 */

__int64 __fastcall sub_18003C3C0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  int v4; // edi
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1 + 40;
  v4 = sub_18003E324(*a2);
  v5 = sub_18003E324(*(unsigned int *)(v3 + 4));
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v10 = v5;
    v11 = v4;
    sub_1800624C0(v6, (unsigned int)&unk_18009E29B, v7, v8, (__int64)&v11, (__int64)&v10);
  }
  if ( v4 )
  {
    if ( !v5 )
    {
      TpSetTimer(*(_QWORD *)(v2 + 64), 0LL, 0LL, 0LL);
      TpWaitForTimer(*(_QWORD *)(v2 + 64), 1LL);
      return 0LL;
    }
  }
  else if ( !v5 )
  {
    return 0LL;
  }
  if ( v5 != v4 )
    sub_18003E1B0(v2, v5, 4LL);
  return 0LL;
}
