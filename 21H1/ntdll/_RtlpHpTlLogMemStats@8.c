/*
 * XREFs of _RtlpHpTlLogMemStats@8 @ 0x4B3709FD
 * Callers:
 *     _RtlpHpSegFreeRangeInsert@12 @ 0x4B37B9EA (_RtlpHpSegFreeRangeInsert@12.c)
 *     _RtlpHpSegFreeRangeRemove@8 @ 0x4B37BAC9 (_RtlpHpSegFreeRangeRemove@8.c)
 *     _RtlpHpSegSegmentAllocate@12 @ 0x4B37D5F7 (_RtlpHpSegSegmentAllocate@12.c)
 *     _RtlpHpSegUpdateCommit@12 @ 0x4B37DA58 (_RtlpHpSegUpdateCommit@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

int __fastcall RtlpHpTlLogMemStats(int a1, int *a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8Ch] BYREF
  int v4; // [esp+8h] [ebp-88h] BYREF
  int v5; // [esp+Ch] [ebp-84h] BYREF
  int v6; // [esp+10h] [ebp-80h] BYREF
  int v7; // [esp+14h] [ebp-7Ch] BYREF
  _DWORD v8[29]; // [esp+18h] [ebp-78h] BYREF

  if ( (unsigned int)dword_4B3A33F0 > 5 )
  {
    v3 = a1;
    v8[8] = &v3;
    v4 = *a2;
    v8[12] = &v4;
    v5 = a2[1];
    v8[16] = &v5;
    v6 = a2[2];
    v8[20] = &v6;
    v7 = a2[3];
    v8[24] = &v7;
    v8[10] = 4;
    v8[14] = 4;
    v8[18] = 4;
    v8[22] = 4;
    v8[26] = 4;
    v8[9] = 0;
    v8[11] = 0;
    v8[13] = 0;
    v8[15] = 0;
    v8[17] = 0;
    v8[19] = 0;
    v8[21] = 0;
    v8[23] = 0;
    v8[25] = 0;
    v8[27] = 0;
    return _tlgWriteTransfer_EtwEventWriteTransfer(&dword_4B3A33F0, (unsigned __int8 *)byte_4B290EA5, 4, 4, 7, v8);
  }
  return result;
}
