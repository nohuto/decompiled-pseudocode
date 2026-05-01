/*
 * XREFs of sub_18003CB74 @ 0x18003CB74
 * Callers:
 *     sub_18003CAD0 @ 0x18003CAD0 (sub_18003CAD0.c)
 *     sub_18007DC40 @ 0x18007DC40 (sub_18007DC40.c)
 * Callees:
 *     sub_18003CBB4 @ 0x18003CBB4 (sub_18003CBB4.c)
 */

bool sub_18003CB74()
{
  NTSTATUS v0; // eax
  signed int v1; // ecx
  bool result; // al
  bool v3; // sf
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_18003CBB4(&v4);
  v1 = RtlNtStatusToDosError(v0);
  result = 0;
  v3 = v1 < 0;
  if ( v1 > 0 )
    v3 = 1;
  if ( !v3 )
    return v4 != 0;
  return result;
}
