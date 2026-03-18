/*
 * XREFs of sub_1C0053D28 @ 0x1C0053D28
 * Callers:
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 *     sub_1C00575A0 @ 0x1C00575A0 (sub_1C00575A0.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0029EB8 @ 0x1C0029EB8 (sub_1C0029EB8.c)
 */

void __fastcall sub_1C0053D28(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rbx
  void *v3; // rcx

  v2 = sub_1C0011220((__int64)Pdo);
  if ( (v2[355] & 0x400) != 0 )
    IoSetDevicePropertyData(Pdo, &PropertyKey, 0, 0, 0x1003u, 0, 0LL);
  ZwUpdateWnfStateData(&unk_1C0062160, 0LL, 0LL);
  sub_1C0029EB8(*((_QWORD *)v2 + 148), *((_WORD *)v2 + 714), (struct _UNICODE_STRING *)v2 + 151, (_BYTE *)v2 + 2432);
  v3 = (void *)*((_QWORD *)v2 + 303);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)v2 + 303) = 0LL;
  }
  *((_QWORD *)v2 + 301) = 0LL;
}
