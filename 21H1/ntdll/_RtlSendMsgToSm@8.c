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
  NTSTATUS v5; // ecx
  ULONG_PTR BufferLength; // [esp+10h] [ebp-148h] BYREF
  _PORT_MESSAGE SendMessageA; // [esp+18h] [ebp-140h] BYREF
  int v8; // [esp+38h] [ebp-120h]
  int v9; // [esp+140h] [ebp-18h]
  int v10; // [esp+148h] [ebp-10h]

  HIDWORD(BufferLength) = a1;
  v2 = a2[6];
  if ( v2 > 8 )
    return -1073741822;
  result = RtlpThunkSmMessage(a2, &SendMessageA);
  if ( result >= 0 )
  {
    v4 = dword_4B2993DC[2 * v2];
    LODWORD(BufferLength) = 312;
    memset(&SendMessageA, 0, 0x18u);
    SendMessageA.u1.s1.DataLength = RtlpSmMessageInfo[4 * v2] + 8;
    SendMessageA.u1.s1.TotalLength = SendMessageA.u1.s1.DataLength + 24;
    v5 = NtAlpcSendWaitReceivePort(
           (HANDLE)HIDWORD(BufferLength),
           !(v4 & 1) << 17,
           &SendMessageA,
           0,
           (v4 & 1) == 0 ? &SendMessageA : 0,
           &BufferLength,
           0,
           0);
    if ( v5 >= 0 )
    {
      v5 = *(&SendMessageA.CallbackId + 1);
      if ( *((int *)&SendMessageA.CallbackId + 1) >= 0 && v2 == 5 )
      {
        a2[8] = v8;
        a2[74] = v9;
        a2[75] = v10;
      }
    }
    return v5;
  }
  return result;
}
