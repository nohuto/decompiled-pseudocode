/*
 * XREFs of _RtlSendMsgToSm@8 @ 0x4B35A940
 * Callers:
 *     <none>
 * Callees:
 *     _NtAlpcSendWaitReceivePort@32 @ 0x4B2F3240 (_NtAlpcSendWaitReceivePort@32.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpThunkSmMessage@8 @ 0x4B35AA42 (_RtlpThunkSmMessage@8.c)
 */

int __stdcall RtlSendMsgToSm(int a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  int result; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // [esp+10h] [ebp-148h] BYREF
  int v7; // [esp+14h] [ebp-144h]
  _WORD v8[14]; // [esp+18h] [ebp-140h] BYREF
  int v9; // [esp+34h] [ebp-124h]
  int v10; // [esp+38h] [ebp-120h]
  int v11; // [esp+140h] [ebp-18h]
  int v12; // [esp+148h] [ebp-10h]

  v7 = a1;
  v2 = a2[6];
  if ( v2 > 8 )
    return -1073741822;
  result = RtlpThunkSmMessage(a2, v8);
  if ( result >= 0 )
  {
    v4 = dword_4B2993DC[2 * v2];
    v6 = 312;
    memset(v8, 0, 0x18u);
    v8[0] = RtlpSmMessageInfo[4 * v2] + 8;
    v8[1] = v8[0] + 24;
    v5 = NtAlpcSendWaitReceivePort(
           v7,
           !(v4 & 1) << 17,
           (int)v8,
           0,
           (v4 & 1) == 0 ? (unsigned int)v8 : 0,
           (int)&v6,
           0,
           0);
    if ( v5 >= 0 )
    {
      v5 = v9;
      if ( v9 >= 0 && v2 == 5 )
      {
        a2[8] = v10;
        a2[74] = v11;
        a2[75] = v12;
      }
    }
    return v5;
  }
  return result;
}
