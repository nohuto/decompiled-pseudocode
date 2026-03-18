/*
 * XREFs of sub_1C00496C0 @ 0x1C00496C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C00496C0(PDEVICE_OBJECT DeviceObject, _DWORD *a2, __int64 a3, _QWORD *a4, int a5, _QWORD *a6)
{
  char *v9; // rax
  _QWORD *v10; // rdx
  char *v11; // rsi
  ULONG v13; // edi
  __m128 *PoolWithTag; // rax
  char *v15; // rbx
  ULONG BufferLength; // [rsp+70h] [rbp+8h] BYREF

  BufferLength = 0;
  v9 = (char *)sub_1C0011220((__int64)DeviceObject);
  v10 = a6;
  v11 = v9;
  *a2 = 32;
  *a4 = &word_1C006B420;
  *v10 = DeviceObject;
  if ( (*((_DWORD *)v9 + 355) & 0x400) == 0 )
  {
    sub_1C004A608(*((_QWORD *)v9 + 148), 0, 99, 0, 0, -1073741436, 0, (__int64)aWmiC, 1624, 0);
    return 3221225860LL;
  }
  v13 = 80;
  if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0x50u, v9 + 2442, &BufferLength) != -1073741789 )
    return 0LL;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, BufferLength, 0x42554855u);
  v15 = (char *)PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, BufferLength);
    if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, BufferLength, v15, &BufferLength) >= 0 )
    {
      if ( BufferLength < 0x50 )
        v13 = BufferLength;
      sub_1C001D080(v11 + 2442, v15, v13);
      *((_WORD *)v11 + 1260) = 0;
    }
    ExFreePoolWithTag(v15, 0);
    return 0LL;
  }
  return 3221225626LL;
}
