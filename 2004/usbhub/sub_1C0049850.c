/*
 * XREFs of sub_1C0049850 @ 0x1C0049850
 * Callers:
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

NTSTATUS __fastcall sub_1C0049850(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  NTSTATUS result; // eax

  v2 = sub_1C0011220((__int64)DeviceObject);
  v3 = v2;
  v2[334] = 3;
  if ( (v2[355] & 0x24) != 0 )
    v2[334] = 2;
  *((_QWORD *)v2 + 168) = &qword_1C006B440;
  *((_QWORD *)v2 + 169) = sub_1C00496C0;
  *((_QWORD *)v2 + 170) = sub_1C0049400;
  *((_QWORD *)v2 + 171) = 0LL;
  *((_QWORD *)v2 + 172) = 0LL;
  *((_QWORD *)v2 + 173) = 0LL;
  *((_QWORD *)v2 + 174) = 0LL;
  result = IoWMIRegistrationControl(DeviceObject, 1u);
  v3[355] |= 0x80u;
  return result;
}
