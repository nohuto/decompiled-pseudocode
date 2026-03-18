/*
 * XREFs of sub_1C0057714 @ 0x1C0057714
 * Callers:
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 *     sub_1C00575A0 @ 0x1C00575A0 (sub_1C00575A0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001507C @ 0x1C001507C (sub_1C001507C.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     sub_1C0016670 @ 0x1C0016670 (sub_1C0016670.c)
 *     sub_1C0018D98 @ 0x1C0018D98 (sub_1C0018D98.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C0055654 @ 0x1C0055654 (sub_1C0055654.c)
 */

int __fastcall sub_1C0057714(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  _DWORD *v3; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rax

  v2 = sub_1C0011220((__int64)DeviceObject);
  v3 = sub_1C0011220((__int64)DeviceObject);
  if ( v3[280] != 100 )
  {
    v3 = sub_1C0011220((__int64)DeviceObject);
    if ( v3[280] != 102 )
    {
      sub_1C001507C(*((_QWORD *)v2 + 148), (__int64)DeviceObject, -1073741536);
      sub_1C0018D98(*((_QWORD *)v2 + 148), *((_QWORD *)v2 + 105), -1073741536);
      v4 = sub_1C0015C80(*((_QWORD *)v2 + 148), (__int64)DeviceObject, (__int64)DeviceObject, 0x48446C66u);
      if ( v4 )
      {
        v5 = sub_1C000F050(*((_QWORD *)v2 + 148));
        if ( *((_QWORD *)v5 + 546) )
          (*((void (__fastcall **)(_QWORD, __int64))v5 + 546))(*((_QWORD *)v5 + 529), v4);
        sub_1C0016670(*((_QWORD *)v2 + 148), v4, (__int64)DeviceObject, 0x48446C66u);
      }
      sub_1C0055654((__int64)DeviceObject);
      LODWORD(v3) = v2[355];
      if ( (char)v3 < 0 )
      {
        LODWORD(v3) = IoWMIRegistrationControl(DeviceObject, 2u);
        v2[355] &= ~0x80u;
      }
    }
  }
  return (int)v3;
}
