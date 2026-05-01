/*
 * XREFs of sub_1800431A0 @ 0x1800431A0
 * Callers:
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 * Callees:
 *     sub_180004C18 @ 0x180004C18 (sub_180004C18.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180043230 @ 0x180043230 (sub_180043230.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_1800431A0(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS v5; // edi
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  NTSTATUS v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)(a1 + 216) = a3;
  v5 = sub_180004C18(a2, 1u, (PHANDLE)(a1 + 32));
  if ( v5 >= 0 )
  {
    v5 = sub_180043230((LPVOID)(a1 + 40));
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a1 + 224) &= ~2u;
      *(_DWORD *)(a1 + 224) |= 1u;
      v5 = 0;
    }
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v11 = a3;
    v10 = v5;
    sub_180063424(v6, (unsigned int)&unk_18009CDD7, v7, v8, (__int64)&v10, (__int64)&v11);
  }
  return (unsigned int)v5;
}
