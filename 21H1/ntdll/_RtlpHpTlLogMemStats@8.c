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

ULONG __fastcall RtlpHpTlLogMemStats(int a1, int *a2)
{
  ULONG result; // eax
  int StackCookie; // [esp+4h] [ebp-8Ch] BYREF
  int StackCookie_4; // [esp+8h] [ebp-88h] BYREF
  int v5; // [esp+Ch] [ebp-84h] BYREF
  int v6; // [esp+10h] [ebp-80h] BYREF
  int v7; // [esp+14h] [ebp-7Ch] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+18h] [ebp-78h] BYREF
  int *p_StackCookie; // [esp+38h] [ebp-58h]
  int v10; // [esp+3Ch] [ebp-54h]
  int v11; // [esp+40h] [ebp-50h]
  int v12; // [esp+44h] [ebp-4Ch]
  int *p_StackCookie_4; // [esp+48h] [ebp-48h]
  int v14; // [esp+4Ch] [ebp-44h]
  int v15; // [esp+50h] [ebp-40h]
  int v16; // [esp+54h] [ebp-3Ch]
  int *v17; // [esp+58h] [ebp-38h]
  int v18; // [esp+5Ch] [ebp-34h]
  int v19; // [esp+60h] [ebp-30h]
  int v20; // [esp+64h] [ebp-2Ch]
  int *v21; // [esp+68h] [ebp-28h]
  int v22; // [esp+6Ch] [ebp-24h]
  int v23; // [esp+70h] [ebp-20h]
  int v24; // [esp+74h] [ebp-1Ch]
  int *v25; // [esp+78h] [ebp-18h]
  int v26; // [esp+7Ch] [ebp-14h]
  int v27; // [esp+80h] [ebp-10h]
  int v28; // [esp+84h] [ebp-Ch]

  if ( (unsigned int)dword_4B3A33F0 > 5 )
  {
    StackCookie = a1;
    p_StackCookie = &StackCookie;
    StackCookie_4 = *a2;
    p_StackCookie_4 = &StackCookie_4;
    v5 = a2[1];
    v17 = &v5;
    v6 = a2[2];
    v21 = &v6;
    v7 = a2[3];
    v25 = &v7;
    v11 = 4;
    v15 = 4;
    v19 = 4;
    v23 = 4;
    v27 = 4;
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    return _tlgWriteTransfer_EtwEventWriteTransfer(
             (int)&dword_4B3A33F0,
             (unsigned __int8 *)byte_4B290EA5,
             4,
             4,
             7u,
             &UserData);
  }
  return result;
}
