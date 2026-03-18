/*
 * XREFs of sub_1C0046BC0 @ 0x1C0046BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0044BA0 @ 0x1C0044BA0 (sub_1C0044BA0.c)
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 */

__int64 __fastcall sub_1C0046BC0(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h]
  ULONG v4; // [rsp+30h] [rbp-18h]
  int Data; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v4) = 1;
  v1 = (struct _DEVICE_OBJECT *)*((_QWORD *)sub_1C000F050(a1) + 149);
  Data = 0;
  result = sub_1C0044BA0(v1, L"HardResetCount", (char *)&Data, 4u, 0LL, 0LL, v4);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741772 )
  {
    if ( Data != -1 )
      ++Data;
    return sub_1C00469A4(v1, L"HardResetCount", 4u, &Data, 4u);
  }
  else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v3) = result;
      return sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x5Cu, (__int64)&unk_1C0063940, v3);
    }
  }
  return result;
}
