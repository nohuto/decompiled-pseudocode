/*
 * XREFs of sub_18003F290 @ 0x18003F290
 * Callers:
 *     sub_18003F088 @ 0x18003F088 (sub_18003F088.c)
 *     sub_18003F1A0 @ 0x18003F1A0 (sub_18003F1A0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 */

char __fastcall sub_18003F290(__int64 a1)
{
  int *v1; // rbx
  char result; // al
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = (int *)(a1 + 20);
  result = RtlPublishWnfStateData(*(_QWORD *)(a1 + 220), 0LL, a1 + 20, 4LL, 0LL);
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( result )
    {
      v6 = *v1;
      v7 = v5;
      return sub_1800624C0(v3, (unsigned int)&unk_1800A35C4, v4, v5, (__int64)&v7, (__int64)&v6);
    }
  }
  return result;
}
