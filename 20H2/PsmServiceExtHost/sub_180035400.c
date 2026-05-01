/*
 * XREFs of sub_180035400 @ 0x180035400
 * Callers:
 *     <none>
 * Callees:
 *     sub_180076DB0 @ 0x180076DB0 (sub_180076DB0.c)
 */

__int64 __fastcall sub_180035400(__int64 a1, void *a2, int a3, int a4)
{
  BOOL v6; // edi
  unsigned int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // rcx
  BOOL v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  BOOL v16; // [rsp+88h] [rbp+20h] BYREF

  v6 = a4 != 0;
  v16 = v6;
  v7 = NtSetInformationProcess(a2, ProcessImageFileName|0x40, &v16, 4u);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 )
  {
    v11 = qword_1800B3230 & 0x40;
    if ( v11 == qword_1800B3230 )
    {
      v15 = *(_QWORD *)(a1 + 32);
      v12 = v6;
      v13 = a3;
      v14 = v7;
      sub_180076DB0(
        v11,
        (unsigned int)&unk_18009EE34,
        v8,
        v9,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
  return v7;
}
