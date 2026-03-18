/*
 * XREFs of sub_1C0055654 @ 0x1C0055654
 * Callers:
 *     sub_1C0057714 @ 0x1C0057714 (sub_1C0057714.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

void __fastcall sub_1C0055654(__int64 a1)
{
  NTSTATUS v2; // edi
  _DWORD *v3; // rbx
  NTSTATUS v4; // eax
  void *v5; // rcx

  v2 = 0;
  v3 = sub_1C0011220(a1);
  if ( (v3[355] & 8) != 0 )
  {
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)v3 + 75, 0);
    v5 = (void *)*((_QWORD *)v3 + 151);
    v2 = v4;
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *((_QWORD *)v3 + 151) = 0LL;
    }
    v3[355] &= ~8u;
  }
  sub_1C000FD80(*((_QWORD *)v3 + 148), 256, 1937337676, v2, a1);
}
