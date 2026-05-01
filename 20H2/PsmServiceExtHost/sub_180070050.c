/*
 * XREFs of sub_180070050 @ 0x180070050
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18006D92C @ 0x18006D92C (sub_18006D92C.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

char __fastcall sub_180070050(__int64 a1, __int64 a2)
{
  char *v3; // rdi
  NTSTATUS v4; // eax
  NTSTATUS v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v10[10]; // [rsp+40h] [rbp-28h] BYREF
  char v11; // [rsp+78h] [rbp+10h] BYREF
  char v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v3 = (char *)(a2 + 168);
  v4 = NtSetInformationProcess(*(HANDLE *)(a2 + 40), ProcessPriorityClass, (PVOID)(a2 + 168), 2u);
  v5 = v4;
  if ( v4 < 0 )
    LOBYTE(v4) = sub_180085678();
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    LOBYTE(v4) = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( (_BYTE)v4 )
    {
      v11 = *(_BYTE *)(a2 + 169);
      v12 = *v3;
      v13 = *(_DWORD *)(a2 + 108);
      v10[0] = v5;
      LOBYTE(v4) = sub_18006D92C(v6, byte_18009CA2E, v7, v8, (__int64)v10, (__int64)&v13, (__int64)&v12, (__int64)&v11);
    }
  }
  return v4;
}
