/*
 * XREFs of Callback @ 0x1C0059BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0059E9C @ 0x1C0059E9C (sub_1C0059E9C.c)
 */

__int64 __fastcall Callback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, _QWORD *Context)
{
  unsigned int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // ecx

  v8 = -1073741811;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x17u, (__int64)&unk_1C0062110);
  v9 = Context[150];
  if ( RtlCompareMemory(SettingGuid, &::SettingGuid, 0x10uLL) == 16 && ValueLength == 4 && Value )
  {
    v10 = 2LL;
    v8 = 0;
    v11 = 2 - (*Value != 0);
    *((_DWORD *)Context + 1309) = v11;
    if ( v11 != 1 )
      v10 = 3LL;
    sub_1C0059E9C(v9, v10);
  }
  return v8;
}
