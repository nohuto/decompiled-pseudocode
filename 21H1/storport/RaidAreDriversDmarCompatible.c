/*
 * XREFs of RaidAreDriversDmarCompatible @ 0x1C0032848
 * Callers:
 *     RaidInitializeDma @ 0x1C0078B88 (RaidInitializeDma.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAreDriversDmarCompatible(struct _DEVICE_OBJECT *a1)
{
  char result; // al
  ULONG v2; // [rsp+58h] [rbp+10h] BYREF
  ULONG v3; // [rsp+60h] [rbp+18h] BYREF
  int v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v3 = 0;
  v2 = 0;
  if ( IoGetDevicePropertyData(a1, &DEVPKEY_Device_DmaRemappingPolicy, 0, 0, 4u, &v4, &v3, &v2) < 0 )
    return 0;
  if ( v2 != 7 )
    return 0;
  if ( v3 != 4 )
    return 0;
  if ( v4 < 0 )
    return 0;
  result = 1;
  if ( v4 != 2 )
    return 0;
  return result;
}
