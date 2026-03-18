/*
 * XREFs of sub_1C0057E7C @ 0x1C0057E7C
 * Callers:
 *     sub_1C0055820 @ 0x1C0055820 (sub_1C0055820.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

void __fastcall sub_1C0057E7C(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rdi
  NTSTATUS v3; // eax
  int Data; // [rsp+58h] [rbp+10h] BYREF

  v2 = sub_1C0011220((__int64)Pdo);
  Data = v2[762];
  v3 = IoSetDevicePropertyData(Pdo, &stru_1C0062898, 0, 0, 7u, 4u, &Data);
  if ( v3 < 0 )
    sub_1C000FD80(*((_QWORD *)v2 + 148), 256, 1685221425, v3, (__int64)Pdo);
}
